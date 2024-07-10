//ex08 Números quadrados perfeitos são aqueles cuja raiz quadrada é um número inteiro. Exemplo 144. Fazer um algoritmo que dado
//um número inteiro positivo, calcule e escreva se este é ou não quadrado perfeito.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,raiz;
cout<<"Digite um numero inteiro positivo: ";
cin>>a;
raiz = sqrt(a);
if(raiz*raiz== a){
	cout<<"O numero eh um quadrado perfeito!";
	return 0;}
else{
	cout<<"O numero nao eh um quadrado perfeito!";
}
return 0;
}
