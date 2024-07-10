//Fazer um algoritmo que leia um conjunto de 100 números inteiros; leia também um valor para variável x e verifique se o valor de x existe no conjunto lido.
#include <iostream>
using namespace std;
int main()
{
int v[10],i,x;
for(i=0;i<10;i++){
	cin>>v[i];
}
cout<<"Digite valor de x: ";
cin>>x;
for(i=0;i<10;i++){
	if(x==v[i]){
		cout<<"O valor "<<x <<" existe na variavel "<<i+1<<endl;
	}
}
}
