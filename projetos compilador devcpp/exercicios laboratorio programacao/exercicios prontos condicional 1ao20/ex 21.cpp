//ex 21
//Fazer um algoritmo que leia uma data,  dia/mês/anos, no formato inteiro e escreva a mesma data no formato  dia de (mês porextenso) de ano.
#include <iostream>
using namespace std;
int main()
{
int d,m,a;
cout<<"Digite o dia, o mes e o ano (separados por um espaco,ex:09 12 2015): ";
cin>> d>>m>>a;
if(m>12||m<1){
	cout<<"Mes invalido!";
	return 0;
}
if(d<1 ||d>31){
	cout<<"Dia invalido";
	return 0;
	}

if(m==1){
	cout<<d<<" de janeiro de "<<a;
}
if(m==2){
	if(d>29){
		cout<<"Dia invalido!";
		return 0;
	}
	else{
	
	cout<<d<<" de fevereiro de "<<a;
}
}
if(m==3){
	cout<<d<<" de marco de "<<a;
}
if(m==4){
	cout<<d<<" de abril de "<<a;
}
if(m==5){
	cout<<d<<" de maio de "<<a;
}
if(m==6){
	cout<<d<<" de junho de "<<a;
}
if(m==7){
	cout<<d<<" de julho de "<<a;
}
if(m==8){
	cout<<d<<" de agosto de "<<a;
}
if(m==9){
	cout<<d<<" de setembro de "<< a;
}
if(m==10){
	cout<<d<<" de outubro de "<<a;
}
if(m==11){
	cout<<d<<" de novembro de "<<a;
}
if(m==12){
	cout<<d<<" de dezembro de "<<a;
}
}
