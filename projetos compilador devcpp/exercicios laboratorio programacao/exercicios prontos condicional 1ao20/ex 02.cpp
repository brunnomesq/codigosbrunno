// ex 02 Desenvolver um algoritmo que leia  um número  inteiro e verifique se  este é divisível por 5 e por 3 ao mesmo tempo.
#include <iostream>
using namespace std;
int main()
{
int num;
cout<<"Digite um numero inteiro: ";
cin>> num;
if(num%5==0 && num%3==0){
	cout<<"O numero eh divisivel por 5 e 3 ao mesmo tempo";
	return 0;
}
else{
	cout<<"O numero nao eh divisivel por 5 e 3 ao mesmo tempo";
	return 0;
}
}
