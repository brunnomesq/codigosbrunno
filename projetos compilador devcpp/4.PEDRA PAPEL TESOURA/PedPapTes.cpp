#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <MMSystem.h>
#include <conio.h>
using namespace std;
int main()
{
unsigned seed = time(0);
srand(seed);

string batalha,escolha,jogo;
int pc,p1;
p1=0;
pc=0;
int mao,mao2,vencedor,rodada,rodadas;
rodada=0; 
rodadas=3;
string maop11,maop12,maop13,maopc1,maopc2,maopc3;

maop11="         ____  ";
maop12="________<    ) ";
maop13="__________/ /  ";

maopc1="  ____         ";
maopc2=" (    >________";
maopc3="  \\ \\__________";

bool escolher,inicio;

inicio:
inicio=true;
cout<<"PEDRA PAPEL OU TESOURA :)\n";
cout<<"(->) Jogar\n";
cout<<"(<-) Quantidade de rodadas\n";
while(inicio){
	if(GetAsyncKeyState(0x27)){
		inicio=false;
		system("CLS");
		Sleep(100);
		goto jogo;
	}
	if(GetAsyncKeyState(0x25)){
		inicio=false;
		system("CLS");
		Sleep(100);
		cout<<"escreva ate qual rodada deseja ir\n";
		cin>>rodadas;
		while(rodadas==0){
			cin>>rodadas;
		}
		Sleep(100);
		system("CLS");
		goto inicio;
	}
}

jogo:
cout<<"PEDRA(1) PAPEL(2) OU TESOURA(3):\n";
cout<<maop11<<maopc1<<endl<<maop12<<maopc2<<endl<<maop13<<maopc3<<endl;

while(rodada<rodadas){
escolher=true;
//pc:
mao2=rand()%3;
if(mao2==0){
	//pedra
	maopc1="  ____         ";
    maopc2=" (    >________";
    maopc3="  \\ \\__________";
}
if(mao2==1){
	//papel
	maopc1="  ||||         ";
    maopc2=" (    >________";
    maopc3="  \\ \\__________";
}
if(mao2==2){
	//tesoura
	maopc1="  __||         ";
    maopc2=" (    >________";
    maopc3="  \\ \\__________";
}

while(escolher){
	if(GetAsyncKeyState(0x31)){
		//pedra
		Sleep(100);
		mao=0;
		escolher=false;
		
		maop11="         ____  ";
        maop12="________<    ) ";
        maop13="__________/ /  ";
        goto batalha;
	}
	if(GetAsyncKeyState(0x32)){
		//papel
		Sleep(100);
		mao=1;
		escolher=false;
		
        maop11="         ||||  ";
        maop12="________<    ) ";
        maop13="__________/ /  ";
        goto batalha;

	}
	if(GetAsyncKeyState(0x33)){
		//tesoura
		Sleep(100);
		mao=2;
		escolher=false;
		maop11="         ||__  ";
        maop12="________<    ) ";
        maop13="__________/ /  ";
        goto batalha;
    }
}
batalha:
Sleep(100);
system("CLS");

if(mao==0){
   if(mao2==2){
   	rodada++;
   	p1++;
   }
   if(mao2==1){
   	rodada++;
   	pc++;
   }
}
if(mao==1){
	if(mao2==0){
		rodada++;
		p1++;
	}
	if(mao2==2){
		rodada++;
		pc++;
	}
}
if(mao==2){
	if(mao2==1){
		rodada++;
		p1++;
	}
	if(mao2==0){
		rodada++;
		pc++;
	}
}

cout<<"PEDRA(1) PAPEL(2) OU TESOURA(3):\n";
cout<<maop11<<maopc1<<endl<<maop12<<maopc2<<endl<<maop13<<maopc3<<endl<<p1<<"  x  "<<pc;

}
cout<<endl<<"VENCEDOR: ";
if(p1>pc){
	cout<<"PLAYER 1!";
}
else{
	if(pc>p1){
	cout<<"PC!";
}
    if(pc==p1){
    	cout<<"EMPATE!";
	}

}

}
