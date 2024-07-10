#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int d;	
	string hex="";
	cout << "Digite um numero decimal.\n";
	cin >> d;
	while(d!=0){
		if(d%16==0){
			hex= (char)(48) + hex;
		}
		else if(d%16==15 || d==15){
			hex=(char)(70) + hex;
		}
		else if(d%16==14 || d==14){
			hex=(char)(69)+hex;
		}
		else if(d%16==13 || d==13){
			hex=(char)(68)+hex;
		}
		else if(d%16==12 || d==12){
			hex=(char)(67)+hex;
		}
		else if(d%16==11 || d==11){
			hex=(char)(66)+hex;
		}
		else if(d%16==10 || d==10){
			hex=(char)(65)+hex;
		}
		else{
		
			hex = (char)(d%16+48)+hex;
		}
		d=d/16;
	
	}
	cout << hex << endl;
}
