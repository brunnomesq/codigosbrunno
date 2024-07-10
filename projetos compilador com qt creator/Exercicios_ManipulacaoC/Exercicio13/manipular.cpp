#include "manipular.h"
#include <QDebug>
namespace ed {

TabelaHash *Manipular::getDadosProfessor() const
{
    return dadosProfessor;
}

Manipular::Manipular(QString nomeDoArquivo, int size,int collisions)
    : nomeNoDisco(nomeDoArquivo), dadosProfessor()
{
    this->dadosProfessor=new ed::TabelaHash(size,collisions);
}
void Manipular::leituraDeDados(){
    try {

        std::ifstream arquivo;

        arquivo.open(nomeNoDisco.toStdString().c_str());

        if(!arquivo.is_open()){
            throw QString("ERRO Arquivo nao pode ser aberto");
        }

        std::string linha;
        int pos=0;

        getline(arquivo,linha);
        while(!arquivo.eof()){

            QString texto = QString::fromStdString(linha);
            QStringList strList = texto.split(';');
            int matricula = strList[0].toInt();
            QString nome = strList[1];
            QString departamento = strList[2];
            QString titulacao = strList[3];
            QString tipo_de_contrato = strList[4];
            Professor prof(matricula,nome,departamento,titulacao,tipo_de_contrato);

            dadosProfessor->insercaoDaLista(prof,matricula);

            pos++;

            getline(arquivo,linha);

        }

        arquivo.close();
    } catch (QString &erro) {
        throw erro;
    }
}
}
