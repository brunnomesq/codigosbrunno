#ifndef MANIPULARARQUIVO_H
#define MANIPULARARQUIVO_H
#include <QString>
#include <fstream>
#include <QStringList>
#include <dados.h>
#include <vector>
#include <tabelahash.h>
namespace brn {
class ManipularArquivo
{
    //Atributos
private:
    QString nomeDoArquivoNoDisco;
    //Cria um vetor de Pilotos
    TabelaHash *colecaoDeProfessor;
public:
    ManipularArquivo(QString nomeDoArquivo, int tamanho, int colisoes);
    void buscarDadosNoArquivo();

    TabelaHash *getColecaoDeProfessor() const;
};
}
#endif // MANIPULARARQUIVO_H
