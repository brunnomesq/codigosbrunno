//ex 11
////Brunno Pedrosa Mesquita 25/03/22
//Um hotel com 42 apartamentos resolveu fazer promo��es para os fins de semana fora da alta temporada, isto �, nos meses de
//abril, maio, junho, agosto, setembro, outubro e novembro. A taxa da promo��o � de 22% da di�ria normal. A ocupa��o m�dia do hotel
//sem promo��o � de 40%. A expectativa � aumentar a taxa de ocupa��o para 70%. Supondo que as expectativas se confirmem, escrever
//um algoritmo que l� a di�ria normal, que calcule e escreva as seguintes informa��es:
//(a) O valor da di�ria no per�odo da promo��o;
//(b) O valor m�dio arrecadado sem a promo��o, durante um m�s;
//(c) O valor m�dio arrecadado com a promo��o, durante um m�s;
//(d) O lucro ou preju�zo mensal com a promo��o.
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
