//2-Fazer um algoritmo que calcule e escreva a seguinte soma: S = (37*38)/1 + (36*37)/2 + (36*35)/3 + (35*34)/4 + ... 1*2/37;
#include <iostream>
using namespace std;
int main()
{
int i, soma,a;
i=38;
a=1;
soma=0;
do{
soma=soma+(i*(i-1))/a;
i=i-1;
a=a+1;
} while(a<=37);
cout<<"Soma equivale a "<<soma;

}
