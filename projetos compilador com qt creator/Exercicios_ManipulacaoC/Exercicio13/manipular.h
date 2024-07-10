#ifndef MANIPULAR_H
#define MANIPULAR_H


#include <QString>
#include <fstream>
#include <QStringList>
#include <professor.h>
#include <vector>
#include <tabelahash.h>
namespace ed {
class Manipular
{
    //Atributos
private:
    QString nomeNoDisco;
    //Cria um vetor de Pilotos
    TabelaHash *dadosProfessor;
public:
    Manipular(QString nomeDoArquivo, int size, int collisions);
    void leituraDeDados();

    TabelaHash *getDadosProfessor() const;
};
}
#endif // MANIPULAR_H
