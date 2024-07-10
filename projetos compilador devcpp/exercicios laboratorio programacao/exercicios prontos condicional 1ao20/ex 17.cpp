//ex17 Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando asseguintes expressões: 
//•Para homens: 72.7 * h -58 ; •Para mulheres: 62.1* h -44.7.
#include <iostream>
using namespace std;
int main()
{
char sexo;
float alt;
cout<<"Digite sua altura: ";
cin>> alt;
if(alt<=0){
	cout<<"Digite altura valida!";
	return 0;
}
cout<<"Digite seu sexo(sendo feminino= F e masculino = M): ";
cin>> sexo;
if(sexo== 'F'||sexo=='f'){
	cout<<"O seu peso ideal equivale a: "<<(62.1 * alt -44.7);
}
if(sexo=='M'||sexo=='m'){
	cout<<"O seu peso ideal equivale a: "<<(72.7 * alt - 58);
}
}
