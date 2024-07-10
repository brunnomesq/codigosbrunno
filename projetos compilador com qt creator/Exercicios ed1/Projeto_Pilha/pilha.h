
#ifndef PILHA_H
#define PILHA_H
namespace brn{
class Pilha
{
private:
    //atributos
    int tamanho;
    int topo;
    int *array;
    //metodos
public:
    Pilha(int tamanho);
    ~Pilha();
    int getTamanho() const;
    int* getVet() const;
    int getTopo() const;
    void empilhar(int elemento);
    void desempilhar();
    bool estaCheia() const;
    bool estaVazia() const; //é const se nao alterar o atributo
    int acessar() const;

};
}
#endif // PILHA_H
