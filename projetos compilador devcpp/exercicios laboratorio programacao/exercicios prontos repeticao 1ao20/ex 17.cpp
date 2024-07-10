#include <iostream>
using namespace std;
int main(){
	int quociente, 	n1, n2, resto;
	cout << "Entre n1.\n";
	cin >> n1;
	cout << "Entre n2.\n";
	cin >> n2;
	quociente = 1;
	resto= n1 - n2;
	while(resto - n2 >= 0){
		resto= resto - n2;
		quociente ++;
	}
	cout << "Quociente(" << n1 << "," << n2 << ") =" << quociente << endl << "Resto(" << n1 << "," << n2 << ") =" << resto <<endl;
}
