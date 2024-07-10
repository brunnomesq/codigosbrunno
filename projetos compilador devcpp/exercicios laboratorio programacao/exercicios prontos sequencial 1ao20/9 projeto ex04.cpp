//ex 04
////Brunno Pedrosa Mesquita 25/03/22
//Dados os pontos A e B, cujas coordenadas A(x1,y1) e B (x2,y2) serão informadas via teclado, desenvolver um algoritmo  quecalcule a distância entre A e B. 
//Onde:Distância= (na lista)
//Brunno Pedrosa Mesquita
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float x1,y1,x2,y2,d;
cout<< "Digite as coordenadas de x1 e y1: ";
cin>> x1>> y1;
cout<< "Digite as coordenadas de x2 e y2: ";
cin>> x2>>y2;
d= sqrt(pow(x1-y1,2)+pow(x2-y2,2));
cout<< "A distancia eh: "<< d;

}
