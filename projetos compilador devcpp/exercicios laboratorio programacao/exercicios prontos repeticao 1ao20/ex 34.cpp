//ex 34
#include <iostream>
using namespace std;
int main()
{
string nome;
float sal,salajuste,carros5, vcarros;
int i,ncarros;
ncarros=0;
do{
	cout<<"Bem-vindo Funcionario.\nDigite seu nome: ";
	cin>>nome;
	if(nome=="vazio"){
		cout<<"FIM";
		return 0;
	}
	cout<<"Digite o valor dos carros que vendeu no mes: (Para parar digite 0)\n";
	do{
	cout<<"Valor do Carro "<<ncarros+1<<" R$";
	cin>>vcarros;
	if(vcarros!=0){
		ncarros++;
		if(ncarros>10){
			salajuste=200;
		}
		else if(ncarros<=10){
			salajuste=100;
		}
		if(vcarros>50000){
			carros5=vcarros*0.01;
		}
}
	}while(vcarros!=0);
	cout<<"Senhor "<<nome<<", voce vendeu "<<ncarros<<" carros e o valor do seu salario ajustado corresponde a R$"<<1500+(salajuste*ncarros)+carros5<<"\n\n";
}while(nome!="vazio");
}
