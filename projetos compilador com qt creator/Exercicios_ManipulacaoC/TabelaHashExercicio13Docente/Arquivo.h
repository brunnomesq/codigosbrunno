#ifndef ARQUIVO_H
#define ARQUIVO_H

#include <QString>
#include <fstream>
#include <QStringList>
#include <docentes.h>
#include <funcoes.h>

namespace ed2 {

class Arquivo {
private:
    QString nomeDoArquivo;
    Funcoes *colecao;

public:
    Arquivo(QString nomeArquivo, int tamanho, int colisoes) :
        nomeDoArquivo(nomeArquivo) {
        this->colecao=new ed2::Funcoes(tamanho,colisoes);
    }

    ~Arquivo() {
        if (colecao) delete colecao;
    }

    void lerArquivo() {
        try {
            // criando um arquivo de entrada
            std::ifstream arquivo;
            // abrindo um arquivo de entrada
            arquivo.open(nomeDoArquivo.toStdString().c_str());
            // verificando erro de abertura do arquivo de entrada
            if(!arquivo.is_open()) throw QString("ERRO Arquivo nao pode ser aberto");
            // Lendo dados do arquivo texto
            std::string linha;
            int pos=0;
            // lendo do arquivo
            getline(arquivo,linha);
            while(!arquivo.eof()){
                qDebug()<<"linha"<<pos<<"chegou";
                QString texto = QString::fromStdString(linha);
                QStringList strList = texto.split(';');
                int matricula = strList[0].toInt();
                QString nome = strList[1];
                QString departamento = strList[2];
                QString titulacao = strList[3];
                QString tipo_de_contrato = strList[4];
                Docentes d(matricula,nome,departamento,titulacao,tipo_de_contrato);

                colecao->gerar(d,nome);

                pos++;
                //lendo do arquivo
                getline(arquivo,linha);

            }

            arquivo.close();
        } catch (QString &erro) {
            throw erro;
        }
    }

    Funcoes *getColecao() const {
        return colecao;
    }
};

}

#endif
