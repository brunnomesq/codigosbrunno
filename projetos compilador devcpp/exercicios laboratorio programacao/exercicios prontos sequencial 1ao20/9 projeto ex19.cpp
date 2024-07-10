//ex19
////Brunno Pedrosa Mesquita 25/03/22
//Numa certa loja de eletrodomésticos, o comerciário encarregado da seção de televisores recebe, mensalmente, um salário fixo
//mais comissão. Essa comissão é calculada em relação ao número de televisores vendidos por mês de cada um dos tipos de TV,
//obedecendo-se à tabela abaixo:
// ver a tabela da lista, Sabe-se que o salário total e o fixo mais as comissões. Escrever um algoritmo que calcule e escreva o salário do empregado
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
