//ex 22
//Criar um algoritmo que a partir da idade e peso do paciente calcule a dosagem de determinado medicamento e imprima a receita
//informando quantas gotas do medicamento o paciente deve tomar por dose. Considere que o medicamento em questão possui 500 mg
//por ml, e que cada ml corresponde a 20 gotas.
#include <iostream>
using namespace std;
int main()
{
int idade,gotas;
float peso,dosa;
cout<<"Digite sua idade: ";
cin>>idade;
cout<<"Digite seu peso: ";
cin>>peso;
if(idade<0||peso<0||idade>130||peso>500){
    cout<<"Dados inseridos incorretamente.";
    return 0;
}
if(idade>=12 && peso>=60){
	dosa=1000;
}
if(idade>=12 && peso<=60){
	dosa=875;
}
if(idade<12){
	if(peso>=5&&peso<=9){
		dosa=125;
	}
	if(peso>=9.1&&peso<=16){
		dosa=250;
	}
	if(peso>=16.1&&peso<=24){
		dosa=375;
	}
	if(peso>=24.1&&peso<=30){
		dosa=500;
	}
	if(peso>=30){
		dosa=750;
	}
}                //1ml = 500mg e 1ml = 20 gotas, entao 500mg=20 gotas. Para cada gota tem-se 25 mg;
gotas= dosa / 25;
cout<<"O paciente devera tomar "<< gotas<< " gotas.";
}
