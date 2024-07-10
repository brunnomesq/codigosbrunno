//ex 01
//Brunno Pedrosa Mesquita 25/03/22
// Um fabricante de latas deseja desenvolver um algoritmo para calcular o custo de uma lata cilindrica de aluminio.
// O custo do aluminio é 100 reais por m2.
// Dados da entrada: raio e altura da lata (em metros).
// Area da lata= area da base (pi * raio^2 * 2) + area do lado (2* pi * raio * altura).
// Conside o preço do aluminio por m2 como sendo um constante
#include <iostream>
using namespace std;
int main()
{
float alt, raio, area;
cout <<"Digite o valor da altura da lata em metros: ";
cin >>alt;
cout <<"Digite o raio da lata em metros: ";
cin >>raio;
area = (3.14 * raio*raio * 2) + (2 * 3.14 * raio *alt);
cout <<"O valor da lata cilindrica do aluminio eh: " << 100 * area;
return 0;
}


