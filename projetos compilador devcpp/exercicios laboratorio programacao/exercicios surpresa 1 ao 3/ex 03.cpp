//ex 03 Fa�a um programa que recebe o sal�rio de um colaborador e o reajuste segundo o seguinte crit�rio, baseado no sal�rio atual:
//*1 sal�rios at� R$ 280,00 (incluindo): aumento de 20%
//*2 sal�rios entre R$ 280,00 e R$ 700,00: aumento de 15%
//*3 sal�rios entre R$ 700,00 e R$ 1.500,00: aumento de 10%
//*4 sal�rios de R$ 1500,00 em diante: aumento de 5%
//Ap�s o aumento ser realizado, informe na tela: a. o sal�rio antes do reajuste;b. o percentual de aumento aplicado;c. o valor do aumento;d. o novo sal�rio, ap�s o aumento.
#include <iostream>
using namespace std;
int main()
{
float p;
float sal, nsal;
cout<<"Qual o salario do colaborador: ";
cin>>sal;
if (sal <=280){
	p = 20;
	nsal = sal + (sal * 0.20);}
else {
	if (sal> 280 && sal <=700){
		p = 15;
		nsal = sal + (sal * 0.15);}
	if (sal > 700 && sal <= 1500){
		p = 10;
		nsal = sal + (sal * 0.10);}
	if (sal> 1500){
		p = 5;
		nsal = sal + (sal * 0.05);}	
	}
cout<<"O salario antes do reajuste era: R$"<<sal;
cout<<"\nO percentual do aumento aplicado eh: " <<p<<"%";
cout<<"\nO valor do aumento foi: R$"<<nsal-sal;
cout<<"\nO novo salario eh: R$"<<nsal;
return 0;
}

