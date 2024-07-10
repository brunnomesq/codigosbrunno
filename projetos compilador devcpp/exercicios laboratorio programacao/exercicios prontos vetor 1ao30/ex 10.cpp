//ex 10 (nao consegui fazer)
#include <iostream>
using namespace std;
int main()
{
int i,j,a[5],b[5],c[10],x,d[5];
j=0;
for(i=0;i<5;i++){
	cout<<"A"<<i+1<<": ";
	cin>>a[i];
	c[i]=a[i];
}
for(i=0;i<5;i++){
	cout<<"B"<<i+1<<": ";
	cin>>b[i];
	c[i+5]=b[i];
}
for(i=0;i<5;i++){
    for(x=0;x<5;x++){
    	if(a[i]==b[x]){
    		d[i]=b[x];
    		j++;
		}
	}
}
for(i=0;i<j;i++){
	cout<<d[i];
}
}

