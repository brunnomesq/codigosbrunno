#include "excecao.h"

Excecao::Excecao(int a):valor(0){
    setValor(a);
}
void Excecao::setValor(int x){
    if(x<=0){
        throw QString ("Valor tem que ser positivo!");
    }
    valor=x;
}
