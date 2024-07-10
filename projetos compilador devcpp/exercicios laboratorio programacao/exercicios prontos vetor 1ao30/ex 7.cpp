//Fazer um algoritmo que leia um conjunto de 100 números inteiros. Calcule e escreva raiz média quadrática.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int i,v[10],q;
float media, mediaq;
for(i=0;i<10;i++){
	cin>>v[i];
	q=v[i]*v[i];
	media=q+media;
}
mediaq = sqrt(media/10);
cout<<"A media quadratica equivale a: "<<mediaq;
}
