#ifndef MANIPULARARQUIVO_H
#define MANIPULARARQUIVO_H
#include <QString>
#include <fstream>
#include <QStringList>
#include <dados.h>
#include <vector>
#include <ordenar.h>
namespace brn {
class ManipularArquivo
{
    //Atributos
private:
    QString nomeDoArquivoNoDisco;
    //Cria um vetor de Pilotos
    Ordenar *colecaoDeProfessor;
public:
    ManipularArquivo(QString nomeDoArquivo, int tamanho);
    void buscarDadosNoArquivo();

    Ordenar *getColecaoDeProfessor() const;
};
}
#endif // MANIPULARARQUIVO_H
