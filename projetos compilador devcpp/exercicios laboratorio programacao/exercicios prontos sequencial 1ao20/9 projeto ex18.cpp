//ex18
////Brunno Pedrosa Mesquita 25/03/22
//Fazer um algoritmo que leia um inteiro positivo, calcule e escreva as seguintes itens:
//Numero:
//Quadrado:
//Raiz Quadrada:
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float num;
cout<< "Digite um numero inteiro positivo: ";
cin>> num;
cout<< "O numero eh: " <<num <<"\nO seu quadrado eh: " << num*num << "\nA sua raiz eh: " << sqrt (num);
return 0;
}
