//ex 24
//Num  frigorífico  existem  90  bois.  Cada  boi  traz  preso  no  seu  pescoço  um  cartão  contendo  um  número  de  identificação  e  seu 
//peso. Implementar um algoritmo que escreva o número e o peso do boi mais gordo e do boi mais magro (não é necessário armazenar 
//os dados de todos os bois).
#include <iostream>
using namespace std;
int main()
{
int boi,maiorpeso,ident,ident2,menorpeso,menorpeso2,contadorboi;
float peso;
maiorpeso=0;
menorpeso2=100000000;
contadorboi=0;
ident=0;
ident2=0;
cout<<"Numero de identificacao do boi(0 para sair): ";
cin>>boi;
contadorboi=contadorboi+1;
while(contadorboi<=90&&boi!=0){
cout<<"Peso do boi "<<boi<<": ";
cin>>peso;
if(peso>maiorpeso){
	maiorpeso=peso;
	ident=boi;
}
if(peso<menorpeso2){
	menorpeso=peso;
	ident2=boi;
}
menorpeso2=peso;
cout<<"Numero de identificacao do boi(0 para sair): ";
cin>>boi;
contadorboi=contadorboi+1;
}
cout<<"O boi mais gordo eh o boi "<<ident<<" com "<<maiorpeso<<"kg";
cout<<"\nO boi mais magro eh o boi "<<ident2<<" com "<<menorpeso<<"kg";
return 0;
}
