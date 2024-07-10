//ex 20
//Fazer um algoritmo que converta uma determinada quantia dada em Reais para uma das seguintes moedas de acordo com a opçãodo usuário:
//•E – Euro R$ 2,617; •L – Libra EsterlinaR$ 3,816; •D – DólarR$ 2,071;• I – IeneR$ 1,018.
#include <iostream>
using namespace std;
int main()
{
float din;
char x;
cout<<"Digite o dinheiro em reais R$";
cin>>din;
cout<<"Qual a conversao que deseja: 'E' para euros, 'L' para libras, 'D' para dolar e 'I' para iene\n";
cin>>x;
if(x=='e'||x=='E'){
	cout<<"O valor do dinheiro em reais para euros equivale a: "<< din/2.617;
}
if(x=='l'||x=='L'){
	cout<<"O valor do dinheiro em reais para libras equivale a: "<<din/3.816;
}
if(x=='d'||x=='D'){
	cout<<"O valor do dinheiro em reais para dolar equivale a: "<<din/2.071;
}
if(x=='i'||x=='I'){
	cout<<"O valor de dinheiro em reais para ienes equivale a: "<<din/1.018;
}

}
