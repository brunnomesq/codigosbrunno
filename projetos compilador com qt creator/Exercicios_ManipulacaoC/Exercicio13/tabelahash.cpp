#include "tabelahash.h"
#include <list>
#include <QString>
#include <ctime>
#include <cmath>
#include <QDebug>
#include <algorithm> // Para std::find

namespace ed {

    TabelaHash::TabelaHash(int newSize, int newCollisions) : size(newSize), collisions(newCollisions) {
        if (newSize <= 0) throw QString("A quantidade não pode ser menor ou igual a 0");
        if (newCollisions < 0) throw QString("A colisão não pode ser menor que 0");
        try {
            if (newSize <= 0) {
                throw QString("Tamanho invalido");
            }
            if (newCollisions == 0) {
                throw QString("Nao foi possivel dividir por 0");
            }
            //calcular a o tamanho para um numero primo perto com base nas divisoes pela colisao
            int divi= newSize / newCollisions;
            int primo = 0;
            for (int i = 2; i <= newSize && primo < divi; ++i) {
                bool div = false;
                for (int j = 2; j <= sqrt(i) && !div; ++j) {
                    if (i % j == 0) div = true;
                }
                if (!div) {
                    primo = i;
                }
            }
            newSize=primo;
            this->size = newSize;
            table = new std::list<Professor>*[size]; // Inicializando a matriz como uma nova lista

            // Inicializando cada elemento da matriz com uma lista vazia
            for (int i = 0; i < newSize; ++i) {
                table[i] = new std::list<Professor>(); // Cada elemento é uma lista vazia
            }
        } catch (std::bad_alloc &) {
            throw QString("Vetor não pode ser criado");
        }
    }



    Professor TabelaHash::getDados(int pos, int chave) const {

        auto it = table[pos]->begin();
        std::advance(it, chave);
        return *it;
    }
    int TabelaHash::getPositionInKey() {
        return this->key;
    }


    void TabelaHash::insercaoDaLista(Professor lista, int pos) {
        pos = pos % size;
        if (pos >= size) {
            throw QString("Chave invalida");
        }
        table[pos]->push_front(lista);
    }



    int TabelaHash::Matricula(int matricula) {
        int pos = matricula % size;

            int tamanhoNaColisao= table[pos]->size();
            //qDebug()<<"Posicao "<<pos<<" tamanho da colisao dessa posicao: "<<tamanhoNaColisao;
            for(int c=0;c<tamanhoNaColisao;c++){
                auto it = table[pos]->begin();
                std::advance(it, c);
                if(matricula == it->getMatricula()){
                    this->key=c;
                    return pos;
                }
            }

        this->key=-1;
        return -1;
    }

    int TabelaHash::encontrarPos(QString texto2) {
            int pos = -1;
            int matricula = texto2.toInt();
            pos = Matricula(matricula);
            if (pos == -1) {
                throw QString("Matricula Incorreta");
            }
            if (table[pos]->empty() || table[pos]->front().getNome().isEmpty()) {
                throw QString("A matricula está vazia");
            }

        return pos;
    }

    void TabelaHash::remover(int matricula) {
        int position = -1;
        if (matricula != 0) {
            position = encontrarPos(QString::number(matricula));
        } else {
            throw QString("Matricula está vazia ou incorreta!");
        }
        if (position != -1) {
        auto it = table[position]->begin();
        std::advance(it, key);
        table[position]->erase(it);
        } else {
        throw QString("Matricula ou nome inválido");
        }
        }
    int TabelaHash::getKey(int matricula) {
        return matricula % size;
    }
    void TabelaHash::inserir(int matricula, QString nome, QString departamento, QString titulacao, QString tipo) {
        Professor item(matricula, nome, departamento, titulacao, tipo);
        int matriculaAcessar = Matricula(matricula);
        if (matricula <= 0 || matricula > 1000 || nome.isEmpty()) {
            throw QString("O campo do nome e/ou da matricula está incorreto ou vazio!\n");
        }
        if (matriculaAcessar == -1) {
            int position = getKey(matricula);
            table[position]->push_front(item);
        } else {
            throw QString("Essa matrícula já existe!");
        }
    }

    void TabelaHash::alterar(int matricula, QString nome, QString departamento, QString titulacao, QString tipo) {
        Professor item(matricula, nome, departamento, titulacao, tipo);
        int matriculaAcessar = Matricula(matricula);
        if (matricula <= 0 || matricula > 1000 || nome.isEmpty()) {
            throw QString("O campo do nome e/ou da matricula está incorreto ou vazio!\n");
        }
        if (matriculaAcessar != -1) {
            auto it = table[matriculaAcessar]->begin();
            std::advance(it, key);
            *it = item;
        } else {
            throw QString("A matricula não existe!");
        }
    }

    int TabelaHash::getSize() const {
        return size;
    }

    int TabelaHash::getKeySize(int pos) const {
        return table[pos]->size();
    }
    TabelaHash::~TabelaHash() {
        delete[] table;
    }

}
