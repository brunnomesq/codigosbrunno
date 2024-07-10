#ifndef MANIPULARARQUIVO_H
#define MANIPULARARQUIVO_H
#include <QString>
#include <fstream>
#include <QStringList>
#include <docentes.h>
#include <vector>
#include <funcoes.h>
namespace ed2 {
class ManipularArquivo
{
    //Atributos
private:
    QString nomeDoArquivoNoDisco;
    //Cria um vetor de Pilotos
    Funcoes *colecaoDeProfessor;
public:
    ManipularArquivo(QString nomeDoArquivo, int tamanho, int colisoes);
    void buscarDadosNoArquivo();

    Funcoes *getColecaoDeProfessor() const;
};
}
#endif // MANIPULARARQUIVO_H
