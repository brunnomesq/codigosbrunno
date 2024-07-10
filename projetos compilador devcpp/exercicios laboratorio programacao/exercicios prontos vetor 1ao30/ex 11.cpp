//Elabore  um  algoritmo  para  armazenar  em  um  vetor  V1  todos  os  valores  inteirospositivos  desde  1  até  50. 
// Em  seguida transporte todos os elementos primos do vetorV1 para um vetor V2. Imprima no final os dois vetores.
#include <iostream>
using namespace std;
int main()
{
int i,v[50],j,k[15];
j=-1;
for(i=0;i<50;i++){
	v[i]=i+1;
	if(v[i]==2||v[i]==3||v[i]==5||v[i]==7||v[i]==11||v[i]==13||v[i]==17||v[i]==19||v[i]==23||v[i]==29||v[i]==31||v[i]==37||v[i]==41||v[i]==43||v[i]==47){
		j++;
		k[j]=v[i];
			}
		
	}

for(i=0;i<50;i++){
	cout<<v[i];
}
cout<<endl;
for(j=0;j<15;j++){
	cout<<k[j]<<" ";
}
}
