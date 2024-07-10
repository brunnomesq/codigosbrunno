#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnWidth(0,60);
    ui->tableWidget->setColumnWidth(1,300);
    ui->tableWidget->setColumnWidth(2,70);
    ui->tableWidget->setColumnWidth(3,150);
    ui->tableWidget->setColumnWidth(4,100);

    //para sumir a contagem na tabela
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    //para nao editar a tabela
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->stackedWidget->setCurrentWidget(ui->page);
    ui->stackedWidget_2->setCurrentWidget(ui->page_0);
    tamanho=26;
    colisoes=79;

    ui->comboBox_Dep->clear();
    ui->comboBox_Dep->addItem("ADM");ui->comboBox_Dep->addItem("ADV");ui->comboBox_Dep->addItem("ARQ");
    ui->comboBox_Dep->addItem("BIO");ui->comboBox_Dep->addItem("CBB");ui->comboBox_Dep->addItem("CBM");ui->comboBox_Dep->addItem("CMP");
    ui->comboBox_Dep->addItem("CON");ui->comboBox_Dep->addItem("DEF");ui->comboBox_Dep->addItem("EDU");
    ui->comboBox_Dep->addItem("ENG");ui->comboBox_Dep->addItem("ECO");ui->comboBox_Dep->addItem("FIT");
    ui->comboBox_Dep->addItem("FONO");ui->comboBox_Dep->addItem("GAB/ITS");ui->comboBox_Dep->addItem("HGS");
    ui->comboBox_Dep->addItem("IGPA");ui->comboBox_Dep->addItem("JUR");ui->comboBox_Dep->addItem("LET");
    ui->comboBox_Dep->addItem("MAF");ui->comboBox_Dep->addItem("MED");ui->comboBox_Dep->addItem("PSI");
    ui->comboBox_Dep->addItem("PUC/IDIOMA");ui->comboBox_Dep->addItem("SER");ui->comboBox_Dep->addItem("ZOO");
    ui->comboBox_Dep->addItem("ENF");ui->comboBox_Dep->addItem("DEF");ui->comboBox_Dep->addItem("DEFD");
    ui->comboBox_Tit->clear();
    ui->comboBox_Tit->addItem("Doutor(a)");ui->comboBox_Tit->addItem("Especialista");
    ui->comboBox_Tit->addItem("Bacharelado");ui->comboBox_Tit->addItem("Mestre(a)");
    ui->comboBox_Tit->addItem("Pos-Doutor(a)");
    ui->comboBox_Tip->clear();
    ui->comboBox_Tip->addItem("Horista");ui->comboBox_Tip->addItem("TI");


}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonBuscarNomeArquivo_clicked()
{
    try {
        // nomeDoArquivoNoDisco - atributo da classe MainWindow
        //Buscando o arquivo no disco
        nomeDoArquivoNoDisco = QFileDialog::getOpenFileName(this,"Abrir Arquivo",QDir::currentPath(),"Arquivos Textos (*.csv *.txt)");
        if(nomeDoArquivoNoDisco.isEmpty()){
           throw QString("Arquivo nao foi selecionado");
        }
        QFile arquivo(nomeDoArquivoNoDisco);
        if (!arquivo.open(QIODevice::ReadOnly)) {
                    throw QString("Erro ao abrir o arquivo");
        }

                // Fechando o arquivo
        arquivo.close();
        ui->lineEditNomeDoArquivo->setText(nomeDoArquivoNoDisco);
        ui->textEdit->clear();
            teste=new brn::ManipularArquivo(nomeDoArquivoNoDisco,tamanho,colisoes);
            teste->buscarDadosNoArquivo();

            listaDeProfessores = teste->getColecaoDeProfessor();


            if (listaDeProfessores->getTamanho()<= 0) {
                throw QString("Nenhum dado encontrado no arquivo.");
            }
           // qDebug()<<totalProfessores;
           // qDebug()<<listaDeProfessores->getDados(0,0).getNome();
            atualizarTabela();

            // Oculta as linhas e colunas de grade que contam
            ui->tableWidget->verticalHeader()->setVisible(false);
            ui->pushButton_EncontrarBS->setEnabled(true);
            ui->pushButton_RemoverBS->setEnabled(true);
            ui->pushButton_InserirBS->setEnabled(true);
            ui->pushButton_AlterarBS->setEnabled(true);
            ui->stackedWidget->setCurrentWidget(ui->page);
            ui->stackedWidget_2->setCurrentWidget(ui->page_0);

    } catch (QString &erro) {
            QString mensagem = "<span style='color:#CCCCCC; font-family:Franklin Gothic Demi; font-size:12pt;'><b>" + erro + "</b></span>"; // Define a cor, a fonte e o tamanho
            QMessageBox messageBox;
            messageBox.setTextFormat(Qt::RichText); // Define o formato do texto como RichText (HTML)
            messageBox.critical(this, "Erro", mensagem);
    }
}


void MainWindow::atualizarTabela(){
    ui->tableWidget->setRowCount(0);
    QString letra = ui->comboBox_Letras->currentText();
    QChar caractere = letra.at(0).toUpper(); // Certifique-se de converter para maiúscula
    int i = caractere.toLatin1() - 'A'; //-65
    int tamanhoChaves=listaDeProfessores->getTamanhoDasChaves(i);
    QTableWidgetItem *nameHeaderItem = new QTableWidgetItem("Pos "+letra);
    ui->tableWidget->setHorizontalHeaderItem(0, nameHeaderItem);
    for(int c=0; c<tamanhoChaves;c++){
        int linha=ui->tableWidget->rowCount();
        QTableWidgetItem *itemMatricula = new QTableWidgetItem(QString::number(listaDeProfessores->getDados(i,c).getMatricula()));
        QTableWidgetItem *itemNome = new QTableWidgetItem(listaDeProfessores->getDados(i,c).getNome());
        QTableWidgetItem *itemDepartamento = new QTableWidgetItem(listaDeProfessores->getDados(i,c).getDepartamento());
        QTableWidgetItem *itemTitulacao = new QTableWidgetItem(listaDeProfessores->getDados(i,c).getTitulacao());
        QTableWidgetItem *itemTipoDeContrato = new QTableWidgetItem(listaDeProfessores->getDados(i,c).getTipo_de_contrato());
        ui->tableWidget->insertRow(linha);
        ui->tableWidget->setItem(c, 0, itemMatricula);
        ui->tableWidget->setItem(c, 1, itemNome);
        ui->tableWidget->setItem(c, 2, itemDepartamento);
        ui->tableWidget->setItem(c, 3, itemTitulacao);
        ui->tableWidget->setItem(c, 4, itemTipoDeContrato);
        //qDebug()<<c<<listaDeProfessores->getDados(i,c).getTitulacao();
    }


}
void MainWindow::on_pushButton_Encontrar_clicked()
{
    try{
    ui->comboBox_Dep->setEnabled(false);
    ui->comboBox_Tip->setEnabled(false);
    ui->comboBox_Tit->setEnabled(false);
    QString texto=ui->lineEdit_Nome->text();
    QString texto2=ui->lineEdit_Mat->text();
    int matricula=texto2.toInt();
    QString letra;
    if(texto2==""&&texto==""){
        throw QString("Não pode ficar vazio!");
    }
    if(texto!=""){
        letra=texto.toUpper().at(0);
    }else{
        int ascii=listaDeProfessores->buscaLetra(matricula);
        if(ascii==-1){
            throw QString("Matricula não existe");
        }
        char asciiChar = static_cast<char>(ascii);
        letra= QString(asciiChar);
    }
    qDebug()<<letra;

    QChar Pletra=letra.at(0);
    char asciiValue = Pletra.toLatin1();
    int valorAscii=asciiValue;

    QString opcao;

    ui->comboBox_Letras->setCurrentIndex(valorAscii-65);
    opcao="Busca Nome";
    if(texto!=""&&texto2==""){
        opcao="Busca Nome";
    }else if(texto==""&&texto2!=""){
        opcao="Busca Matricula";
    }else if(texto!=""&&texto2!=""){
        opcao="Busca Nome-Matricula";
    }else if(texto==""&&texto2==""){
        throw QString("O campo da matricula e nome não podem estar vazios!");
    }
    int posicao=listaDeProfessores->encontrarPos(opcao,texto,texto2,letra);//pode dar erro conferir depois

    if(posicao!=-1&&posicao!=-2){

        atualizarTabela();

        QTableWidgetItem *item = ui->tableWidget->item(posicao, 0); // Supondo que a coluna 0 contém os nomes dos professores
                if (item) {
                    ui->tableWidget->scrollToItem(item);

                    QColor corAmarelaSuave(255, 255, 153); // RGB: 255, 255, 153
                    ui->tableWidget->item(posicao, 0)->setBackground(corAmarelaSuave);
                    ui->tableWidget->item(posicao, 1)->setBackground(corAmarelaSuave);
                    ui->tableWidget->item(posicao, 2)->setBackground(corAmarelaSuave);
                    ui->tableWidget->item(posicao, 3)->setBackground(corAmarelaSuave);
                    ui->tableWidget->item(posicao, 4)->setBackground(corAmarelaSuave);
                }
    }
    else if (posicao==-1){
        throw QString("Posicao não encontrada!");
    }else if(posicao==-2){
        throw QString("Posicao não encontrada ou a Matricula não é a mesma do Nome.");
    }
    ui->textEdit->setText(listaDeProfessores->getDados(valorAscii-65,posicao).toString()+"\nPosicao na tabela: "+QString::number(posicao));
    }catch (QString &erro) {
            QString mensagem = "<span style='color:#CCCCCC; font-family:Franklin Gothic Demi; font-size:12pt;'><b>" + erro + "</b></span>"; // Define a cor, a fonte e o tamanho
            QMessageBox messageBox;
            messageBox.setTextFormat(Qt::RichText); // Define o formato do texto como RichText (HTML)
            messageBox.critical(this, "Erro", mensagem);
    }

}

void MainWindow::on_pushButton_Remover_clicked()
{
    try{
    ui->comboBox_Dep->setEnabled(false);
    ui->comboBox_Tip->setEnabled(false);
    ui->comboBox_Tit->setEnabled(false);


    QString letra;
    //QChar Pletra=letra.at(0);
    //char asciiValue = Pletra.toLatin1();
    //int valorAscii=asciiValue;
    int matricula=ui->lineEdit_Mat->text().toInt();//.toInt-1
    QString matriculaTexto=ui->lineEdit_Mat->text();
    QString nome= ui->lineEdit_Nome->text();
    if(nome!=""){
        letra=nome.toUpper().at(0);
    }else{
        int ascii=listaDeProfessores->buscaLetra(matricula);
        if(ascii==-1){
            throw QString("Matricula não existe");
        }
        char asciiChar = static_cast<char>(ascii);
        letra= QString(asciiChar);
    }
    nome=nome.toUpper();
    if(nome==""&&matricula==-1){
       throw QString("O campo da matricula e nome não podem estar vazios!");
    }
    QChar Pletra=letra.at(0);
    char asciiValue = Pletra.toLatin1();
    int valorAscii=asciiValue;
    ui->comboBox_Letras->setCurrentIndex(valorAscii-65);
    int posicao=listaDeProfessores->encontrarPos("Busca Matricula",nome,matriculaTexto,letra);
    listaDeProfessores->remover(matricula,nome,letra);


    if(posicao!=-1&&posicao!=-2){

        atualizarTabela();
        QTableWidgetItem *item = ui->tableWidget->item(posicao-1, 0); // Supondo que a coluna 0 contém os nomes dos professores
                if (item) {
                    ui->tableWidget->scrollToItem(item);
                }
    }
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->textEdit->setText(+"Matricula Removida na tabela: "+QString::number(posicao));
    }catch(QString &erro){
            QString mensagem = "<span style='color:#CCCCCC; font-family:Franklin Gothic Demi; font-size:12pt;'><b>" + erro + "</b></span>"; // Define a cor, a fonte e o tamanho
            QMessageBox messageBox;
            messageBox.setTextFormat(Qt::RichText); // Define o formato do texto como RichText (HTML)
            messageBox.critical(this, "Erro", mensagem);
    }


}


void MainWindow::on_pushButton_Inserir_clicked()
{

    try{
    ui->comboBox_Dep->setEnabled(true);
    ui->comboBox_Tip->setEnabled(true);
    ui->comboBox_Tit->setEnabled(true);
    QString opcao="Busca Matricula";

    int matricula=ui->lineEdit_Mat->text().toInt();//.toInt-1

    int verificadorMat=listaDeProfessores->buscaLetra(matricula);

    if(verificadorMat!=-1){
        throw QString("Essa matricula já existe, pode estar em outra letra");
    }

    QString matriculaTexto=ui->lineEdit_Mat->text();
    QString nome= ui->lineEdit_Nome->text();
    if(nome==""){
        throw QString("O campo nome nao pode ficar vazio!");
    }
    QString departamento=ui->comboBox_Dep->currentText();
    QString titulacao=ui->comboBox_Tit->currentText();
    QString tipo=ui->comboBox_Tip->currentText();
    QString letra=nome.toUpper().at(0);
    QChar Pletra=letra.at(0);
    char asciiValue = Pletra.toLatin1();
    int valorAscii=asciiValue;
    ui->comboBox_Letras->setCurrentIndex(valorAscii-65);
    if(matricula==-1){
       throw QString("O campo da matricula não pode estar vazio!");
    }



    listaDeProfessores->inserir(matricula,nome,departamento,titulacao,tipo,letra);
    int posicao=listaDeProfessores->encontrarPos(opcao,nome,matriculaTexto,letra);//pode dar erro conferir depois
    if(posicao!=-1&&posicao!=-2){

        atualizarTabela();
        QTableWidgetItem *item = ui->tableWidget->item(posicao, 0); // Supondo que a coluna 0 contém os nomes dos professores
                if (item) {
                    ui->tableWidget->scrollToItem(item);

                    QColor corAzulSuave(153, 204, 255); // RGB: 255, 255, 153
                    ui->tableWidget->item(posicao, 0)->setBackground(corAzulSuave);
                    ui->tableWidget->item(posicao, 1)->setBackground(corAzulSuave);
                    ui->tableWidget->item(posicao, 2)->setBackground(corAzulSuave);
                    ui->tableWidget->item(posicao, 3)->setBackground(corAzulSuave);
                    ui->tableWidget->item(posicao, 4)->setBackground(corAzulSuave);
                }
    }

    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->textEdit->setText("A matricula "+QString::number(matricula)+" na posicao "+QString::number(posicao)+" foi inserida");

    }catch(QString &erro){
            QString mensagem = "<span style='color:#CCCCCC; font-family:Franklin Gothic Demi; font-size:12pt;'><b>" + erro + "</b></span>"; // Define a cor, a fonte e o tamanho
            QMessageBox messageBox;
            messageBox.setTextFormat(Qt::RichText); // Define o formato do texto como RichText (HTML)
            messageBox.critical(this, "Erro", mensagem);
    }

}

void MainWindow::on_pushButton_Alterar_clicked()
{
    try{
    ui->comboBox_Dep->setEnabled(true);
    ui->comboBox_Tip->setEnabled(true);
    ui->comboBox_Tit->setEnabled(true);
    QString opcao="Busca Matricula";
    QString matriculaTexto=ui->lineEdit_Mat->text();

    int matricula=ui->lineEdit_Mat->text().toInt();//.toInt-1

    int verificadorMat=listaDeProfessores->buscaLetra(matricula);

    if(verificadorMat==-1){
        throw QString("Essa matricula não existe");
    }

    QString nome= ui->lineEdit_Nome->text();

    if(nome==""){
        throw QString("O campo nome nao pode ficar vazio!");
    }
    QString departamento=ui->comboBox_Dep->currentText();
    QString titulacao=ui->comboBox_Tit->currentText();
    QString tipo=ui->comboBox_Tip->currentText();
    QString letra=nome.toUpper().at(0);
    QChar Pletra=letra.at(0);
    char asciiValue = Pletra.toLatin1();
    int valorAscii=asciiValue;
    ui->comboBox_Letras->setCurrentIndex(valorAscii-65);
    if(matricula==-1){
            throw QString("O campo da matricula não pode estar vazio!");
        }
    listaDeProfessores->alterar(matricula,nome,departamento,titulacao,tipo,letra);

    int posicao=listaDeProfessores->encontrarPos(opcao,nome,matriculaTexto,letra);//pode dar erro conferir depois
    if(posicao!=-1&&posicao!=-2){
       atualizarTabela();
       QTableWidgetItem *item = ui->tableWidget->item(posicao, 0); // Supondo que a coluna 0 contém os nomes dos professores
               if (item) {
                   ui->tableWidget->scrollToItem(item);

                   QColor corVerdeSuave(144, 238, 144); // RGB: 255, 255, 153
                   ui->tableWidget->item(posicao, 0)->setBackground(corVerdeSuave);
                   ui->tableWidget->item(posicao, 1)->setBackground(corVerdeSuave);
                   ui->tableWidget->item(posicao, 2)->setBackground(corVerdeSuave);
                   ui->tableWidget->item(posicao, 3)->setBackground(corVerdeSuave);
                   ui->tableWidget->item(posicao, 4)->setBackground(corVerdeSuave);
               }
    }

    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->textEdit->setText("A matricula "+QString::number(matricula)+" na posicao "+QString::number(posicao)+" foi alterada");
    }catch(QString &erro){
            QString mensagem = "<span style='color:#CCCCCC; font-family:Franklin Gothic Demi; font-size:12pt;'><b>" + erro + "</b></span>"; // Define a cor, a fonte e o tamanho
            QMessageBox messageBox;
            messageBox.setTextFormat(Qt::RichText); // Define o formato do texto como RichText (HTML)
            messageBox.critical(this, "Erro", mensagem);
    }

}

void MainWindow::on_pushButton_AlterarBS_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_alterar);
    ui->stackedWidget_2->setCurrentWidget(ui->page_Nome_Matricula);
    ui->stackedWidget_3->setCurrentWidget(ui->page_ativado);
    ui->comboBox_Dep->setEnabled(true);
    ui->comboBox_Tip->setEnabled(true);
    ui->comboBox_Tit->setEnabled(true);
}

void MainWindow::on_pushButton_InserirBS_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_inserir);
    ui->stackedWidget_2->setCurrentWidget(ui->page_Nome_Matricula);
    ui->stackedWidget_3->setCurrentWidget(ui->page_ativado);
    ui->comboBox_Dep->setEnabled(true);
    ui->comboBox_Tip->setEnabled(true);
    ui->comboBox_Tit->setEnabled(true);
}

void MainWindow::on_pushButton_RemoverBS_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_remover);
    ui->stackedWidget_2->setCurrentWidget(ui->page_Nome_Matricula);
    ui->stackedWidget_3->setCurrentWidget(ui->page_2);
    ui->comboBox_Dep->setEnabled(false);
    ui->comboBox_Tip->setEnabled(false);
    ui->comboBox_Tit->setEnabled(false);
}

void MainWindow::on_pushButton_EncontrarBS_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_procurar);
    ui->stackedWidget_2->setCurrentWidget(ui->page_Nome_Matricula);
    ui->stackedWidget_3->setCurrentWidget(ui->page_2);
    ui->comboBox_Dep->setEnabled(false);
    ui->comboBox_Tip->setEnabled(false);
    ui->comboBox_Tit->setEnabled(false);
}

void MainWindow::on_comboBox_Letras_currentIndexChanged()
{
    if(ui->lineEditNomeDoArquivo->text()!=""){
        atualizarTabela();
    }
}

