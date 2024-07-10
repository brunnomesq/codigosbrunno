
#include "pilha.h"
#include <stdexcept>
namespace brn{
Pilha::Pilha(int tamanho):
    tamanho(0),  //esse atributo para ser usado no codigo tem que usar this->
    topo(-1),
    array(0)
{
    if(tamanho<=0)throw std::runtime_error("O tamanho nao pode ser menor ou igual a 0");
    try{
        array=new int [tamanho];
        this->tamanho=tamanho;
    }catch(std::bad_alloc&){
        throw std::runtime_error ("Pilha nao pode ser criada");
    }
}
Pilha::~Pilha(){
    if(array) delete[] array; // se o array existir ele é deletado
}
int Pilha::getTamanho() const{
    return tamanho;
}
void Pilha::empilhar(int elemento){
    if(estaCheia()) throw std::runtime_error("A pilha esta cheia"); //quando chega na excessao ele para na hora o codigo
    topo++;
    *(array+topo) = elemento;//array[topo]=elemento;
}
bool Pilha::estaCheia() const{
    return (topo==(tamanho-1)); //se for igual ao tamanho -1 (que é cheio) está cheio
}  // o usuario digita 5 no tamanho, mas o vetor vai de 0 a 4 entao é o 5 menos 1 pra saber se esta cheio
bool Pilha::estaVazia() const{
    return (topo==-1); //se for igual a -1 esta vazia
}
void Pilha::desempilhar(){
    if(estaVazia()) throw std::runtime_error("Esta vazia");
    topo--;
}
int Pilha::acessar() const{
    if(estaVazia()) throw std::runtime_error("Esta vazia");
    return *(array+topo); //facil igual se fosse array[topo]
}
int* Pilha::getVet()const{
    return array;
}
int Pilha::getTopo()const{
    return topo;
}
}
