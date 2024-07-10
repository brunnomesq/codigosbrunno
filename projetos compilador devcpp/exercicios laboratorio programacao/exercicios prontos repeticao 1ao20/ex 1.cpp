//1- Fazer um algoritmo que calcule e escreva o valor de S: 1/1 + 3/2 + 5/3 + 7/4 + 9/5 + ... 99/50;
#include <iostream>
using namespace std;
int main()
{
int i,a,soma;
i=1;
a=1;
soma=0;
do{
	soma=soma + (i/a);
	i=i+2;
	a=a+1;
}while(a<=50&&i<=99);           // i= numerador, a= denominador
cout<<"Soma = "<< soma;
}

