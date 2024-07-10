//ex14 Escrever um algoritmo que lê o número de identificação, as 3 notas obtidas por um aluno nas 3 verificações e a média dos
//exercícios que fazem parte da avaliação. Calcular a média de aproveitamento do aluno, usando a fórmula: (na lista)
//O algoritmo deve  escrever  o número  do aluno, suas  notas, a média  dos exercícios, a média de  aproveitamento, o conceito
//correspondente e a mensagem: APROVADO se o conceito for A, B ou C e REPROVADO, se o conceito for D ou E. 
#include <iostream>
using namespace std;
int main()
{
float n1,n2,n3,media, apro,ident;
char x,a,b,c,d,e;

cout<<"Digite seu numero de identificacao: ";
cin>>ident;
if(ident<=0){
	cout<<"numero de identificacao incorreto";
	return 0;
}
cout<<"Digite as suas tres notas: ";
cin>>n1>>n2>>n3;
if(n1>10||n2>10||n3>10||n1<0||n2<0||n3<0){
	cout<<"Notas invalidas!";
	return 0;
}
cout<<"Digite a media dos exercicios: ";
cin>> media;
if(media>10||media<0){
	cout<<"Medias invalidas!";
	return 0;
}
apro= (n1+n2*2+n3*3+media)/7;
if(apro<=10.0 && apro>=9.1){
	x='a';
}
if(apro<=9.0&&apro>=7.6){
	x='b';
}
if(apro<=7.5&&apro>=6.1){
	x='c';
}
if(apro<=6.0&&apro>=4.1){
	x='d';
}
if(apro<=4.0){
	x='e';
}
if(x=='a'||x=='b'||x=='c'){
	cout<<"O aluno "<<ident<< " com as notas "<<n1<<" "<<n2<< " "<<n3<< " e a media das atividades "<<media<<" tem aproveitamento de "<< apro<<"; Entao esta APROVADO";
return 0;
}
if(x=='d'||x=='e'){
cout<<"O aluno "<<ident<< " com as notas "<<n1<<" "<<n2<< " "<<n3<< " e a media das atividades "<<media<<" tem aproveitamento de "<< apro<<"; Entao esta REPROVADO";
return 0;
}
}
