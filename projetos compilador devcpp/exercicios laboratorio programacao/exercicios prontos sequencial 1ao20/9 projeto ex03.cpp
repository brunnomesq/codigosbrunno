//ex 03
////Brunno Pedrosa Mesquita 25/03/22
//O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor 
//e dos impostos(aplicados ao custo de fábrica).
// Supondo que a percentagem do distribuidor seja de 12% do preço de fábrica e os impostos de 30% dopreço de fábrica, 
//fazer um algoritmo para ler o custo de fábrica de um carro e imprimir o custo ao consumidor.
//Brunno Pedrosa Mesquita
#include <iostream>
using namespace std;
int main()
{
float d, imp, fab;
cout << "Digite o valor de preco de fabrica: ";
cin >> fab;
d = (fab)*12/100;
imp= (fab)*30/100;
cout << "O valor do custo do consumidor eh: "<< fab + d + imp;
}
