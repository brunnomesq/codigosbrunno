//ex 06 Fazer um algoritmo que dado os lados de um tri�ngulo   A, B e C. Dizer se os lados dados formam um tri�ngulo: 
//retangulo (A2=B2+C2), obtus�ngulo (A2>B2+C2) ou acut�ngulo (A2<B2+C2). 
#include <iostream>
using namespace std;
int main()
{
int a, b ,c;
cout<<"Digite a base do triangulo: ";
cin>>a;
cout<<"Digite os dois lados do triangulo: ";
cin>>b>>c;
if( a*a ==(b*b)+(c*c)){
	cout<<"O triangulo eh retangulo";
}
if(a*a>(b*b)+(c*c)){
	cout<<"O triangulo eh obtusangulo";
}
if(a*a<(b*b)+(c*c)){
	cout<<"O triangulo eh ocutangulo";
}
return 0;
}
