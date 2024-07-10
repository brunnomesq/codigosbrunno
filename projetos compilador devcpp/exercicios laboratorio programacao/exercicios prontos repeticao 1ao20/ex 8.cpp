#include <iostream>
using namespace std;
int main ()
{
	float fat, total;
	int den, i, num, n;
	num=1;
	den =1;
	
	for(i=1; i<=50; i++){
		fat=num;
		for(n=1; n<num; n++){
			fat = fat * n;
		}
		if(i%2!=0){
			total = total +(fat/den);
		}
		else{
			total = total - (fat/den);
		}
		den = (den*2)+1;
		num++;
		cout <<  total << endl;
	}
	cout<< "Total: " << total;
}
	
