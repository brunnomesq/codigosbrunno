// ex 02
////Brunno Pedrosa Mesquita 25/03/22
// Muitos países estão passando a utilizar o sistema métrico. Fazer um  algoritmo para executar as seguintes conversões:
//•Ler uma temperatura dada em graus Fahrenheit e imprimir o equivalente em Celsius Fahrenheit=95*C?3 2.
//•Ler uma quantidade de chuva dada em polegadas e imprimir o equivalente em milímetros       (1 polegada = 25,4 mm).
//Brunno Pedrosa Mesquita
#include <iostream>
using namespace std;
int main()
{
float f, c, chuvap, chuvamm;
cout <<"Digite o valor da temperatura em Fahrenheit: ";
cin >> f;
cout <<"Digite o tamanho da chuva em polegadas: ";
cin >> chuvap;
c= (f-32)*5/9;
chuvamm = 25.4*chuvap;
cout << "O valor da temperatura em celsus eh: "<< c << " e o valor da chuva em milimetros eh: "<< chuvamm;
}
