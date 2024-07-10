//ex20
////Brunno Pedrosa Mesquita 25/03/22
//Fazer um algoritmo que calcule e escreva a quantidade de dinheiro a ser gasto em uma viagem. Sabe-se que o veículo a ser usado
//faz 12 Km por litro de gasolina e que o litro de gasolina custa R$ 2,90. O usuário ira fornecer o tempo de viagem e a velocidade média do veiculo
//Distância = tempo de viagem * velocidade média.
//Quantidade de litros = distância / 12.
#include <iostream>
using namespace std;
int main()
{
int t, vm, d, l, preco;
cout<<"Digite o tempo de viagem em horas: ";
cin>> t;
cout<<"Digite a velocidade media do veiculo por km/h: ";
cin>> vm;
d= t * vm;
l= d/12;
preco= l * 2.90;
cout<<"O valor a ser pago da viagem eh: R$" <<preco;
return 0;
}

