//ex19
////Brunno Pedrosa Mesquita 25/03/22
//Numa certa loja de eletrodom�sticos, o comerci�rio encarregado da se��o de televisores recebe, mensalmente, um sal�rio fixo
//mais comiss�o. Essa comiss�o � calculada em rela��o ao n�mero de televisores vendidos por m�s de cada um dos tipos de TV,
//obedecendo-se � tabela abaixo:
// ver a tabela da lista, Sabe-se que o sal�rio total e o fixo mais as comiss�es. Escrever um algoritmo que calcule e escreva o sal�rio do empregado
#include <iostream>
using namespace std;
int main()
{
int sal, tv_lcd, tv_led, tv_p, comissao;
cout<< "Digite seu salario fixo: R$";
cin>> sal;
cout<< "Quantas TVs LCD o funcionario vende por mes? ";
cin>> tv_lcd;
cout<< "Quantas TVs LED o funcionario vende por mes? ";
cin>> tv_led;
cout<< "Quantas Tvs Plasmas o funcionario vende por mes? ";
cin>> tv_p;
comissao = (tv_lcd * 50) + (tv_led * 60) + (tv_p *55);
cout<< "O salario total do funcionario equivale a R$" << comissao + sal;
return 0;
}
