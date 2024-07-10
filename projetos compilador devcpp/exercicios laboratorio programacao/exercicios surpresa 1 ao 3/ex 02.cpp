//ex 02 Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais deverá se somar os dois,
//caso contrário multiplique A por B ao final do cálculo atribuir o valor para uma variável C.
#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Entre dois valores inteiros A e B: ";
cin>> a>> b;
if(a == b){
	c = a + b;}
else{
    c = a * b;}
cout << " O valor de C eh: "<< c;
return 0;    
}

 
