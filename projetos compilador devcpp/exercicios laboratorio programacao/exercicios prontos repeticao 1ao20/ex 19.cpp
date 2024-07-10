#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int d, aux;
	string bin="";
	cout << "Digite um numero decimal.\n";
	cin >> d;
	while(d!=0){
		bin = (char)(d%2+48) + bin;
		d=d/2;
	}
	cout << bin << endl;
}
