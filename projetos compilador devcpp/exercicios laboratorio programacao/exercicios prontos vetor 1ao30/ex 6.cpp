//Fazer um algoritmo que leia um conjunto de 100 números inteiros. Calcule e escreva o desvio médio.
#include <iostream>
using namespace std;
int main()
{
int i;
float v[10],media,desv_soma,desv;
for(i=0;i<10;i++){
	cin>>v[i];
	media=v[i]+media;
}
media=media/10;
for(i=0;i<10;i++){
	if(v[i]>media){
		desv=v[i]-media;
	}
	if(v[i]<media){
		desv=media-v[i];
	}
desv_soma=desv+desv_soma;
}
cout<<"O desvio medio equivale a "<<desv_soma/10;
}
