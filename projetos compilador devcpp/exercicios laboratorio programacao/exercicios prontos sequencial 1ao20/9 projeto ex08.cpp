//ex08
////Brunno Pedrosa Mesquita 25/03/22
//Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica expressa em segundos
// e mostre-o expresso em horas, minutos e segundos. 
#include <iostream>
using namespace std;
int main ()
{
int x, y, hr, min, seg;
cout << "quanto tempo durou o evento da fabrica em segundos? ";
cin >> x; // 4130 segundos na fabrica
y= x/60;   //    68
hr= y/60;  // 1 horas
seg= x%60; // o resto 
min= y%60;//  o resto 8
cout <<" O Tempo do evento foi " << hr << " horas, " << min << " minutos e " << seg << " segundos.";
return 0;  // 4130 segunodos = 1 hora, 14 minutos e 33 seegubods
}
