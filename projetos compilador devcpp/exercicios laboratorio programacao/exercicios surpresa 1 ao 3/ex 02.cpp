//ex 02 Fa�a um algoritmo que leia dois valores inteiros A e B se os valores forem iguais dever� se somar os dois,
//caso contr�rio multiplique A por B ao final do c�lculo atribuir o valor para uma vari�vel C.
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

 
