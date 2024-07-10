#include "base.h"
#include "pilha.h"
#include <QString>
namespace brn{
Base::Base(int num):
    num(0),
    base(0)
{

if(num != static_cast<int>(num)||num <=0||num>1000000){
    throw QString("Entrada Invalida!");
}


this->num=num;

}
void Base::setBase(int base){
    this->base=base;
}

QString Base::baseAlterar() {
   brn::Pilha p(20);
   QString numNovo="";

   while(num!=0){

       p.empilhar(num%base);

       num=num/base;

}
   while(!p.estaVazia()){

         int numBase=p.acessar();

         if(numBase<10){
             numNovo+=QString::number(numBase);
         }else if(numBase==10){
             numNovo+="A";
         }else if(numBase==11){
             numNovo+="B";
         }else if(numBase==12){
             numNovo+="C";
         }else if(numBase==13){
             numNovo+="D";
         }else if(numBase==14){
             numNovo+="E";
         }else if(numBase==15){
             numNovo+="F";
         }
         p.desempilhar();
}
   return numNovo;

}

}
