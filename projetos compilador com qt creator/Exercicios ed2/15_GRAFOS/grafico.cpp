#include "grafico.h"

Grafico::Grafico (int tamanho)
{
    if(tamanho>0){
        this->tamanho=tamanho;
        this->matriz = new int*[tamanho];
        for (int i = 0; i < tamanho; i++) {
            this->matriz[i] = new int[tamanho];
        }
        //criando a matriz inteira do tamanho especifico
        for (int i = 0; i < tamanho; i++) {
            for (int j = 0; j < tamanho; j++) {
                matriz[i][j] = -1;
            }
        }
        //inicializando cada parte da matriz com -1
    }
}


void Grafico::inserir(int p, int p2, int peso){
    if(!matriz) return;

    if(p<0||p2<0) throw QString("posicao invalida");
    if(p>=tamanho || p2>=tamanho) throw QString("tamanho acima do limite");

    if(matriz[p][p2]== -1){
        matriz[p][p2] = peso;
        matriz[p2][p] = peso;
    }else{
        throw QString("a conexao ja existe");
    }
}

int Grafico::alterar(int p, int p2, int peso){
    if(!matriz) return -1;
    if(p<0||p2<0) throw QString("posicao invalida");
    if(p>=tamanho || p2>=tamanho) throw QString("tamanho acima do limite");

    if(matriz[p][p2]!=-1){
        int old = matriz[p][p2];
        matriz[p][p2] = peso;
        matriz[p2][p] = peso;
        return old;
    }else{
        throw QString("conexao nao existe");
    }
}

int Grafico::remover(int p, int p2){
    if(!matriz) return -1;
    if(p<0||p2<0) throw QString("posicao invalida");
    if(p>=tamanho || p2>=tamanho) throw QString("tamanho acima do limite");

    if(matriz[p][p2]!=-1){
        int old = matriz[p][p2];
        matriz[p][p2] = -1;
        matriz[p2][p] = -1;
        return old;
    }else{
        throw QString("a conexao nao existe");
    }
}
int Grafico::acessar(int p, int p2){
    if(!matriz) throw QString("matriz ta vazia");
    if(p<0||p2<0) throw QString("posicao invalida");
    if(p>=tamanho || p2>=tamanho) throw QString("tamanho acima do limite");

    return matriz[p][p2] ;
}

int Grafico::getTamanho(){
    return tamanho;
}
Grafico::~Grafico(){
    for (int i = 0; i < tamanho; i++) delete[] matriz[i];
    delete[] matriz;
}
