//ex 09
////Brunno Pedrosa Mesquita 25/03/22
// Escrever um algoritmo que l�:
//a percentagem do IPI a ser acrescido no valor das pe�as;
//� o c�digo da pe�a 1, valor unit�rio da pe�a 1, quantidade de pe�as 1;
//� o c�digo da pe�a 2, valor unit�rio da pe�a 2, quantidade de pe�as 2;
//O algoritmo deve calcular o valor total a ser pago e apresentar o resultado. 
#include<iostream>
using namespace std;
int main()
{
int ipi, v1, q1, v2, q2, f;
cout << "Digite o valor do IPI a ser acrescentado nas pecas. " ;
cin >> ipi;
cout <<"Digite o valor unitario da peca 1 e a quantidade de pecas 1, respectivamente ";
cin >> v1 >> q1;
cout <<"Digite valor unitario da peca 2 e a quantidade de pecas 2, respectivamente ";
cin >> v2 >> q2;
f = (v1*q1 + v2*q2) * (ipi/100 +1);
cout <<" O valor total a ser pago eh: " << f;

}
