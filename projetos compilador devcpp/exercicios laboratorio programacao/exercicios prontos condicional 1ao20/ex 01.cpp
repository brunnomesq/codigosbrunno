// ex 01 Fazer um algoritmo que calcule a m�dia aritm�tica das 3 notas de um aluno e mostre, al�m do valor da m�dia do aluno, uma8.78
//mensagem de "Aprovado", caso a m�dia seja igual ou superior a 6, ou a mensagem "reprovado", caso contr�rio. 
#include <iostream>
using namespace std;
int main()
{
float nota1,nota2,nota3,media;
cout<<"Digite o valor de da nota 1, nota 2 e nota 3: ";
cin>>nota1>>nota2>>nota3;
if(nota1<0||nota1>10||nota2<0||nota2>10||nota3<0||nota3>10){
	cout<<"Nota invalida!";
	return 0;
}
media=(nota1+nota2+nota3)/3;
if(media>=6){
	cout<<"Voce foi aprovado!";
	return 0;
}
else{
	cout<<"Voce foi reprovado!";
	return 0;
}
}
