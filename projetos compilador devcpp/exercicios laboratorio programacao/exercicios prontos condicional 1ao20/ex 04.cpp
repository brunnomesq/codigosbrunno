// ex 04 Escrever um algoritmo que leia 3 números inteiros e que mostre o maior deles, supondo que todos sejam distintos.
#include <iostream>
using namespace std;
int main()
{
int a,b,c,maior;
cout<<"Digite tres numeros inteiros: ";
cin>>a>>b>>c;
if(a==b||a==c||b==c){
	cout<<"Os numeros nao podem ser iguais";
	return 0;
}
if(a>b&&a>c){
	maior=a;
}
if(b>a&&c>a){
	maior=b;
}
if(c>a&&c>b){
	maior=c;
}
cout<<"O maior numeros eh: "<<maior;
return 0;
}
