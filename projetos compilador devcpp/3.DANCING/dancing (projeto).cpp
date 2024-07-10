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

bool modotf=false,regrastf=false,iniciotf=false,comecotf=false;
int comeco,modo,perder;
int maior110,variavel,aleatorio,contadorcls,velocidade,number,round,parado,inicio;
string setas,setasc,setaspc,setasp,espaco;
string acerto,cabeca,tronco,pernas;
string fname;

modo=2;
parado=1;
round=1;
number=0;
contadorcls=0;
espaco=" ";
variavel=0;
aleatorio=rand()%4;
maior110=0;
velocidade=700; 
perder=0;

cabeca="|o_o|\n";
tronco=" (|) \n";
pernas=" | | \n";

cout<<"DANCING";
Sleep(1000);
cout<<"\nPressione 1 para comecar o jogo\n";
while(true){
	if(GetAsyncKeyState(0x31)){
		goto comeco;
	}
}
comeco:
system("CLS");
cout<<"1-JOGAR\n2-DIFICULDADE (MODO ";
if(modo==1){
	cout<<"FACIL)";
}
if(modo==2){
	cout<<"MEDIO)";
}
if(modo==3){
	cout<<"DIFICIL)";
}
cout<<"\n3-REGRAS\n4-CREDITOS\n";
Sleep(500);
comecotf=true;
while(comecotf){
	if(GetAsyncKeyState(0x31)){
		goto inicio;
	}
	if(GetAsyncKeyState(0x32)){
		modotf=true;
		comecotf=false;
		Sleep(500);
		system("CLS");
		cout<<"1-FACIL\n2-MEDIO\n3-DIFICIL";
		while(true){
		if(GetAsyncKeyState(0x31)){
			modo=1;
			velocidade=1000;
			system("CLS");
			modotf=false;
			comecotf=true;
			goto comeco;
		}
		if(GetAsyncKeyState(0x32)){
			modo=2;
			velocidade=700;
			system("CLS");
			modotf=false;
			comecotf=true;
			goto comeco;
		}
		if(GetAsyncKeyState(0x33)){
			modo=3;
			velocidade=500;
			system("CLS");
			modotf=false;
			comecotf=true;
			goto comeco;
		}
		}
	}
	if(GetAsyncKeyState(0x33)){
		Sleep(500);
		system("CLS");
		cout<<"REGRAS:\n-Sao simples, basta apertar as setas do teclado conforme aparece na tela\n-Cada vez que acerta sua pontuacao aumenta\n-Por fim, a cada round aumenta a velocidade\n";
		cout<<"\n|Pressione 0 para voltar ao menu|\n";
		while(true){
		
        if(GetAsyncKeyState(0x30)){
        	system("CLS");
        	goto comeco;
		}	
	}
	}
	if(GetAsyncKeyState(0x34)){
		Sleep(500);
		cout<<"O JOGO FOI FEITO POR BRUNNO\n";
		cout<<"3...";
		Sleep(1000);
		cout<<"2...";
		Sleep(1000);
		cout<<"1...";
		Sleep(1000);
		system("CLS");
		goto comeco;
	}
}
inicio:
system("CLS");
cout<<"3...";
Sleep(1000);
cout<<"2...";
Sleep(1000);
cout<<"1...";
Sleep(1000);
cout<<"GO!";
Sleep(200);
while(true){
if(variavel==0){
	system("CLS");
	aleatorio=rand()%4;
	if(aleatorio==3){
		setas=setas+"v | ";
		setasc="v";
	}
	if(aleatorio==2){
		setas=setas+"> | ";
		setasc=">";
	}
	if(aleatorio==1){
		setas=setas+"^ | ";
		setasc="^";
	}
	if(aleatorio==0){
		setas=setas+"< | ";
		setasc="<";
	}
	if(contadorcls==30){
		system("CLS");
		setas="";
		contadorcls=0;
		velocidade=velocidade-25;
		round++;
	}
	cout<<"Round "<<round<<"|Pontuacao: "<<number<<"|"<<endl<<setas<<"\n\n"<<acerto<<"\t\t\t\t\t\t"<<cabeca<<"\t\t\t\t\t\t"<<tronco<<"\t\t\t\t\t\t"<<pernas;
	if(maior110>0){
		cout<<"\t\t\t\t\t\t"<<cabeca<<"\t\t\t\t\t\t"<<tronco<<"\t\t\t\t\t\t"<<pernas;
	
	if(maior110>1){
		cout<<"\t\t\t\t\t\t"<<cabeca<<"\t\t\t\t\t\t"<<tronco<<"\t\t\t\t\t\t"<<pernas;
	}
}
	contadorcls++;
	Sleep(velocidade);
	setaspc=setasc;
	parado=1;
	
}
if(GetAsyncKeyState(VK_DOWN)){
	setasp="v";
	if(setasp==setaspc){
		number++;
		tronco=" (|) \n";
		pernas=" > | \n";
		parado=0;
		acerto="BOA";
		perder=0;
	}
	if(setasp!=setaspc){
		number--;
		acerto="errou";
		perder++;
	}

}
if(GetAsyncKeyState(VK_RIGHT)){
	setasp=">";
	if(setasp==setaspc){
		number++;
		tronco=" (|( \n";
		pernas=" | ) \n";
		parado=0;
		acerto="NICE!";
		perder=0;
		}
    if(setasp!=setaspc){
		number--;
		acerto="errou";
		perder++;
	}
}
if(GetAsyncKeyState(VK_UP)){
	setasp="^";
	if(setasp==setaspc){
		number++;
		tronco=" (|) \n";
		pernas=" | < \n";
		parado=0;
		acerto="BRABO!";
		perder=0;
	}
    if(setasp!=setaspc){
		number--;
		acerto="errou";
		perder++;
	}
}
if(GetAsyncKeyState(VK_LEFT)){
	setasp="<";
	if(setasp==setaspc){
		number++;
		tronco=" )|) \n";
		pernas=" ( | \n";
		parado=0;
		acerto="BOAA!";
		perder=0;
	}
	if(setasp!=setaspc){
		number--;
		acerto="errou";
		perder++;
	}
}
if(parado==1){
	tronco=" (|) \n";
	pernas=" | | \n";
	perder++;
}
if(number<-10){
	cabeca="|:_:|\n";
}
if(number<0){
	cabeca="|-_-|\n";
}
if(number>5){
	cabeca="|o_o|\n";
}
if(number>20){
	cabeca="|o_O|\n";
}
if(number>35){
    cabeca="|O_O|\n";
}
if(number>50){
    cabeca="|O.O|\n";
}
if(number>70){
	cabeca="|OcO|\n";
}
if(number>80){
	cabeca="|OuO|\n";
}
if(number>100){
	cabeca="|OUO|\n";
}
if(number>110){
	maior110=1;
	cabeca="|*U*|\n";
}
if(number>200){
	maior110=2;
}
if(perder>=20){
	goto perder;
}
}
perder:
system("CLS");
cout<<"Acabou o tempo!\nSua pontuacao foi: "<<number<<endl;
cout<<"\n\t\t\t\t\t\t"<<cabeca<<"\t\t\t\t\t\t"<<" <|> \n"<<"\t\t\t\t\t\t"<<" | | \n'0' para voltar ao menu\n";
while(true){
    if(GetAsyncKeyState(0x30)){
    	goto comeco;
	}	
}
}

//LINK PARA OS CODIGUIN.        
//https://docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes
