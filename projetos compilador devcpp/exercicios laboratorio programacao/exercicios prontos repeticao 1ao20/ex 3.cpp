//ex 3 Fazer um algoritmo que calcule e escreva a soma dos 50 primeiros termos da seguinte série: 1000/1- 997/2 + 994/3 - 991/4 +...;
#include <iostream>
using namespace std;
int main()
{
int i,a,soma;
a=1000;
i=1;
soma=0;
do{
	soma= soma - a/i;
	a= a - 3;
	i= i + 1;
}	while(a<=0);
cout<< "Soma equivale a "<<soma;
}
