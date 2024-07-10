//ex 06 Fazer um algoritmo que dado os lados de um triângulo   A, B e C. Dizer se os lados dados formam um triângulo: 
//retangulo (A2=B2+C2), obtusângulo (A2>B2+C2) ou acutângulo (A2<B2+C2). 
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
