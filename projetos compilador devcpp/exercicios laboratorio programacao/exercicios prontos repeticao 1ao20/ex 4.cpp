#include <iostream>
#include <math.h>
using namespace std;
int main()
{
float a, sen;	
int contador;
cout << "Digite o valor do angulo 1 em radianos: ";
cin >> a;
contador=1;
while(a>=0.0 && a<=6.3){
	contador++;
	sen= a - ((pow(a,3))/6) + ((pow(a,5))/120) - ((pow(a,7))/5040);
	cout << "Sen"<<a <<"= " << sen;
	cout<< "Escreva o valor do angulo "<<contador<<": ";
	cin >> a;
	}
}
