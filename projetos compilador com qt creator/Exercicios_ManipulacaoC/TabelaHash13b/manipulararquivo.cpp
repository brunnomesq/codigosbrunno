#include "manipulararquivo.h"
#include <QDebug>
namespace ed2 {

Funcoes *ManipularArquivo::getColecao() const
{
    return colecaoDeProfessor;
}

ManipularArquivo::ManipularArquivo(QString nomeDoArquivo, int tamanho,int colisoes)
    : nomeDoArquivoNoDisco(nomeDoArquivo), colecaoDeProfessor()
{
    this->colecaoDeProfessor=new ed2::Funcoes(tamanho,colisoes);
}
void ManipularArquivo::lerArquivo(){
    try {
        // criando um arquivo de entrada
        std::ifstream arquivo;
        // abrindo um arquivo de entrada
        arquivo.open(nomeDoArquivoNoDisco.toStdString().c_str());
        // verificando erro de abertura do arquivo de entrada
        if(!arquivo.is_open()) throw QString("ERRO Arquivo nao pode ser aberto");
        // Lendo dados do arquivo texto
        std::string linha;
        int pos=0;
        // lendo do arquivo
        getline(arquivo,linha);
        while(!arquivo.eof()){
            //qDebug()<<"linha"<<pos<<"chegou";
            QString texto = QString::fromStdString(linha);
            QStringList strList = texto.split(';');
            int matricula = strList[0].toInt();
            QString nome = strList[1];
            QString departamento = strList[2];
            QString titulacao = strList[3];
            QString tipo_de_contrato = strList[4];
            Docentes d(matricula,nome,departamento,titulacao,tipo_de_contrato);
            //Incluindo valores no vetor
            colecaoDeProfessor->gerar(d,nome);

            pos++;
            //lendo do arquivo
            getline(arquivo,linha);

        }

        arquivo.close();
    } catch (QString &erro) {
        throw erro;
    }
}
}
