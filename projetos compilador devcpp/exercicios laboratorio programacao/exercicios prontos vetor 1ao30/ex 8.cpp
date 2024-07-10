//Fazer  um  algoritmo  que  leia  dois  conjuntos de  30  números  inteiros.  
//Calcule  e  escreva  um  terceiro  conjunto  fruto  da intercalação dos dois primeiros.
#include <iostream>
using namespace std;
int main()
{
int a[30],b[30],c[60],i;
for(i=0;i<30;i++){
	cout<<"A"<<i+1<<": ";
	cin>>a[i];
	c[i]=a[i];
}
for(i=0;i<30;i++){
	cout<<"B"<<i+1<<": ";
	cin>>b[i];
	c[i+30]=b[i];
}
cout<<"O valor da intercalacao equivale a:"<<endl;
for(i=0;i<60;i++){
	cout<<c[i]<<endl;
}
}
