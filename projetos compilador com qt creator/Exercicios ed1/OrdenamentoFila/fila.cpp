#include "fila.h"
namespace brn {



Fila::Fila(int tamanho) : inicio(-1), fim(-1), tamanho(0), array(0), quantidadeElementos(0)
{
    if(tamanho<=0)
        throw QString("Tamanho não pode ser menor ou igual a zero");
    try{
        array= new int[tamanho];
        this->tamanho=tamanho;
    }catch(std::bad_alloc){
        throw QString("Fila não foi criada");
    }
}

Fila::~Fila()
{
    if(array)
        delete []array;
}

bool Fila::estaVazia() const
{
    return (quantidadeElementos==0);
}

bool Fila::estaCheio() const
{
    return (quantidadeElementos==tamanho);
}

void Fila::inserir(int elemento)
{
    if(estaCheio()){                          //tamanho = 4
        throw QString("Fila esta cheia");   //inserir 1 4 3 2 inicio = 0(1) final=   3(2)
    }                                       //retirei   4 3 2 inicio = 1(4) final= 3 (2)
    if(estaVazia()){                        //retirei     3 2 inicio = 2(3) final = 3(2)
                                            //retirei       2 inicio= 3 (2) final =3 (2)
        inicio=0;                           //inserir 5     2 inicio =3 (2) final =0 (5)
    }                                       //inserir 5 8   2 inicio =3 (2) final =1 (8)
    fim++;
    if(fim==tamanho){
        fim=0;
    }
    *(array+fim)=elemento;
    quantidadeElementos++;
}

int Fila::acessar() const
{
    if(estaVazia()){
        throw QString("Fila esta vazia");
    }
    return *(array+inicio);
}

void Fila::retirar()
{
    if(estaVazia()){
        throw QString("Fila esta vazia");
    }
    if(quantidadeElementos==1){
        inicio=-1;
        fim=-1;
        quantidadeElementos=0;
        return;
    }
    inicio++;
    if(inicio==tamanho){
        inicio=0;
    }
    quantidadeElementos--;
}

}
