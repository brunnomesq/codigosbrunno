//ex17
////Brunno Pedrosa Mesquita 25/03/22
//Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno. Considerar que a média é ponderada e que
//o peso das notas é: 2,3 e 5, respectivamente. 
#include <iostream>
using namespace std;
int main()
{
float n1, n2, n3, media;
cout<< "Digite a sua primeira nota: ";
cin>> n1;
cout<< "Digite a sua segunda nota: ";
cin>> n2;
cout<< "Digite a sua terceira nota: ";
cin>> n3;
media=((n1 * 2) + (n2 * 3) + (n3 * 5)) /10;
cout<< "A media ponderada de suas notas eh: " << media;
return 0;
}
