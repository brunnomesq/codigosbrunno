//ex 33 Faça um algoritmo que receba a sigla da cidade de origem de um grupo de pessoas, ao final
//informe quantas foram digitadas das cidades do Rio de Janeiro, Belo Horizonte e São Paulo.
//O algoritmoencerra quando digitado “fim”.
#include <iostream>
using namespace std;
int main()
{
int i_rj,i_bh,i_sp;
string sigla;
i_rj=0;
i_bh=0;
i_sp=0;
while(sigla!="fim"&&sigla!="FIM"&&sigla!="Fim"){
	cout<<"Digite a sigla da sua cidade de origem(Escreva 'Fim' para finalizar): ";
	cin>>sigla;
	while(sigla!="fim"&&sigla!="FIM"&&sigla!="Fim"&&sigla!="RJ"&&sigla!="Rj"&&sigla!="rj"&&sigla!="rJ"&&sigla!="BH"&&sigla!="Bh"&&sigla!="bh"&&sigla!="bH"&&sigla!="SP"&&sigla!="Sp"&&sigla!="sp"&&sigla!="sP"){
		cout<<"Sigla incorreta, Digite novamente!\nDigite sua sigla de origem, sendo do Rio de Janeiro, Belo Horizonte ou Sao Paulo(Escreva 'Fim para finalizar'): ";
		cin>>sigla;
		}
	if(sigla=="RJ"||sigla=="Rj"||sigla=="rj"||sigla=="rJ"){
		i_rj++;
	}
	if(sigla=="BH"||sigla=="Bh"||sigla=="bh"||sigla=="bH"){
		i_bh++;
	}
	if(sigla=="SP"||sigla=="Sp"||sigla=="sp"||sigla=="sP"){
		i_sp++;
	}
}
cout<<"Do Rio de Janeiro: "<<i_rj<<" pessoa(s);";
cout<<"\nDe Belo Horizonte: "<<i_bh<<" pessoa(s);";
cout<<"\nDe Sao Paulo: "<<i_sp<<" pessoa(s);";
return 0;
}
