//ex08 N�meros quadrados perfeitos s�o aqueles cuja raiz quadrada � um n�mero inteiro. Exemplo 144. Fazer um algoritmo que dado
//um n�mero inteiro positivo, calcule e escreva se este � ou n�o quadrado perfeito.
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
