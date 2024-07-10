//ex 07
////Brunno Pedrosa Mesquita 25/03/22
//Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias. 
#include <iostream>
using namespace std;
int main ()
{
int idade, ano, mes , dia;
cout<< "Digite sua idade em anos: ";
cin >> ano;
cout<< "Digite quantos meses voce tem depois do seu aniversario: ";
cin>> mes;
cout<< "Digite quantos dias voce tem depois do seu mesversario: ";
cin>> dia;
idade = (dia + (mes * 60) + (ano * 365));
cout<< "Voce tem " << idade << " dias.";
}
