#include "grafico.h"
#include <algorithm>
Grafico::Grafico (int tamanho):lista(tamanho),tamanho(tamanho)
{
}


void Grafico::inserir(int i, int j, int peso){

    if(i<0||j<0) throw QString("posicao invalida");
    if(i>=tamanho || j>=tamanho) throw QString("tamanho acima do limite");

    for(auto& par: lista[i]){
        if(par.first==j){
            par.second=peso;
            return;
        }
    }
    lista[i].emplace_back(j,peso);
    lista[j].emplace_back(i,peso);
}

int Grafico::alterar(int i, int j, int novoPeso){

    if(i<0||j<0) throw QString("posicao invalida");
    if(i>=tamanho || j>=tamanho) throw QString("tamanho acima do limite");

    auto& adjI = lista[i];
    auto& adjJ=lista [j];
    for(auto& par :adjI){
        if(par.first==j){
            par.second = novoPeso;
        }
    }
    for(auto& par :adjJ){
        if(par.first==i){
            par.second = novoPeso;
        }
    }
}

int Grafico::remover(int i, int j){

    if(i<0||j<0) throw QString("posicao invalida");
    if(i>=tamanho || j>=tamanho) throw QString("tamanho acima do limite");
    auto& adjI = lista[i];
    auto& adjJ=lista [j];

    adjI.erase(std::remove_if(adjI.begin(),adjI.end(),[j](const std::pair<int,int>&par){
        return par.first ==j;
    }),adjI.end());
    adjJ.erase(std::remove_if(adjJ.begin(),adjJ.end(),[i](const std::pair<int,int>&par){
        return par.first ==i;
    }),adjJ.end());

}
int Grafico::acessar(int i, int j){

    if(i<0||j<0) throw QString("posicao invalida");
    if(i>=tamanho || j>=tamanho) throw QString("tamanho acima do limite");

    for(const auto& par: lista[i]){
        if(par.first==j){
            return par.second;
        }
    }
    return -1;
}

int Grafico::getTamanho(){
    return tamanho;
}
