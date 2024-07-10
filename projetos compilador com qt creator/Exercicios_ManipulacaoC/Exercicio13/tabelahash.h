#ifndef TABELAHASH_H
#define TABELAHASH_H

#include <QString>
#include <professor.h>
#include <list>

namespace ed {

class TabelaHash {
private:
    int size;
    int collisions;
    int key;
    std::list<Professor> **table;

public:
    TabelaHash(int newSize, int newCollisions);
    ~TabelaHash();
    int getSize() const;
    int getKey(int matricula);
    int getKeySize(int pos) const;
    int getPositionInKey();
    Professor getDados(int pos, int chave) const;
    void insercaoDaLista(Professor lista, int pos);
    int Matricula(int matricula);
    int encontrarPos(QString texto2);
    void remover(int matricula);
    void inserir(int matricula, QString nome, QString departamento, QString titulacao, QString tipo);
    void alterar(int matricula, QString nome, QString departamento, QString titulacao, QString tipo);

    // Removendo métodos não utilizados
};

}

#endif // TABELAHASH_H
