#include <iostream>
using namespace std;
int main()
{
	int i;
	float total, den, base, num;
	base=0;
	num=100;
	while(base<=19){
		
		if(base==0){
			den=1;
		}
		else{
			den=base;
			for(i=1; i<base; i++){		
				den = i*den;
			}		
		}
		total= total + (num/den);
		num--;
		base++;
		cout << total << endl;
			
	}

		cout << total;
	}

	

