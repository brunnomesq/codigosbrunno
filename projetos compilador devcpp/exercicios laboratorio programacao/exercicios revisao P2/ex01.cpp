//1.Dados quatro n�meros distintos, desenvolver um algoritmo que determine e imprima a soma dos tr�s maiores.
#include <iostream>
using namespace std;
int main()
{
int a, b, c, d, soma;
cout<<"Digite quatro valores inteiros distintos: ";
cin >> a>>b>>c>>d;
if (a < b && a<c && a<d){
	soma = b + c + d;}
if (b<a&&b<c&&b<d){
	soma = a + c + d;}
if (c<a && c<b && c<d){
	soma = a + b + d;}
if (d<a && d<b && d<c){
	soma = a + b + c;}
cout << "A soma equivale a "<< soma;
return 0;
}
