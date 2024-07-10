//ex 13
////Brunno Pedrosa Mesquita 25/03/22
//Escrever um algoritmo que lê o público total de futebol e forneça a renda do jogo, sabendo-se que havia 4 tipos de ingressos
//assim distribuídos: popular - 10% a R$1,00, geral - 50% a R$5,00, arquibancada - 30% a R$10,00 e cadeiras - 10% a R$20,00.
#include <iostream>
using namespace std;
int main()
{
int pub, porpop, pop, porgeral, geral, porarq, arq, porcad, cad, renda;
cout<< "Qual foi o publico do jogo de hoje?\n";
cin>> pub;
porpop= 0.1 * pub;
pop= porpop * 1;
porgeral= 0.5 * pub;
geral= porgeral * 5;
porarq = 0.3 * pub;
arq= porarq * 10;
porcad= 0.1 * pub;
cad= porcad * 20;
renda= cad + arq + geral + pop;
cout <<"A renda total do jogo de hoje foi de R$" <<renda;
return 0;
}
