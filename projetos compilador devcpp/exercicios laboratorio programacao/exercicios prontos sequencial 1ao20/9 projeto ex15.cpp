//ex15
////Brunno Pedrosa Mesquita 25/03/22
//Criar um algoritmo que, dado o n�mero da conta corrente com tr�s d�gitos, retorne o d�gito verificador, o qual � calculado da
//seguinte maneira:
//Exemplo: n�mero da conta: 235;
//� Somar o n�mero da conta com seu inverso: 235 + 532 = 767;
//� Multiplicar cada d�gito pela sua ordem posicional e somar estes resultados: 767
// 7 x1 6 x2 7x3 = 7  12  21 , que somados sao 40
//� O �ltimo digito desse resultado � o d�gito verificador da conta (40 -> 0);
//� O n�mero da conta passa a ser 235 � 0.
#include <iostream>
using namespace std;
int main()
{
int num, uni, dezaux, dez, cen, inverso, somador, cen_s, dezaux_s, dez_s, uni_s, mul_cen, mul_dez, mul_uni, somador_s, divs;
cout << "Digite um numero de tres digitos: "; 
cin>> num;
uni= num / 100;
dezaux= num % 100;
dez= dezaux / 10;                                  
cen= dezaux%10;                                   // auxiliar
inverso= (cen * 100) + (dez * 10) + uni;
somador = inverso + num;
cen_s= somador / 100;
dezaux_s= somador % 100;
dez_s= dezaux_s / 10;
uni_s= dezaux_s % 10;
mul_cen= cen_s * 1;
mul_dez= dez_s *2;
mul_uni= uni_s * 3;
somador_s= mul_cen + mul_dez + mul_uni;
divs= somador_s%10;
cout << "O verificador do numero " <<num << " equivale a " <<divs;
return 0;
}
