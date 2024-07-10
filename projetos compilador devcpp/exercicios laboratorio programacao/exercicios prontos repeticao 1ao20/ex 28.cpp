//Uma loja tem 150 clientes cadastrados e deseja mandar uma correspondência a cada um deles anunciando um bônus especial. 
//Escreva um programa que leia o nome, o endereço do cliente e o valor de suas compras e 
//calcule um bônus de 10% se o valor das compras for menor que R$ 500,00 e de 15% se superior a este valor.
#include <iostream>
using namespace std;
int main()
{
float valor;
int cliente; 
string nome,ende;
cliente=1;
while(cliente<=150){
	cout<<"Digite seu nome: ";
	cin>>nome;
	cout<<"Digite seu bairro(Se for composto use '_', ex: Setor_Universitario): ";
	cin>>ende;
	cout<<"Digite o valor total de suas compras: ";
	cin>>valor;
	if(valor<500){
		valor=valor-(0.1*valor);
	}
	else{
		valor=valor-(0.15*valor);
	}
	cliente++;
	cout<<"Senhor(a) "<<nome<<" o novo valor com bonus equivale a R$"<<valor<< " e sera entregue ao bairro "<<ende<<endl;
}
return 0;

}
