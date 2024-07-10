#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int expo, base;
	float num, den, s;
	expo= 0;
	num=0.0;
	den=0.0;
	s=0.0;
	
	for(base=15; base>=1; base--){
		num= pow(2, expo);
		den= pow(base, 2);
		if(base%2!=0){
			s= s+(num/den);
		}
		else{
			s= s-(num/den);
		}
		expo++;
		cout << s<< endl;
	}
	cout << "Somatorio S= " << s; 
	
}
