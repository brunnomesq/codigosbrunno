#include "manipulararquivo.h"
namespace ejm {
const ListaLSE &ManipularArquivo::getColecaoDePilotosF1() const
{
    return colecaoDePilotosF1;
}
ManipularArquivo::ManipularArquivo(QString nomeDoArquivo):
    nomeDoArquivoNoDisco(nomeDoArquivo),
    colecaoDePilotosF1()
{
}
void ManipularArquivo::buscarDadosNoArquivo(int forma){
    try {
        // criando um arquivo de entrada
        std::ifstream arquivo;
        // abrindo um arquivo de entrada
        arquivo.open(nomeDoArquivoNoDisco.toStdString().c_str());
        // verificando erro de abertura do arquivo de entrada
        if(!arquivo.is_open()) throw QString("ERRO Arquivo nao pode ser aberto");
        // Lendo dados do arquivo texto
        std::string linha;
        // lendo do arquivo
        getline(arquivo,linha);
        while(!arquivo.eof()){
            QString texto = QString::fromStdString(linha);
            QStringList strList = texto.split(';');
            int codigo = strList[0].toInt();
            QString nome = strList[1];
            QString pais = strList[2];
            int idade = strList[3].toInt();
            QString equipe = strList[4];
            QString motor = strList[5];
            Piloto p(codigo, nome, pais, idade, equipe, motor);
            //Incluindo valores na lista
            if(forma==0){
                colecaoDePilotosF1.inserirOrdenadoC(p);
            }else if(forma==1){
                colecaoDePilotosF1.inserirOrdenadoD(p);
            }
            //lendo do arquivo
            getline(arquivo,linha);
        }
        //por algum motivo o ultimo elemento nao tava na lista ai repeti mais uma vez
        QString texto = QString::fromStdString(linha);
        QStringList strList = texto.split(';');
        int codigo = strList[0].toInt();
        QString nome = strList[1];
        QString pais = strList[2];
        int idade = strList[3].toInt();
        QString equipe = strList[4];
        QString motor = strList[5];
        Piloto p(codigo, nome, pais, idade, equipe, motor);
        //Incluindo valores na lista
        if(forma==0){
            colecaoDePilotosF1.inserirOrdenadoC(p);
        }else if(forma==1){
            colecaoDePilotosF1.inserirOrdenadoD(p);
        }
        //lendo do arquivo
        getline(arquivo,linha);
        // fechado o arquivo de entrada
        arquivo.close();
    } catch (QString &erro) {
        throw erro;
    }
}
}
