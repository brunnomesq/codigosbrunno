//ex 11Desenvolver um algoritmo com as opções de calcular e imprimir o volume e a área da superfície de um cone reto, de um cilindro
//ou de uma esfera. O algoritmo deverá ler a opção da figura desejada (cone/cilindro /esfera) e de acordo com a opção escolhida calcular e
//escrever o volume e a área da superfície da figura pedida. 
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int fig;
float volume, area, altura, raio;
cout<<"Qual a figura desejada?(cone=1,cilindro=2,esfera=3): ";
cin>> fig;
cout<<"Qual o raio? ";
cin>>raio;	
if(fig==1||fig==2){
	cout<<"Digite a altura da figura: ";
	cin>>altura;
}
if(fig==1){
	volume = (3.14 * raio * raio * altura)/3;
	area = 3.14 * raio * sqrt((raio*raio)+(altura*altura));
}
if(fig==2){
	volume = 3.14 * raio * raio * altura;
	area = 2 * 3.14 * raio * altura;
}
if(fig==3){
	volume= (4/3)* 3.14* raio * raio * raio;
	area = 4* 3.14 *raio*raio;
}
cout<<"O volume eh: "<<volume<<" e a area eh: "<<area;
}
