//ex15 Desenvolver um algoritmo que calcule o salário bruto e  o salário líquido de um funcionário.
//dados na lista
#include <iostream>
using namespace std;
int main()
{
float horas,salhora,salbruto,desconto,desconto2,salliq;
string nome;
cout<<"Digite seu nome: ";
cin>>nome;
cout<<"Digite a quantidade de horas-extras trabalhadas: ";
cin>>horas;
if(horas<0){
	cout<<"Horas invalidas!";
	return 0;
}
salhora= horas * 10;
salbruto= 3 * 350 + salhora;
if(salbruto> 1500.00){
	desconto = salbruto * 0.12;
}
if(salbruto>2000.00){
	desconto2 = salbruto * 0.2;
}
salliq= salbruto - (desconto + desconto2);
cout<<"Senhor " << nome <<", o seu salario bruto equivale a: R$"<<salbruto<< " e o seu salario liquido equivale a: R$"<<salliq;
return 0;

}
