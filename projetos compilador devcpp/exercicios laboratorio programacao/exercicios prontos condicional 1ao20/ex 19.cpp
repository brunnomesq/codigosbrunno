//ex19 Preparar um algoritmo que leia  as seguintes informações:
//?Nome do fazendeiro;?Tipo de pulverização (de 1 a 4);?Área a ser pulverizada.O algoritmo deve ainda calcular o custo final da pulverização e 
//escrever o nome do fazendeiro e o valor a ser pago.
#include <iostream>
using namespace std;
int main()
{
int tipo;
float acre,desc,x;
string nome;
cout<<"Digite seu nome: ";
cin>> nome;
cout<<"Digite quantos acres possui na sua area: ";
cin>>acre;
if(acre<0){
	cout<<"Acres invalidos";
	return 0;
}
cout<<"Agora escolha o inseto que deseja, digitando: \n1 para: pulverizacao contra ervas daninhas, R$ 5,00 por acre;\n2 para: pulverizacao contra gafanhotos, R$ 10,00 por acre;\n3 para: pulverizacao contra broca, R$ 15,00 por acre;\n4 para: pulverizacao contra tudo acima, R$ 25,00 por acre.\n";
cin>>tipo;
if(tipo<1 || tipo>4){
	cout<<"Codigo invalido";
	return 0;
}
if(tipo==1){
	x=5.00*acre;
}
if(tipo==2){
	x=10.00*acre;
}
if(tipo==3){
	x= 15.00*acre;
}
if(tipo==4){
	x= 25.00*acre;
}
if(acre>300 || acre>300 && x>1750.00){
	desc= x * 0.05;
}
if(x>1750.00){
	desc=x * 0.1;
}
cout<<"Senhor "<<nome<< ", o valor a ser pago equivale a: R$"<<x-desc;
return 0;
}
