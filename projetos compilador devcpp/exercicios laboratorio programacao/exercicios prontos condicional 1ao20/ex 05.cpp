//ex 05 O n�mero 3025 possui a seguinte caracter�stica:
//30 + 25 =55
// 55^2 =3015
//Fazer um algoritmo que dado um n�mero de 4 d�gitos calcule e escreva se ele possui ou n�o esta caracter�stica.
#include <iostream>
using namespace std;
int main()
{
int a, aux_div,resto_div,soma;
cout<<"Digite um numero de 4 digitos: ";
cin>>a;
aux_div= a/100;         //3015
resto_div=a%100;        //3015
soma= aux_div + resto_div;
if(soma * soma == a){
	cout<<"O numero "<<soma <<" possui a caracteristica";
	return 0;
}
else{
	cout<<"O numero "<<soma<<" nao possui a caracteristica";
	return 0;
}
}
