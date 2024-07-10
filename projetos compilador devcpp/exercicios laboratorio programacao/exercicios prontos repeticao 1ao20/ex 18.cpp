#include <iostream>
using namespace std;
int main()
{
	int n1, n2, resto, aux1, aux2;
	cout << "Entre n1.\n";
	cin >> n1;
	cout << "Entre n2.\n";
	cin >> n2;
	aux1=n1;
	aux2=n2;
	do{
		resto = aux1%aux2;
		aux1=aux2;
		aux2=resto;
	} while (resto!=0);

		cout << "O mmc entre os dois numeros e: " << (n1*n2)/ aux1;
	
}
