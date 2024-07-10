#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int i, den;
	double s, pi;
	den=1;
	s=1;
	while(i<=25){
		den= den+2;
		s= s - (1/(pow(den,3)));
		den= den+2;
		s= s + (1/(pow(den,3)));
		i++;
	}
	pi=pow(s*32, 1.0/3.0);
	cout << "Pi= " << pi;
	
	
}
