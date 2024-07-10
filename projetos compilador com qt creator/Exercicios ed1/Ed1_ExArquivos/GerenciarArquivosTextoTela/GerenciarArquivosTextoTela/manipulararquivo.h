#ifndef MANIPULARARQUIVO_H
#define MANIPULARARQUIVO_H
#include <QString>
#include <fstream>
#include <QStringList>
#include <piloto.h>
#include <vector>
#include <llse.h>
namespace ejm {
class ManipularArquivo
{
    //Atributos
private:
    QString nomeDoArquivoNoDisco;
    //Cria um vetor de Pilotos
    ListaLSE colecaoDePilotosF1;
public:
    ManipularArquivo(QString nomeDoArquivo);
    void buscarDadosNoArquivo(int forma);
    const ListaLSE &getColecaoDePilotosF1() const;
};
}
#endif // MANIPULARARQUIVO_H
