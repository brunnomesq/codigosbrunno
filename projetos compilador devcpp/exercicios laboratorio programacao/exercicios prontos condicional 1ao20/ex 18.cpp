//ex 18Desenvolver um algoritmo para calcular e imprimir o preço final de um carro. O valor do preço inicial de fábrica é fornecido porum meio de entrada.
// O carro pode ter as seguintes opções:
//(a) (S,N)Ar condicionado:  R$ 1750,00(b) (S,N)Pintura Metálica:  R$ 800,00(c) (S,N)Vidro Elétrico:   R$ 1200,00(d) (S,N)Direção Hidráulica:  R$ 2000,00. 
#include <iostream>
using namespace std;
int main()
{
float carro;
int opc1,opc2,opc3,opc4;

cout<<"Qual o valor de fabrica do carro? ";
cin>>carro;
cout<<"Deseja adicionar Ar condicionado no seu carro? (1=sim, 0=nao): ";
cin>> opc1;
if(opc1>=2||opc1<0){
	cout<<"Opcao inexistente.";
	return 0;
}
if(opc1==1){
	opc1= 1750.00;
}
cout<<"Deseja adicionar pintura metalica? (1=sim,0=nao): ";
cin>> opc2;
if(opc2>=2||opc2<0){
	cout<<"Opcao inexistente.";
	return 0;
}
if(opc2==1){
	opc2= 800.00;
}
cout<<"Deseja adicionar vidro eletrico? (1=sim, 0=nao): ";
cin>> opc3;
if(opc3>=2||opc3<0){
	cout<<"Opcao inexistente.";
	return 0;
}
if(opc3==1){
	opc3= 1200.00;
}
cout<<"Deseja adicionar Direcao hidraulica? (1=sim,0=nao): ";
cin>>opc4;
if(opc4>=2||opc4<0){
	cout<<"Opcao inexistente.";
	return 0;
}
if(opc4==1){
	opc4= 2000.00;
}
cout<<"O preco de fabrica eh: R$"<<carro<<" e o preco final eh: R$"<<carro+ opc1+opc2+opc3+opc4;
return 0;
}
