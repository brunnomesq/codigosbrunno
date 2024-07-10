//ex 05 O número 3025 possui a seguinte característica:
//30 + 25 =55
// 55^2 =3015
//Fazer um algoritmo que dado um número de 4 dígitos calcule e escreva se ele possui ou não esta característica.
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
