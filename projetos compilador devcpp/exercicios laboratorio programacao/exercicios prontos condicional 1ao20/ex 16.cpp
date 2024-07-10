//ex 16 Criar um algoritmo que leia a idade de uma pessoa e que mostre a sua classe eleitoral:
//•Não-eleitor (abaixo de 16 anos);•Eleitor Obrigatório (entre 18 e 65 anos);•Eleitor facultativo (entre 16 e 18 anos e maior de 65 anos).
#include <iostream>
using namespace std;
int main()
{
int idade;
cout<<"Digite sua idade: ";
cin >>idade;
if(idade <0 || idade>150){
	cout<<"idade invalida!";
	return 0;
}
if( idade < 16 && idade >=0){
    cout<<"Nao-eleitor!";
    return 0;
}
if( idade >=18 &&idade <=65){
	cout<<"Eleitor obrigatorio!";
	return 0;
}
if(idade >=16 && idade < 18 ||idade > 65){
	cout<<"Eleitor facultativo!";
	return 0;
}
}
