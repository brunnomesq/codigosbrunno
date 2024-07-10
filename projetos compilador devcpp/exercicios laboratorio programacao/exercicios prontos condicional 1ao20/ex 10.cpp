//ex 10 Uma locadora de filmes tem as seguintes regras para aluguel de fitas.
//��s segundas, ter�as e quintas (2,3 e 5) : desconto de 40% em rela��o ao pre�o normal;
//��s quartas , sextas, s�bados e domingos (4,6 ,7 e 1):  pre�o normal;
//�Aluguel de fitas comuns: pre�o normal;
//�Aluguel de lan�amentos: acr�scimo de 15%  em rela��o ao pre�o normal.
//Desenvolver um algoritmo para ler o pre�o normal da fita alugada(em R$) e  sua categoria(comum ou lan�amento). Calcular e
//imprimir o pre�o final que ser� pago pela loca��o da fita.
#include <iostream>
using namespace std;
int main()
{
float preco_normal,preco_final,aluguel;
char categoria;
int dia;
cout<<"Digite o dia da semana(sendo dom=1,seg=2,ter=3,qua=4,quin=5,sexta=6,sab=7): ";
cin>>dia;
if(dia<1 || dia>7){
	cout<<"O dia da semana foi digitado incorretamente!";
    return 0;
}
cout<<"Digite o preco normal da fita alugada: ";
cin>>preco_normal;
cout<<"Digite se a fita eh lancamento(L) ou comum(C): ";
cin>>categoria;
if (categoria!= 'L'&&categoria !='C'){
	cout<<"A categoria nao existe";
	return 0;
}
if(dia==2||dia==3||dia==5){
	preco_final= preco_normal - (preco_normal*0.4);}
else {
	preco_final= preco_normal;}
if(categoria=='L'){
	aluguel= 0.15*preco_normal;
}
cout<<"O preco final eh: R$"<<preco_final + aluguel;
return 0;

}
