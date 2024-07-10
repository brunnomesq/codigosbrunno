//ex 12
#include <iostream>
using namespace std;
int main()
{
int i,num[15],pecas[15],sexo[15],j;
float sal[15],folha;
cout<<"Bem vindo, digite seu numero abaixo (o numero 0 e 1 ja estao sendo usados)\n";
for(i=0;i<15;i++){
	cout<<"Digite seu numero de identificacao: ";               //i=0 num[i]= 0
	cin>>num[i];
	for(j=0;j<15;j++){
		while(i!=j&&num[i]==num[j]||num[i]==0){
			cout<<"Esse numero de identificacao ja foi usado! Digite outro: ";
			cin>>num[i];
		}
	}
	cout<<"Digite o numero de pecas fabricadas por mes: ";
	cin>>pecas[i];
	cout<<"Digite seu sexo: (1 para masculino e 2 para feminino): ";
	cin>>sexo[i];
	while(sexo[i]<1||sexo[i]>2){
		cout<<"Digite seu sexo corretamente (1 para masculino e 2 para feminino): ";
		cin>>sexo[i];
	}
	if(pecas[i]<=30){
		sal[i]=622;
	}
	if(pecas[i]>=31&&pecas[i]<=35){
		sal[i]=622 + (622*0.03);
	}
	if(pecas[i]>=36){
		sal[i]=622 + (622*0.05);
	}
	folha=folha+sal[i];
}
for(i=0;i<15;i++){
	cout<<"Numero de identificacao: "<<num[i];
	cout<<"\nQuantidade de pecas fabricadas: "<<pecas[i];
	cout<<"\nSexo ";
	if(sexo[i]==1){
	    cout<<"masculino";
	}
	else{
	    cout<<"feminino. ";
	}
	cout<<"\nSalario ajustado: R$"<<sal[i]<<endl;
}
cout<<"A folha total corresponde a R$"<<folha;
}
