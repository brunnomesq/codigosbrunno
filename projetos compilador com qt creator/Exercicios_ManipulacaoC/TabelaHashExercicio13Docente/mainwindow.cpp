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
    //para sumir a contagem na tabela
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    //para nao editar a tabela
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    try {
        nomeDoArquivoNoDisco = "C:/Users/brunn/Desktop/Exercicios_ManipulacaoC/TabelaHashExercicio13Docente/Arquivo/DocentesEscola.csv";
        if(nomeDoArquivoNoDisco.isEmpty()){
           throw QString("Arquivo nao foi selecionado");
        }
        QFile arquivo(nomeDoArquivoNoDisco);
        if (!arquivo.open(QIODevice::ReadOnly)) {
                    throw QString("Erro ao abrir o arquivo");
        }
        tamanho=26;
        //colisoes=79;
        arquivo.close();
        ui->textEdit->clear();
            teste=new ed2::Arquivo(nomeDoArquivoNoDisco,tamanho,colisoes);
            teste->lerArquivo();
            listaDeProfessores = teste->getColecao();
            if (listaDeProfessores->obterTamanho()<= 0) {
                throw QString("Nenhum dado encontrado no arquivo.");
            }
            atualizarTabela();
            ui->tableWidget->verticalHeader()->setVisible(false);
     qDebug()<<"terminou";
    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    }

}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::atualizarTabela(){
    ui->tableWidget->setRowCount(0);
    QString letra = ui->comboBox_Letras->currentText();
    QChar caractere = letra.at(0).toUpper(); // Certifique-se de converter para maiúscula
    int i = caractere.toLatin1() - 'A'; //-65
    int tamanhoChaves=listaDeProfessores->obterTamanhoDasChaves(i);
    QTableWidgetItem *nameHeaderItem = new QTableWidgetItem("Pos "+letra);
    ui->tableWidget->setHorizontalHeaderItem(0, nameHeaderItem);
    for(int c=0; c<tamanhoChaves;c++){
        int linha=ui->tableWidget->rowCount();
        QTableWidgetItem *itemMatricula = new QTableWidgetItem(QString::number(listaDeProfessores->obterDados(i,c).getMatricula()));
        QTableWidgetItem *itemNome = new QTableWidgetItem(listaDeProfessores->obterDados(i,c).getNome());
        QTableWidgetItem *itemDepartamento = new QTableWidgetItem(listaDeProfessores->obterDados(i,c).getDepartamento());
        QTableWidgetItem *itemTitulacao = new QTableWidgetItem(listaDeProfessores->obterDados(i,c).getTitulacao());
        QTableWidgetItem *itemTipoDeContrato = new QTableWidgetItem(listaDeProfessores->obterDados(i,c).getTipoContrato());
        ui->tableWidget->insertRow(linha);
        ui->tableWidget->setItem(c, 0, itemMatricula);
        ui->tableWidget->setItem(c, 1, itemNome);
        ui->tableWidget->setItem(c, 2, itemDepartamento);
        ui->tableWidget->setItem(c, 3, itemTitulacao);
        ui->tableWidget->setItem(c, 4, itemTipoDeContrato);
    }
}
void MainWindow::on_pushButton_Encontrar_clicked()
{
    try{

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
    int posicao=listaDeProfessores->encontrarPosicao(opcao,texto,texto2,letra);//pode dar erro conferir depois

    if(posicao!=-1&&posicao!=-2){
        atualizarTabela();
    }
    else if (posicao==-1){
        throw QString("Posicao não encontrada!");
    }else if(posicao==-2){
        throw QString("Posicao não encontrada ou a Matricula não é a mesma do Nome.");
    }
    ui->textEdit->setText(listaDeProfessores->obterDados(valorAscii-65,posicao).toString()+"\nPosicao na tabela: "+QString::number(posicao));
    }catch (QString &erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    }

}

void MainWindow::on_pushButton_Remover_clicked()
{
    try{
    QString letra;
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
    int posicao=listaDeProfessores->encontrarPosicao("Busca Matricula",nome,matriculaTexto,letra);
    listaDeProfessores->remover(matricula,nome,letra);
    atualizarTabela();

    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->textEdit->setText(+"Matricula "+matriculaTexto+ "Removida na tabela: "+QString::number(posicao));
    }catch (QString &erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    }


}


void MainWindow::on_pushButton_Inserir_clicked()
{
    try{
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
    int posicao=listaDeProfessores->encontrarPosicao(opcao,nome,matriculaTexto,letra);//pode dar erro conferir depois
    atualizarTabela();
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->textEdit->setText("A matricula "+QString::number(matricula)+" na posicao "+QString::number(posicao)+" foi inserida");

    }catch (QString &erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    }
}

void MainWindow::on_pushButton_Alterar_clicked()
{
    try{
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
    int posicao=listaDeProfessores->encontrarPosicao(opcao,nome,matriculaTexto,letra);//pode dar erro conferir depois
    atualizarTabela();
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->textEdit->setText("A matricula "+QString::number(matricula)+" na posicao "+QString::number(posicao)+" foi alterada");
    }catch (QString &erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    }
}





