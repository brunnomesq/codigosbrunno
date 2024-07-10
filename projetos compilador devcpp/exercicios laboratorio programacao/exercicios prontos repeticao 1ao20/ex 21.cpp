#include <iostream>
#include <math.h>
using namespace std;
int main()
{ 
	int mod, num, total, pot, som;
	cout << "Entre um numero na base 8.\n";
	cin >> num;
	pot=0;
	while(num>0){

		mod=num%10;
		num=num/10;
		som = mod * pow(8, pot);
		total = total + som;
		pot++;
	}
	cout << "Decimal: " <<total;

}
