//Na cidade de Tokio existe cerca de 55000 motocicletas. J� a cidade de Aparecida Goi�nia tem cerca de 1500 motocicletas. 
//Crie um algoritmo que calcule em quantos anos a cidade de Aparecida de Goi�nia superar� em n�meros de motocicletas a cidade de Tokio, 
//sendo que a taxa de aquisi��o de motocicletas � de 0,5% a.m. para Tokio e 0,89% a.m.  para Aparecida de Goi�nia.
#include <iostream>
using namespace std;
int main()
{                                             // 5 para tokio, 8,9 para ap por mes
float mototok,motoap;
int ano,mes,toktotal;
mes=0;
ano=0;
mototok=0;
motoap=0;
toktotal=53500;
do{
mototok=mototok+5;
motoap=motoap+8,9;
mes=mes+1;
toktotal=toktotal+mototok;
if(mes==12){
	ano++;
	mes=0;
}	
}while(motoap<toktotal);
cout<<"levara "<<ano<< " anos para aparecida alcancar tokio em numero de bicicletas.";
}
