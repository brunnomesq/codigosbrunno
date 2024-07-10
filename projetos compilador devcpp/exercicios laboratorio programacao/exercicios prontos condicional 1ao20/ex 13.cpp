//ex 13 Escreva um algoritmo que descubra se um ano lido é bissexto. Um ano é bissexto se ele for múltiplo de 4, exceto quando ele for
//múltiplo de 100. Os anos múltiplos de 100 somente são bissextos quando são múltiplos de 400, usado a partir de 1752 (por exemplo
//1800 não é bissexto, mas 2000 é). 
#include <iostream>
using namespace std;
int main()
{
int ano;
char v,f;
cout<<"Digite o ano: ";
cin >> ano;
if(ano <= 0){
	cout<<"Esse ano nao existe!";
	return 0;
}
if (ano%100==0){
	if(ano%400==0){
	cout<<"O ano "<<ano <<" eh bissexto";
	return 0;
	}
	if(ano%400!=0){
	cout<<"O ano "<<ano <<" nao eh bissexto";
	return 0;
	}
	}
if(ano%4==0){
	cout<<"O ano "<<ano <<" eh bissexto";
	return 0;
}
if(ano%4!=0){
	cout<<"O ano "<<ano <<" nao eh bissexto";
	return 0;
}
}
