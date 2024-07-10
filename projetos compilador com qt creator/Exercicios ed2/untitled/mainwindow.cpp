#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnWidth(0,36);
    ui->tableWidget->setColumnWidth(1,254);
    ui->tableWidget->setColumnWidth(2,254);
    ui->tableWidget->setColumnWidth(3,254);

    //para sumir a contagem na tabela
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    //para nao editar a tabela
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->stackedWidget->setCurrentWidget(ui->page);
    ui->stackedWidget_2->setCurrentWidget(ui->page_0);
    ui->comboBox_Dep->clear();
    ui->comboBox_Dep->addItem("ADM");ui->comboBox_Dep->addItem("ADV ");ui->comboBox_Dep->addItem("ARQ");
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
        tamanho=1001;
        colisoes=3;
                // Fechando o arquivo
        arquivo.close();
        ui->lineEditNomeDoArquivo->setText(nomeDoArquivoNoDisco);
        ui->pushButton_EncontrarBS->setEnabled(false);
        ui->pushButton_RemoverBS->setEnabled(false);
        ui->pushButton_InserirBS->setEnabled(false);
        ui->pushButton_AlterarBS->setEnabled(false);
        ui->stackedWidget->setCurrentWidget(ui->page);
        ui->stackedWidget_2->setCurrentWidget(ui->page_0);
        ui->pushButtonMostrarDados->setEnabled(true);

    } catch (QString &erro) {
            QString mensagem = "<span style='color:#CCCCCC; font-family:Franklin Gothic Demi; font-size:12pt;'><b>" + erro + "</b></span>"; // Define a cor, a fonte e o tamanho
            QMessageBox messageBox;
            messageBox.setTextFormat(Qt::RichText); // Define o formato do texto como RichText (HTML)
            messageBox.critical(this, "Erro", mensagem);
    }
}


void MainWindow::on_pushButtonMostrarDados_clicked(){
    try {
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
    int contador=0;
    for (int i = 0; i < listaDeProfessores->getTamanho(); i++) {
        if(listaDeProfessores->getTamanhoDasChaves(i)>0){
            QTableWidgetItem *itemPosicao = new QTableWidgetItem(QString::number(i));
            int linha=ui->tableWidget->rowCount();
            ui->tableWidget->insertRow(linha);
            ui->tableWidget->setRowHeight(contador,100);
            ui->tableWidget->setItem(contador, 0, itemPosicao);
            int tamanhoChaves=listaDeProfessores->getTamanhoDasChaves(i);
            for(int c=0; c<tamanhoChaves;c++){
                QTableWidgetItem *item = new QTableWidgetItem(listaDeProfessores->getDados(i,c).toString());
                ui->tableWidget->setItem(contador, c+1, item);
            }
            contador++;
        }

    }
}
void MainWindow::on_pushButton_Encontrar_clicked()
{
    try{
    ui->comboBox_Dep->setEnabled(false);
    ui->comboBox_Tip->setEnabled(false);
    ui->comboBox_Tit->setEnabled(false);
    QString texto,texto2;
    QString opcao;

    texto=ui->lineEdit_Nome->text();
    texto2=ui->lineEdit_Mat->text();
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
    int posicao=listaDeProfessores->encontrarPos(opcao,texto,texto2);//pode dar erro conferir depois
    int chave=listaDeProfessores->getPosicaoNaChave();
    int novaposicao=-1;

    if(posicao!=-1&&posicao!=-2){
        for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
            QTableWidgetItem *item = ui->tableWidget->item(row, 0);
            if (item && item->text() == QString::number(posicao)) {

                novaposicao= row;
            }
        }
        atualizarTabela();
        ui->pushButton_EncontrarBS->setEnabled(true);

        QTableWidgetItem *item = ui->tableWidget->item(novaposicao, 0); // Supondo que a coluna 0 contém os nomes dos professores
                if (item) {
                    ui->tableWidget->scrollToItem(item);

                    QColor corAmarelaSuave(255, 255, 153); // RGB: 255, 255, 153
                    ui->tableWidget->item(novaposicao, chave+1)->setBackground(corAmarelaSuave);
                }
    }
    else if (posicao==-1){
        throw QString("Posicao não encontrada!");
    }else if(posicao==-2){
        throw QString("Posicao não encontrada ou a Matricula não é a mesma do Nome.");
    }
    ui->textEdit->setText(listaDeProfessores->getDados(posicao,chave).toString()+"\nPosicao na tabela: "+QString::number(posicao));
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
    int matricula=ui->lineEdit_Mat->text().toInt();//.toInt-1
    QString nome= ui->lineEdit_Nome->text();
    if(nome==""&&matricula==-1){
            throw QString("O campo da matricula e nome não podem estar vazios!");
        }
    int posicao=matricula % listaDeProfessores->getTamanho();
    int novaposicao=-1;

    if(posicao!=-1&&posicao!=-2){
        for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
            QTableWidgetItem *item = ui->tableWidget->item(row, 0);
            if (item && item->text() == QString::number(posicao)) {

                novaposicao= row;
            }
        }

    }
    listaDeProfessores->remover(matricula,nome);
    atualizarTabela();
    QTableWidgetItem *item = ui->tableWidget->item(novaposicao, 0); // Supondo que a coluna 0 contém os nomes dos professores
            if (item) {
                ui->tableWidget->scrollToItem(item);

                QColor corVermelhoSuave(255, 153, 153); // R: 153, G: 204, B: 255
                ui->tableWidget->item(novaposicao, 0)->setBackground(corVermelhoSuave);
            }/*else{
                QPalette palette = ui->textEdit->palette();

                // Definindo a cor da fonte na paleta
                palette.setColor(QPalette::Text, "#800000");

                // Aplicando a paleta ao QTextEdit
                ui->textEdit->setPalette(palette);
                ui->textEdit->setText("Matricula "+QString::number(matricula)+" removida junto com a posicao "+QString::number(posicao));
            }*/
    // Oculta as linhas e colunas de grade que contam
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->textEdit->setText("A matricula "+QString::number(matricula)+" da posicao "+QString::number(posicao)+" foi removida");

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

    int matricula=ui->lineEdit_Mat->text().toInt();//.toInt-1
    QString nome= ui->lineEdit_Nome->text();
    QString departamento=ui->comboBox_Dep->currentText();
    QString titulacao=ui->comboBox_Tit->currentText();
    QString tipo=ui->comboBox_Tip->currentText();
    if(matricula==-1){
            throw QString("O campo da matricula não pode estar vazio!");
        }

    listaDeProfessores->inserir(matricula,nome,departamento,titulacao,tipo);
    atualizarTabela();

    int posicao=matricula % listaDeProfessores->getTamanho();
    int chave = listaDeProfessores->CalcularChave(matricula);
    int novaposicao=-1;

    if(posicao!=-1&&posicao!=-2){
        for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
            QTableWidgetItem *item = ui->tableWidget->item(row, 0);
            if (item && item->text() == QString::number(posicao)) {

                novaposicao= row;
            }
        }

        QTableWidgetItem *item = ui->tableWidget->item(novaposicao, 0); // Supondo que a coluna 0 contém os nomes dos professores
                if (item) {
                    ui->tableWidget->scrollToItem(item);

                    QColor corAzulSuave(153, 204, 255); // R: 153, G: 204, B: 255
                    ui->tableWidget->item(novaposicao, chave+1)->setBackground(corAzulSuave);
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

    int matricula=ui->lineEdit_Mat->text().toInt();//.toInt-1
    QString nome= ui->lineEdit_Nome->text();
    QString departamento=ui->comboBox_Dep->currentText();
    QString titulacao=ui->comboBox_Tit->currentText();
    QString tipo=ui->comboBox_Tip->currentText();
    if(matricula==-1){
            throw QString("O campo da matricula não pode estar vazio!");
        }
    listaDeProfessores->alterar(matricula,nome,departamento,titulacao,tipo);
    atualizarTabela();

    int posicao=matricula % listaDeProfessores->getTamanho();
    int chave = listaDeProfessores->CalcularChave(matricula);
    int novaposicao=-1;

    if(posicao!=-1&&posicao!=-2){
        for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
            QTableWidgetItem *item = ui->tableWidget->item(row, 0);
            if (item && item->text() == QString::number(posicao)) {

                novaposicao= row;
            }
        }

        QTableWidgetItem *item = ui->tableWidget->item(novaposicao, 0); // Supondo que a coluna 0 contém os nomes dos professores
                if (item) {
                    ui->tableWidget->scrollToItem(item);

                    QColor corVerdeSuave(144, 238, 144);
                    ui->tableWidget->item(novaposicao, chave+1)->setBackground(corVerdeSuave);
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





