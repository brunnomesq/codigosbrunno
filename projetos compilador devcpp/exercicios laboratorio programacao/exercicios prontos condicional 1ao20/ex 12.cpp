//ex 12Elabore um algoritmo que calcule o valor a ser pago por um produto considerando o preço normal de etiqueta e a escolha da
//condição de pagamento. Utilize os códigos da tabela a seguir para saber qual a condição de pagamento escolhida e efetuar o cálculo
//adequado.
#include <iostream>
using namespace std;
int main()
{
float valor, nvalor;
int cod;
cout<<"Digite o valor do produto: ";
cin>> valor;
cout<<"Digite o codigo da condicao de pagamento(1 ao 4) \n a vista, dinheiro ou cheque, 10% de desconto=1 \n a vista, cartão de credito, 5% de desconto=2 \n Em 2 vezes, preço normal da etiqueta sem juros=3 \n Em 3 vezes, preço normal da etiqueta + 10% de juros=4\n";
cin>> cod;
if(cod==1){
	nvalor= valor - (0.1*valor);
}
if(cod==2){
	nvalor= valor- (0.05 * valor);
}
if(cod==3){
	nvalor= valor;
}
if(cod==4){
	nvalor= valor +(0.1*valor);
}
if(cod<=0 || cod>4){
	cout<<"O codigo nao esta correto!";
	return 0;
}
cout<<"O produto custa R$"<<nvalor;
return 0;
}


