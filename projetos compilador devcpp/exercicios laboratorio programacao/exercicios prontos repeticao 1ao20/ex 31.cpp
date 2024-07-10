//ex 31 O  IBOPE  encomendou-lhe  um  programa  para  registrar  as  pesquisas  das  eleições  entre  os  candidatos  A,  B  e  C. 
// Faça  um programa  que  dado  o  candidato  escolhido  (A,  B  ou  C),  a  idade  e  o  sexo  do  eleitor(a),  
//para  um  número  indeterminado  de  eleitores, calcule e escreva:
//a)Qual o candidato mais votado b)Qual  a média de idade entre os eleitores do candidato mais votado c)Qual o candidato preferido dos homens
//DEMOREI MUITO NESSE CODIGO!!!!!!
#include <iostream>
using namespace std;
int main()
{
int idade,idade_contador,maior,cand_a,cand_b,cand_c,soma_a,soma_b,soma_c,cand_a1,cand_b1,cand_c1,maiorhomem,somatotal;
char sexo, cand,candnomemaior,candhomem;
cand_a=0;
cand_b=0;
cand_c=0;
cand_a1=0;
cand_b1=0;
cand_c1=0;
soma_a=0;
soma_b=0;
soma_c=0;
do{
	cout<<" PESQUISA IBOPE \nPara sair entre X no campo dos Candidatos";
	cout<<"Qual Seu candidato? A| B | C\n";
    cin>>cand;
    if(cand=='x'||cand=='X'){
    	cout<<"O mais votado eh o candidato: ";
    	if(cand_a==cand_b&&cand_a==cand_c&&cand_b==cand_c){
    		cout<<"Empate entre A, B e C";
    		somatotal=soma_b+soma_c+soma_a;
    		maior=cand_a+cand_b+cand_c;
			candnomemaior=' ';}
    	if(cand_a==cand_b&&cand_a>cand_c&&cand_b>cand_c){
    		cout<<"Empate entre A e B";
    		somatotal=soma_a+soma_b;
    		maior=cand_a+cand_b;
			candnomemaior=' ';}
		if(cand_b==cand_c&&cand_b>cand_a&&cand_c>cand_a){
			cout<<"Empate entre B e C";
			somatotal=soma_b+soma_c;
			maior=cand_b+cand_c;
			candnomemaior=' ';}
	    if(cand_a==cand_c&&cand_c>cand_b&&cand_a>cand_b){
			cout<<"Empate entre A e C";
			somatotal=soma_a+soma_c;
			maior=cand_a+cand_c;
			candnomemaior=' ';}
		    cout<<candnomemaior;
        cout<<"\nA media de idade do candidato mais votado equivale a: "<<somatotal/maior;
        cout<<"\nO candidato mais votado entre os homens eh: ";
        if(cand_a1==cand_b1&&cand_a1==cand_c1&&cand_b1==cand_c1){
    		cout<<"Empate entre A, B e C";
			candhomem=' ';}
        if(cand_a1==cand_b1&&cand_a1>cand_c1&&cand_b1>cand_c1){
    		cout<<"Empate entre A e B";
			candhomem=' ';}
		if(cand_b1==cand_c1&&cand_b1>cand_a1&&cand_c1>cand_a1){
			cout<<"Empate entre B e C";
			candhomem=' ';}
	    if(cand_a1==cand_c1&&cand_c1>cand_b1&&cand_a1>cand_b1){
			cout<<"Empate entre A e C";
			candhomem=' ';}
		cout<<candhomem;
        return 0;
	}
    while(cand!='A'&&cand!='a'&&cand!='B'&&cand!='b'&&cand!='C'&&cand!='c'){
    	cout<<"Candidato inexistente! Digite novamente A| B |C\n";
    	cin>>cand;
	}
	cout<<"Idade: ";
	cin>>idade;
	if(idade>=0&&idade<=140&&cand=='A'||cand=='a'){
	soma_a=soma_a+idade;
	}
	if(idade>=0&&idade<=140&&cand=='B'||cand=='b'){
	soma_b=soma_b+idade;
	}
	if(idade>=0&&idade<=140&&cand=='C'||cand=='c'){
	soma_c=soma_c+idade;
	}
	while(idade<0&&idade>140){
    	cout<<"Idade inválida! Digite novamente: ";
    	cin>>idade;
   	if(idade>=0&&idade<=140&&cand=='A'||cand=='a'){
	soma_a=soma_a+idade;
	}
	if(idade>=0&&idade<=140&&cand=='B'||cand=='b'){
	soma_b=soma_b+idade;
	}
	if(idade>=0&&idade<=140&&cand=='C'||cand=='c'){
	soma_c=soma_c+idade;
	}
		}
    cout<<"Sexo(F ou M): ";
    cin>>sexo;
        if(sexo=='M'||sexo=='m'){
    		if(cand=='A'||cand=='a'){
    			cand_a1++;
			}
			if(cand=='B'||cand=='b'){
    		    cand_b1++;
			}
			if(cand=='C'||cand=='c'){
    			cand_c1++;
			}
			if(cand_a1>cand_b1&&cand_a1>cand_c1){
				candhomem= 'A';
			}
			if(cand_b1>cand_a1&&cand_b1>cand_c1){
				candhomem= 'B';
			}
			if(cand_c1>cand_b1&&cand_c1>cand_a1){
				candhomem= 'C';
		    }
		}
    while(sexo!='f'&&sexo!='m'&&sexo!='F'&&sexo!='M'){
    	cout<<"Sexo Incorreto! Digite novamente(F para feminino e M para masculino): ";
    	cin>>sexo;
		if(sexo=='M'||sexo=='m'){
    		if(cand=='A'||cand=='a'){
    			cand_a1++;
			}
			if(cand=='B'||cand=='b'){
    		    cand_b1++;
			}
			if(cand=='C'||cand=='c'){
    			cand_c1++;
			}
			if(cand_a1>cand_b1&&cand_a1>cand_c1){
				candhomem= 'A';
			}
			if(cand_b1>cand_a1&&cand_b1>cand_c1){
				candhomem= 'B';
			}
			if(cand_c1>cand_b1&&cand_c1>cand_a1){
				candhomem= 'C';
		    }
		}
		}
if(cand=='A'||cand=='a'){
	cand_a++;
}
if(cand=='B'||cand=='b'){
	cand_b++;
}
if(cand=='C'||cand=='c'){
	cand_c++;
}
if(cand_a>cand_c&&cand_a>cand_b){
	maior=cand_a;
	candnomemaior= 'A';
	somatotal=soma_a;
}
if(cand_b>cand_a&&cand_b>cand_c){
	maior=cand_b;
	candnomemaior= 'B';
	somatotal=soma_b;
}
if(cand_c>cand_a&&cand_c>cand_b){
	maior=cand_c;
	candnomemaior= 'C';
	somatotal=soma_c;
}
}while(cand!='X'&&cand!='x');

}
