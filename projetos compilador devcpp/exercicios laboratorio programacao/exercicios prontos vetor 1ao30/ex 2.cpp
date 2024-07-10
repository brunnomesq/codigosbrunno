//Implementar um algoritmo que leia um conjunto de 50 elementos inteiros e os imprima em ordem contrária da que foi lida.
#include<iostream>
using namespace std;
int main()
{
int v[5],x[5],i,j;
for(i=0;i<5;i++){
	cout<<"Digite o valor da posicao "<<i+1<<": ";
	cin>>v[i];
	x[i]=v[i];
}
cout<<"Os valores ao contrario sao: "<<endl;
for(j=4;j>=0;j--){
	cout<<x[j]<<endl;
}
}


