//ex 11
////Brunno Pedrosa Mesquita 25/03/22
//Um hotel com 42 apartamentos resolveu fazer promoções para os fins de semana fora da alta temporada, isto é, nos meses de
//abril, maio, junho, agosto, setembro, outubro e novembro. A taxa da promoção é de 22% da diária normal. A ocupação média do hotel
//sem promoção é de 40%. A expectativa é aumentar a taxa de ocupação para 70%. Supondo que as expectativas se confirmem, escrever
//um algoritmo que lê a diária normal, que calcule e escreva as seguintes informações:
//(a) O valor da diária no período da promoção;
//(b) O valor médio arrecadado sem a promoção, durante um mês;
//(c) O valor médio arrecadado com a promoção, durante um mês;
//(d) O lucro ou prejuízo mensal com a promoção.
#include <iostream>
using namespace std;
int main()
{
float d, p1, p, as, ac, l;
cout<< "Digite o valor da diaria normal: ";
cin >> d;
p1 =  d * 0.22;
p = d  - p1 ;
as= d * (42 * 0.40) * 30;
ac= p * (42 * 0.70) * 30;
l = ac - as;
cout<<"\nO valor da diaria no periodo da promocao eh " << p;
cout<<"\nO valor medio arrecadado sem promocao durante um mes eh " << as;
cout<<"\nO valor medio arrecadado com promocao durante um mes eh " << ac;
cout<<"\nO lucro ou prejuizo mensal com a promocao eh " << l;
}
