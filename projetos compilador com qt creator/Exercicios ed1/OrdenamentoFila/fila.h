#ifndef FILA_H
#define FILA_H
#include <QString>

namespace brn{
class Fila
{
private:  //todos os atributos precisam ser inicializados no .cpp pelo construtor.
    int fim;
    int inicio;
    int tamanho;
    int *array; //ponteiro porque é criacao dinamica, precisa informar um tamanho.
    int quantidadeElementos;
public:
    Fila(int tamanho);
    ~Fila();
    bool estaVazia() const;
    bool estaCheio() const;
    int acessar() const;
    void inserir(int elemento);
    void retirar();
    int getQuantidadeElementos() const;
};
}

#endif // FILA_H
