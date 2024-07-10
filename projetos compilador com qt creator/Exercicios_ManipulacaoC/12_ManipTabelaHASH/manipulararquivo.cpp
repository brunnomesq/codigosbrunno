#include "manipulararquivo.h"
namespace brn {

Ordenar *ManipularArquivo::getColecaoDeProfessor() const
{
    return colecaoDeProfessor;
}

ManipularArquivo::ManipularArquivo(QString nomeDoArquivo,int tamanho)
    : nomeDoArquivoNoDisco(nomeDoArquivo), colecaoDeProfessor()
{
    this->colecaoDeProfessor=new brn::Ordenar(tamanho);
}
void ManipularArquivo::buscarDadosNoArquivo(){
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
            QString texto = QString::fromStdString(linha);
            QStringList strList = texto.split(';');
            int matricula = strList[0].toInt();
            QString nome = strList[1];
            QString departamento = strList[2];
            QString titulacao = strList[3];
            QString tipo_de_contrato = strList[4];
            Dados d(matricula,nome,departamento,titulacao,tipo_de_contrato);
            //Incluindo valores no vetor
            if (pos < colecaoDeProfessor->getTamanho()) {
                colecaoDeProfessor->gerador(d, matricula);//matricula-1
            } else {
                throw QString("Tentativa de adicionar dados além do tamanho especificado.");
            }
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
