//ex 01 Elabore um algoritmo que calcule o valor a ser pago por um produto considerando o preço normal de etiqueta e a escolha da condição de pagamento.
//Utilize os códigos da tabela a seguir para saber qual a condição de pagamento escolhida e efetuar o cálculo adequado
//Condição de pagamento: na lista
#include <iostream>
using namespace std;
int main()
{
int cod;
float valor, nvalor;
cout<<"Digite o valor do produto: ";
cin>>valor;
cout<<"Agora digite o codigo em que era efetuar o pagamento\n-1 A vista, dinheiro ou cheque, 15% de desconto\n-2 A vista, cartao de credito, 5% de desconto\n-3 Em 3 vezes, preco normal da etiqueta + 10% de juros\n ";
cin>>cod;
if(cod==1){
	nvalor= valor - (valor * 0.15);}
	if(cod==2){
		nvalor = valor - ( valor * 0.05);}
	if(cod==3){
		nvalor = valor + (valor * 0.10);}
if(cod!=1&&cod!=2&&cod!=3){
	cout<<"Esse codigo nao existe!";
	return 0;}
cout<<"O novo valor corresponde a R$" << nvalor;
return 0;
}

