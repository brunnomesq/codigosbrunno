//ex 10
////Brunno Pedrosa Mesquita 25/03/22
//Escrever um algoritmo que lê o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora, o
//número de filhos com idade menor que 14 anos e o valor do salário família (pago por filho com menos de 14 anos), e que calcule o
//salário total deste funcionário e escreva o seu número e o seu salário total.
#include <iostream>
using namespace std;
int main()
{
int num, hor, fil, hortotal, famtotal ;
float salhor, salfami;
cout<< "Digite o seu numero de funcionario: ";
cin>> num;
cout<< "Digite seu numero de horas trabalhadas: ";
cin>> hor;
cout<< "Digite quanto ganha por hora: ";
cin>> salhor;
cout<< "Digite quantos filhos tem menores de 14 anos: ";
cin>> fil;
cout<< "Digite o valor do salario familia: ";
cin>> salfami;
hortotal= hor * salhor;
famtotal= fil *salfami;
cout<< "O funcionario numero " << num << " possui o salario total equivalente em " << hortotal + famtotal;
return 0;
}
