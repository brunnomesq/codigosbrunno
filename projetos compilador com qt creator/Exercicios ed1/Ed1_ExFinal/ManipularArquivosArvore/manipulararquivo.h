#ifndef MANIPULARARQUIVO_H
#define MANIPULARARQUIVO_H

#include <QString>
#include <fstream>
#include <arvorebinaria.h>
#include <iostream>
#include <QRegularExpression>

namespace ED1{
class ManipularArquivo
{
    //Atributos
private:
    ArvoreBinaria *Palavras;
    QString nomeDoArquivoNoDisco;


public:
    ArvoreBinaria *getPalavras() const;
    ManipularArquivo(QString nomeDoArquivo);
    void buscarDadosNoArquivo();
};
}

#endif // MANIPULARARQUIVO_H
