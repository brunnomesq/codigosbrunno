//ex 10 Uma locadora de filmes tem as seguintes regras para aluguel de fitas.
//•Às segundas, terças e quintas (2,3 e 5) : desconto de 40% em relação ao preço normal;
//•Às quartas , sextas, sábados e domingos (4,6 ,7 e 1):  preço normal;
//•Aluguel de fitas comuns: preço normal;
//•Aluguel de lançamentos: acréscimo de 15%  em relação ao preço normal.
//Desenvolver um algoritmo para ler o preço normal da fita alugada(em R$) e  sua categoria(comum ou lançamento). Calcular e
//imprimir o preço final que será pago pela locação da fita.
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
