#ifndef MANIPULARARQUIVO_H
#define MANIPULARARQUIVO_H
#include <QString>
#include <fstream>
#include <arvorebinaria.h>
#include <iostream>
#include <QRegularExpression>

namespace les{
class ManipularArquivo
{
    //Atributos
private:
    QString nomeDoArquivoNoDisco;
    //Cria uma lista de Pilotos
    ArvoreBinaria *ArvoreDePalavras;
public:
    ManipularArquivo(QString nomeDoArquivo);
    void inserirPalavrasArvore();
    ArvoreBinaria *getArvoreDePalavras() const;
};
}

#endif // MANIPULARARQUIVO_H
