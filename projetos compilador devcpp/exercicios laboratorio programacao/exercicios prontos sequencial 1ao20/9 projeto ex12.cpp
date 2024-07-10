//ex 12
////Brunno Pedrosa Mesquita 25/03/22
//Em uma padaria o padeiro quer saber qual o custo de fabricação do pão francês para saber por quanto terá que vender o pão, tendo um lucro de 30%.
//Sabendo-se que a receita do pão leva farinha, água e fermento, escreva um algoritmo que: leia a quantidade de
//quilos de farinha, o valor do quilo de farinha, a quantidade de litros de água, o valor do litro de água, a quantidade de quilowatts hora de
//energia, o valor do quilowatt hora e o percentual do imposto que o padeiro paga pelo pão, calcule o preço de custo e o valor de venda, e
//escreva estes valores.
#include <iostream>
using namespace std;
int main()
{
float kgf, precof, lagua, precoagua, watts, wattsp, pao, custo, imppao, venda, l;
cout<< "Quantos quilos de farinha voce usou?\n";
cin >> kgf;
cout<< "Quanto ta o quilo da farinha?\n";
cin>> precof;
cout<< "Quantos litros de agua voce usou?\n";
cin>> lagua;
cout<<"Quanto ta o valor do litro de agua?\n";
cin>> precoagua;
cout<< "Quantos killowats usou por hora?\n";
cin>> watts;
cout<< "Quanto custa o killowat por hora?\n";
cin>> wattsp;
cout<< "Digite o percentual do imposto pago pelo pao:\n";
cin>> pao;
custo = (kgf * precof) + (lagua * precoagua) + (watts * wattsp);
imppao = (custo * (pao/100)); 
custo = imppao + custo;
l = custo *0.3;
venda = l + custo;
cout<< "O preco de venda eh: " << venda << " reais.";
cout <<"\n o preco de custo eh: " << custo << " reais.";
return 0; 
}
