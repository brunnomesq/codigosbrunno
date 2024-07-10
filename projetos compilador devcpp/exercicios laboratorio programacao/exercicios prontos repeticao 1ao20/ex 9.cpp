#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float fat, total, base;
	int den, i, num, n, pot;
	num=1;
	den=2;
	pot=2;
	total=1;
	
	cout << "Entre o valor do angulo x.\n";
	cin >> base;
	
	for(i=1; i<=20; i++){
		fat=den;
		num=pow(base, pot);
		
		for(n=1; n<den; n++){
			fat = fat * n;
		}
		
		if(i%2!=0){
			total= total - (num/fat);
		}
		else{
			total= total + (num/fat);
		}
		den=den + 2;
		pot= pot + 2;
		cout << total << endl;
	}
	cout << "Cosseno(x)= "<< total<< endl; 
	cout << "Funcao cos x= "<<cos(base)<< endl;
	cout << total - cos(base);
}
