//ex 09 Desenvolver um algoritmo para calcular a conta de água para a SANEAGO. O custo da água varia dependendo do tipo do
//consumidor - residencial, comercial ou industrial. A regra para calcular a conta é:
//•Residencial: R$ 5,00 de taxa mais R$ 0,05 por m3 gastos;
//•Comercial: R$ 500,00 para os primeiros 80  m3   gastos mais R$ 0,25 por m3  gastos acima dos 80 m3;
//•Industrial: R$ 800,00 para os primeiros 100  m3   gastos mas R$ 0,04 por m3  gastos acima dos 100 m3;
//O algoritmo deverá ler a conta do cliente, seu tipo (residencial, comercial e industrial) e o seu consumo de água em metros cubicos.
//Como resultado imprimir a conta do cliente e o valor em real a ser pago pelo mesmo.
#include <iostream>
using namespace std;
int main()
{
int tipo;
float metros,residencial,comercial,industrial,valor;
cout<<"Digite o tipo de consumidor de agua que voce eh(sendo resindencial = 1, comercial = 2 e industrial = 3): ";
cin>>tipo;
if(tipo<1 || tipo > 3){
	cout<<"O tipo esta incorreto! Digite novamente(sendo resindencial = 1, comercial = 2 e industrial = 3): ";           //dei uma inovada nessa parte
	cin>>tipo;}
	if (tipo<1 || tipo > 3){
		cout<<"O tipo esta incorreto!";
		return 0;}
cout<<"Digite qual foi seu consumo de agua em metros cubicos: ";
cin>> metros;
if(tipo==1){
residencial= 5.00 + 0.05 * metros;                      // 500 80
valor=residencial;                                     //   x  m
}
if(tipo==2){
	if (metros <80){
	comercial= (500.00 * metros)/80;
	valor= comercial;
	}
    if (metros==80){
	comercial= 500.00;
	valor=comercial;
    }
    if (metros > 80){
    comercial= 500.00 + (0.25 * (metros - 80));
    valor=comercial;
	}
}
if(tipo == 3){
	if(metros<100){
	industrial = (800.00 * metros)/100;
	valor = comercial;
	}
	if(metros==100){
	industrial= 800.00;
	valor=industrial;
	}
	if(metros>100){
	industrial = 800.00 +(0.04 * (metros - 100));
	valor=industrial;
	}
}
cout<<"O valor que tera que pagar equivale a R$"<<valor;
}

