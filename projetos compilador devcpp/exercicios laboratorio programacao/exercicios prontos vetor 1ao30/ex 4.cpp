//Fazer um algoritmo que leia um conjunto de 100 números inteiros. Calcule e escreva a amplitude total deste conjunto
#include <iostream>
using namespace std;
int main()
{
int i,v[10],maior,menor,maiort,menort;
maior=0;
menor=1000000000000;
for(i=0;i<10;i++){
	cin>>v[i];
}
for(i=0;i<10;i++){
	if(v[i]>=maior){
		maiort=v[i];
		maior=v[i];
	}
}
for(i=0;i<10;i++){
	if(v[i]<=menor){
		menort=v[i];
		menor=v[i];
	}
menor=v[i];
}

cout<<"A amplitude total equivale a "<<maiort-menort;
}

