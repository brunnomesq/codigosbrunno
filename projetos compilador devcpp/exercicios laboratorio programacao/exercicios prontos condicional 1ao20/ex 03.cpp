// ex 03 Desenvolver um algoritmo que leia os coeficientes (A,B e C) de uma equa��o do segundo grau    ( Ax2 + Bx + C =0) e que calcule
//suas   ra�zes.   O   algoritmo   deve   mostrar,   quando   poss�vel,   o   valor   das   ra�zes   calculadas   e   a   classifica��o   das   mesmas:   �RA�ZES
//IMAGIN�RIAS�, �RAIZ �NICA� ou �RA�ZES DISTINTAS�.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float a,b,c,delta,x1,x2;
cout<<"Digite valores para A,B e C na equacao ( Ax2 + Bx + C =0): ";
cin>>a>>b>>c;
delta= (b*b) - (4 * a * c);
x1= (- b + sqrt(delta))/2*a;
x2= (-b - delta)/2 *a;
if(delta==0){
	cout<<"Sao raizes unicas";
	return 0;
}
if(delta<0){
	cout<<"Sao raizes imaginarias";
	return 0;
}
if(delta>0){
	cout<<"Sao raizes distintas";}
cout<<"\nE as raizes sao "<<x1<< " e/ou "<<x2;
return 0;
}
