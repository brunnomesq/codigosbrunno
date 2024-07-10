//ex16
////Brunno Pedrosa Mesquita 25/03/22
//Fazer um algoritmo que dado 4 notas de provas, a b, c, e d calcule e escreva o valor das seguintes médias:
//(formulas da lista)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float n1, n2, n3, n4, arit, har, geo_aux, geo, quad_aux, quad;
cout<< "Digite a primeira nota: ";
cin>> n1;
cout<<"Digite a segunda nota: ";
cin>> n2;
cout<< "Digite a terceira nota: ";
cin>>n3;
cout<<"Digite a sua quarta nota: ";
cin>> n4;
arit= (n1 + n2 + n3 + n4) / 4;
har = 4 / (1/n1 + 1/n2 + 1/n3 + 1/n4);
geo_aux = (n1 * n2 * n3 * n4);
geo= pow(geo_aux, 1.0/4.0);
quad_aux = (pow(n1,2) + pow(n2,2) + pow(n3,2) + pow(n4,2)) / 4;
quad = sqrt(quad_aux);
cout<< "A media aritmetica de suas notas sao: " <<arit;
cout<< "\n A media harmonica de suas notas sao: " <<har;
cout<< "\n A media geometrica de suas notas sao: " <<geo;
cout<< "\n A media quadratica de suas notas sao: " <<quad;
return 0;
}
