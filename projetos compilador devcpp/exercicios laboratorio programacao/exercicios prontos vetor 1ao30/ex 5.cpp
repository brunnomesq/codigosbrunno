//Fazer um algoritmo que leia um conjunto de 100 n�meros inteiros. Calcule e escreva m�dia aritm�tica.
#include <iostream>
using namespace std;
int main()
{
int i,v[10]; 
float media;
media=0;
for(i=0;i<10;i++){
	cin>>v[i];
	media=v[i]+media;
}
cout<<"A media equivale a "<<media/100;
}
