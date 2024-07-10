//ex 06
////Brunno Pedrosa Mesquita 25/03/22
//Uma locadora de charretes cobra R$8,50 de taxa para cada 3 horas de uso destas e R$3,50 para cada hora abaixo destas 3 horas.
//Fazer um algoritmo que, dado a quantidade de horas que a charrete foi usada, calcule e escreva quanto o cliente tem de pagar.
#include <iostream>
using namespace std;
int main()
{
int husad, hmais, hmenos;
cout<< "Digite por quantas horas usou a charrete: ";
cin>> husad;
hmais = husad / 3;
hmenos = husad % 3;
float hmais1, hmenos1;
hmais1 = hmais * 8.5;
hmenos1= hmenos * 3.5;
cout << "Voce tera que pagar: " << hmais1 + hmenos1 << " reais.";
}
