#include "ordenar.h"
#include "fila.h"
#include <QString>
#include <QRandomGenerator>
namespace brn{
Ordenar::Ordenar(int tamanho):
    tamanho(0),
    array(0)
{
    if(tamanho<=0)throw QString("O tamanho nao pode ser menor ou igual a 0");
    try{
        array=new int [tamanho];
        this->tamanho=tamanho;
        gerador();
    }catch(std::bad_alloc&){
        throw QString ("Vetor nao pode ser criado");
    }
}
Ordenar::~Ordenar(){
    if(array) delete[] array;
}
int Ordenar::getTamanho() const{
    return tamanho;
}
int Ordenar::acessar(int indice){
    return array[indice];
}

QString Ordenar::setOrden() {
    brn::Fila fila(getTamanho()); // Cria uma fila com o mesmo tamanho do vetor

    fila.inserir(acessar(0));  //insere o primeiro elemento do vetor na fila

    for(int i=1;i<getTamanho();i++){     // comeca o ordenamento até encher a fila que é o tamanho dela
        int fAux=acessar(i);            // acessa o elemento do vetor para ser adicionado na fila
        bool ligador=0;                //fiz um booleano para quando entrar o elemento do vetor na fila ele ficar 1(true)
                                      //pra evitar de colocar varias vezes o mesmo elemento quando a condicao for criada

        for(int j=0;j<i;j++){ //fiz um for para percorrer os elementos que estao na fila no momento q vai  até
                                                                     //o contador i
            int fAux2=fila.acessar();
            if(fAux<=fAux2&&ligador==0){  //se o ligador tiver 0 e for menor que o numero acessado insere o do vetor
                fila.retirar();           //antes retira o valor que ta la
                fila.inserir(fAux);       //insere o valor do vetor
                fila.inserir(fAux2);      //depois insere o valor que tava na fila
                ligador=1;                //e o ligador se torna true (1)
            }else{
                fila.retirar();           //se o numero do vetor for maior ou for menor e o ligador for 1 vem pra ca
                fila.inserir(fAux2);
            }
        }//aqui em baixo se o ligador nao foi acionado nenhuma vez, tem que inserir no final
        if(ligador==0){  // ex fila: 25 48 54 o prox num do vetor é 94, nao inseri no de cima porque nao criou a condicao
            fila.inserir(acessar(i));// ai insere por ultimo aqui // 25 48 54 94
        }
   }
// 20 30 60 70
// n do vetor pra colocar na fila =40
// 30 60 70 20 // 40 é menor que 20 (NAO)
//60 70 20 30   //40 é menor que 30 (NAO)
// 70 20 30 40 60  //40 é menor que 60 (SIM) ligador == 0(SIM)
//20 30 40 60 70   //40 é menor que 70 (SIM) ligador == 0(NAO)
    QString ordenado="";
    while(!fila.estaVazia()){
        ordenado+= QString::number(fila.acessar())+" ";
        fila.retirar();
    }

    return ordenado;
}

void Ordenar::gerador(){
    for(int i=0;i<getTamanho();i++){
       *(array+i)=QRandomGenerator::global()->bounded(1, 100);
    }
}

}
