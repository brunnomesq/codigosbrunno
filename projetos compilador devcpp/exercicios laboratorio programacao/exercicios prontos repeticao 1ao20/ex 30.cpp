//ex 30 O Departamento de Trânsito do Estado de São Paulo compilou dados de acidentes de tráfego no Estado no último ano.
//Para cada motorista envolvido num acidente, uma entrada de dados foi preparada com as seguintes informações:
//•ano de nascimento do motorista (numérico)•sexo ('M' ou 'F')•código de registro  (1 para São Paulo e 0 para qualquer outro registro)
//Preparar um algoritmo para ler um conjunto de dados e imprimir a seguinte estatística de motoristas envolvidos em acidentes:
//a)Percentagem de motoristas com menos de 25 anos;b)Percentagem de mulheres;c)Percentagem de motoristas com registro fora de São Paulo.
// 150     100
// 45      x
#include <iostream>
using namespace std;
int main()
{
int idade,cod_reg, cont_fem,cont_masc,cont_cod,cont_25,cont_m25,cont_cod1;
char sexo;
cont_fem=0;
cont_masc=0;
cont_cod=0;
cont_25=0;
cont_m25=0;
cont_cod1=0;
do{
cout<<"||Departamento de Transito do Estado de Sao Paulo||\nPara finalizar digite 0 no campo das Idades. ";
cout<<"\nIdade: ";
cin>>idade;
if(idade==0){
	cout<<"\n a)Percentagem de motoristas com menos de 25 anos: "<< (cont_25*100)/(cont_25 + cont_m25) <<"%";
    cout<<"\n b)Percentagem de mulheres: "<< (cont_fem*100)/(cont_fem+cont_masc)<<"%";
    cout<<"\n c)Percentagem de motoristas com registro fora de São Paulo: "<< (cont_cod*100)/(cont_cod+cont_cod1) << "%";
    return 0;
}
if(idade>0&&idade<25){
	cont_25=cont_25+1;
}
if(idade>=25){
	cont_m25=cont_m25+1;
}
    while(idade<0&&idade>140){
    	cout<<"Idade inválida! Digite novamente: ";
    	cin>>idade;
    	if(idade>0&&idade<25){
	    cont_25=cont_25+1;
}
        if(idade>=25){
		cont_m25=cont_m25+1;
}
	} 
cout<<"Sexo(F para feminino e M para masculino): ";
cin>>sexo;
if(sexo=='f'||sexo=='F'){
    cont_fem=cont_fem+1;
	}
if(sexo=='m'||sexo=='M'){
	cont_masc=cont_masc+1;
}
    while(sexo!='f'&&sexo!='m'&&sexo!='F'&&sexo!='M'){
    	cout<<"Sexo Incorreto! Digite novamente(F para feminino e M para masculino): ";
    	cin>>sexo;
    	if(sexo=='f'||sexo=='F'){
    	cont_fem=cont_fem+1;
	}
	if(sexo=='m'||sexo=='M'){
		cont_masc=cont_masc+1;
	}
	}
cout<<"Digite codigo de registro (1 para Sao Paulo e 0 para outro): ";
cin>>cod_reg;
if(cod_reg==0){
	cont_cod=cont_cod+1;
}
if(cod_reg==1){
	cont_cod1=cont_cod1+1;
}
    while(cod_reg!=0 && cod_reg!=1){
    	cout<<"Codigo invalido! (1 para Sao Paulo e 0 para outro): ";
    	cin>>cod_reg;
    	if(cod_reg==0){
	    cont_cod=cont_cod+1;
}
        if(cod_reg==1){
        	cont_cod1=cont_cod1+1;
		}
	}
}while(idade!=0);
}
