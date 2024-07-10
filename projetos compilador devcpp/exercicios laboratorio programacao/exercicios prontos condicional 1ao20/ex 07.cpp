//ex 07 Desenvolver um algoritmo que leia o mês e o ano de uma data e que exiba o número de dias da mesma.
#include <iostream>
using namespace std;
int main()
{
int ano, mes,dia_do_mes;
cout<<"Digite o ano e o mes(em numeros): ";
cin>>ano>>mes;
if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){
	dia_do_mes= 31;
}
if(mes==4||mes==6||mes==9||mes==11){
	dia_do_mes= 30;
}
if(mes==2&&ano%4==0){
	dia_do_mes=29;
}
if(mes==2&&ano%4!=0){
	dia_do_mes=28;
}
cout<<"O mes vai ate o dia "<< dia_do_mes;
return 0;
}
