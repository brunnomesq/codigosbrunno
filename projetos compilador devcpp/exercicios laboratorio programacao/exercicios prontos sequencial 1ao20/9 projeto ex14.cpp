//ex14
////Brunno Pedrosa Mesquita 25/03/22
//Escrever um algoritmo que leia a taxa de potência de um refrigerador, o tempo que permaneceu ligado e o valor do quilowatt
//hora, e que, calcule e escreva a energia total gasta pelo refrigerador, bem como, o valor a ser pago à companhia de Energia Elétrica
#include <iostream>
using namespace std;
int main()
{
float taxa, valor, energia, valorp;
int tempo;
cout<< "Digite a taxa de potencia do refrigerador em quilowatt: \n";
cin>> taxa;
cout<< "Digite o tempo que permaneceu ligado em horas: \n";
cin>> tempo;
cout<< "Digite o valor do quilowwatt/hora \n";
cin>> valor;
energia = taxa * tempo;
valorp = energia * valor;
cout << "A energia total gasta pelo refrigerador eh: " << energia<< "kw";
cout << "\n O valor a ser pago para a companhia de energia eh: R$" <<valorp;
return 0;
}
