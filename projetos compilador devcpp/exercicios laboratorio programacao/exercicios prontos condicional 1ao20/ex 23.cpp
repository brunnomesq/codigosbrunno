//ex 23
//A pol�cia rodovi�ria resolveu fazer cumprir a lei e cobrar dos motoristas o DUT. Sabe-se que o m�s em que o emplacamento do
//carro deve ser renovado � determinado pelo �ltimo n�mero da placa do veiculo. Criar um algoritmo que, a partir da leitura da placa do
//carro, informe o m�s em que o emplacamento deve ser renovado.
//Fiz baseando nas placas antigas, nas atuais n�o sei fazer.
#include <iostream>
using namespace std;
int main()
{
int placa,n,n1;
cout<<"Digite os numeros de 4 digitos de sua placa: ";
cin>> placa;
if(placa>9999||placa<1000){
	cout<<"A placa esta errada!";
	return 0;
}
n= placa%1000;
n1= n%100;
n= n1%10;
if(n==0){
	cout<<"O mes em que vence eh em outubro!";
}
if(n==1){
	cout<<"O mes em que vence eh em janeiro!";
}
if(n==2){
	cout<<"O mes em que vence eh em fevereiro!";
}
if(n==3){
	cout<<"O mes em que vence eh em marco!";
}
if(n==4){
	cout<<"O mes em que vence eh em abril!";
}
if(n==5){
	cout<<"O mes em que vence eh em maio!";
}
if(n==6){
	cout<<"O mes em que vence eh junho!";
}
if(n==7){
	cout<<"O mes em que vence eh em julho!";
}
if(n==8){
	cout<<"O mes em que vence eh em agosto!";
}
if(n==9){
	cout<<"O mes em que vence eh em setembro!";
}
}

