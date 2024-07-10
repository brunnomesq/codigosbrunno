// fazer algoritmo de batalha naval ; Dados: Submarino []; Destroyer [][]; hydroaviao []  ; cruzado[][][][]; encouraçado [][][][][];
//                                                                                  [] []
//metas: 1- fazer batalha 1 vs 1 (concluido);
//2- fazer batalha contra comp (concluido);
//3= fazer o usuario conseguir retornar e mudar aonde escolheu (concluido);
//4- fazer o usuario escolher o numero de tentativas;
//5- fazer o usuario poder escolher o tamanho da matriz;
//
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
int main()
{
unsigned seed = time(0);
srand(seed);
int play;
cout<<  "     |>       ";
cout<<"\n_____|_______";
cout<<"\n            /";
cout<<"\n___________/";
Sleep(100);
system("CLS");
Sleep(100);
cout<<  "      |>       ";
cout<<"\n______|_______";
cout<<"\n             /";
cout<<"\n____________/";
Sleep(100);
system("CLS");
Sleep(100);
cout<<  "       |>       ";
cout<<"\n_______|_______";
cout<<"\n              /";
cout<<"\n<____________/";
Sleep(100);
system("CLS");
Sleep(100);
cout<<  "        |>       ";
cout<<"\n _______|_______";
cout<<"\n<              /";
cout<<"\n <____________/";
Sleep(100);
system("CLS");
Sleep(100);
cout<<  "         |>       ";
cout<<"\n  _______|_______";
cout<<"\n <              /";
cout<<"\n  <____________/";
Sleep(100);
system("CLS");
Sleep(100);
cout<<  "          |>       ";
cout<<"\n   _______|_______";
cout<<"\n  <              /";
cout<<"\n   <____________/";
Sleep(100);
system("CLS");
Sleep(100);
cout<<  "           |>       ";
cout<<"\n    _______|_______";
cout<<"\nL  <              /";
cout<<"\n    <____________/";
Sleep(100);
system("CLS");
Sleep(100);
cout<<  "            |>       ";
cout<<"\n     _______|_______";
cout<<"\nAL  <              /";
cout<<"\n     <____________/";
Sleep(100);
system("CLS");
Sleep(100);
cout<<  "             |>       ";
cout<<"\n      _______|_______";
cout<<"\nVAL  <              /";
cout<<"\n      <____________/";
Sleep(100);
system("CLS");
Sleep(100);
cout<<  "              |>       ";
cout<<"\n       _______|_______";
cout<<"\nAVAL  <              /";
cout<<"\n       <____________/";
Sleep(100);
system("CLS");
Sleep(100);
cout<<  "               |>       ";
cout<<"\n        _______|_______";
cout<<"\nNAVAL  <              /";
cout<<"\n        <____________/";
Sleep(100);
system("CLS");
Sleep(100);
cout<<  "                |>       ";
cout<<"\n         _______|_______";
cout<<"\n NAVAL  <              /";
cout<<"\n         <____________/";
Sleep(100);
system("CLS");
Sleep(100);
cout<<  "                 |>       ";
cout<<"\n          _______|_______";
cout<<"\nA NAVAL  <              /";
cout<<"\n          <____________/";
Sleep(100);
system("CLS");
Sleep(100);
cout<<  "                  |>       ";
cout<<"\n           _______|_______";
cout<<"\nHA NAVAL  <              /";
cout<<"\n           <____________/";
Sleep(100);
system("CLS");
Sleep(100);
cout<<  "                   |>       ";
cout<<"\n            _______|_______";
cout<<"\nLHA NAVAL  <              /";
cout<<"\n            <____________/";
Sleep(100);
system("CLS");
Sleep(100);
cout<<  "                    |>       ";
cout<<"\n             _______|_______";
cout<<"\nALHA NAVAL  <              /";
cout<<"\n             <____________/";
Sleep(100);
system("CLS");
Sleep(100);
cout<<  "                     |>       ";
cout<<"\n              _______|_______";
cout<<"\nTALHA NAVAL  <              /";
cout<<"\n              <____________/";
Sleep(100);
system("CLS");
Sleep(100);
cout<<  "                      |>       ";
cout<<"\n               _______|_______";
cout<<"\nATALHA NAVAL  <              /";
cout<<"\n               <____________/";
Sleep(100);
system("CLS");
Sleep(100);
cout<<  "                       |>       ";
cout<<"\n                _______|_______";
cout<<"\nBATALHA NAVAL  <              /";
cout<<"\n                <____________/";
Sleep(100);
system("CLS");
Sleep(100);
cout<<  "                        |>       ";
cout<<"\n                 _______|_______";
cout<<"\n BATALHA NAVAL  <              /";
cout<<"\n                 <____________/";
cout<<"\n________________________________________________________________________________"<<"\nPressione 1 para iniciar: ";
cin>>play;
while(play!=1){
	cin>>play;
}
if(play==1){
int seletor,modo,config,fim;
int ml,mc;
int ntentativas;
seletor:
ntentativas=96;
modo=1;
seletor=0;
ml=14;
mc=14;
while(seletor==0){
cout<<"1- JOGAR BATALHA NAVAL\n"; //inicia o jogo
cout<<"2- Escolher Modo \n"; //modo padrao, modo bot
cout<<"3- Escolher Configuracoes do jogo \n"; //tamanho da matriz, numero de tentativas.
cout<<"4- Regras do Jogo \n";
cout<<"5- Creditos \n";
cin>>seletor;
while(seletor<0||seletor>5){
	cin>>seletor;
}
if(seletor==2){
	cout<<"Escolha o modo de jogo: ";
	cout<<"\n('0' para retornar ao menu)";
	cout<<"\n(1)MODO PADRAO: Um jogador escolhe as posicoes do navio e o outro tenta adivinhar onde estao e ganhar o jogo";
	cout<<"\n(2)MODO BOT (alpha): O robo escolhe as posicoes do navio e o outro jogador tenta adivinhar onde estao e ganhar o jogo\n";
	cin>>modo;
    if(modo==0){
    	modo=1;
    	seletor=0;
	}
	while(modo<0||modo>2){
		cin>>modo;
	}
	seletor=0;
}
if(seletor==4){
	cout<<"\t\tREGRAS DO JOGO\n";
	cout<<"1- O objetivo do jogo eh descobrir aonde se encontram os 5 navios escondidos dentro do mar (matriz do jogo), em que sao posicionados no inicio do jogo.\n";
	cout<<"1.2- Caso escolha o modo de jogo padrao, dois jogadores se enfrentam, ou seja, um jogador escolhe a posicao dos navios, o outro jogador ";
	cout<<"tenta adivinhar onde eles estao.\n";
	cout<<"1.3- Porem, se for contra o computador, voce tera somente que adivinhar as posicoes do navio e tentar ganhar o jogo.\n";
	cout<<"2- Os navios do jogo sao\n Submarino [ ]; Destroyer [ ][ ]; Cruzado [ ][ ][ ][ ]; Encouracado [ ][ ][ ][ ][ ]; Hydroaviao [ ]\n    S\t\t    D\t\t      C\t\t\t     E\t\t\t\t  H\t [ ]   [ ];\n";
	cout<<"3- No menu do jogo, o jogador pode mudar o tamanho do mar e o numero de tentativas.\n";
	cout<<"4- Quando for escolher as pecas, pode retornar a anterior pra mudar a posicao, digitando '-1'\n\n";
	cout<<"'0' para retornar ao menu: ";
	cin>>seletor;
	while(seletor!=0){
		cin>>seletor;
	}
}
if(seletor==5){

	cout<<"'0' para retornar ao menu: ";
	cin>>seletor;
	while(seletor!=0){
		cin>>seletor;
	}
}
if(seletor==3){
	cout<<"O que deseja alterar:\n(1)-Numero de tentativas no final do jogo\n'0' para retornar ao menu: ";
	cin>>config;
	while(config<0||config>2){
		cin>>config;
	}
	if(config==0){
		seletor=0;
	}
	if(config==1){
		cout<<"Digite o numero de tentativas que deseja(Minimo 15,Maximo 195): ";
		cin>>ntentativas;
		while(ntentativas<15||ntentativas>195){
			cin>>ntentativas;
		}
		seletor=0;
	}
}
if(seletor==1){
ml=ml+1;
mc=mc+1;
int i,j; 
int sl=ml,sc=mc,dl1=ml,dc1=mc,dl2=ml,dc2=mc,cl1=ml,cc1=mc,cl2=ml,cc2=mc,cl3=ml,cc3=mc,cl4=ml,cc4=mc,el1=ml,ec1=mc,el2=ml,ec2=mc,el3=ml,ec3=mc,el4=ml,ec4=mc,el5=ml,ec5=mc,hl1=ml,hc1=mc,hl2=ml,hc2=mc,hl3=ml,hc3=mc;
int scont,dcont,ccont,econt,hcont,xcont;
int npecas;
int xl,xc;
int xho,vhl2[4],vhc2[4];      //hydroaviao 2 parte bot
int xho3,vhl3[4],vhc3[4];     //hydroaviao 3 parte bot
xcont=0;
scont=0;
dcont=0;
ccont=0;
econt=0;
hcont=0;
npecas=0;
string m[ml][mc];
int v[15];
char navio;
for(i=0;i<15;i++){
	for(j=0;j<15;j++){          
		m[i][j]="[ ]";
	}
}
if(modo==1){
modo:
cout<<"\nEscolha qual navio quer posicionar na batalha naval(Usando as iniciais de cada navio): \n";
cout<<"[OBS: Quando terminar e querer ir pra luta digite 'x', se quiser ir pro menu escreva 'f']\n";
cout<<"Submarino: [ ]; Destroyer: [ ][ ]; Cruzado: [ ][ ][ ][ ]; Encouracado: [ ][ ][ ][ ][ ]; Hydroaviao: [ ]\n    S\t\t    D\t\t      C\t\t\t     E\t\t\t\t  H\t [ ]   [ ];\n";
cin>> navio;
if(navio=='f'||navio=='F'){
	seletor=0;
	goto seletor;
}
while(navio=='x'&&scont==0&&dcont==0&&ccont==0&&econt==0&&hcont==0){
		cout<<"Coloque Pelomenos uma peca antes de jogar.\n";
		cout<<"\nEscolha qual navio quer posicionar ou reposicionar na batalha naval(Usando as iniciais de cada navio): \n";
        cout<<"Submarino: [ ]; Destroyer: [ ][ ]; Cruzado: [ ][ ][ ][ ]; Encouracado: [ ][ ][ ][ ][ ]; Hydroaviao: [ ]\n    S\t\t    D\t\t      C\t\t\t     E\t\t\t\t  H\t [ ]   [ ];\n";
        cin>> navio;
        if(navio=='f'||navio=='F'){
		    seletor=0;
		    goto seletor;
	    }
	}	
while(navio!='x'&&navio!='X'&&navio!='f'&&navio!='F'){
while(navio!='S'&&navio!='s'&&navio!='D'&&navio!='d'&&navio!='E'&&navio!='e'&&navio!='C'&&navio!='c'&&navio!='H'&&navio!='h'){
	cout<<"Navio incorreto. Use as INICIAIS!!\nSubmarino: []; destroyer: [][]; cruzado: [][][][]; encouracado: [][][][][]; hydroaviao: []\n\t\t\t\t\t\t\t\t\t\t      []  [];\n";
	cin>>navio;
	if(navio=='f'||navio=='F'){
		seletor=0;
		goto seletor;
	}
}
if(navio=='S'||navio=='s'){ //isso pra quando usuario querer voltar pro posicionamento do submarino, isso tambem vale pros outros navios.
	if(scont>0){
		m[sl][sc]="[ ]";
		cout<<"Voltando pro posicionamento do submarino...\nRe";
	}
	scont++;
	cout<<"posicione seu submarino nesse mar!";
	cout<<"\n   ";
    for(i=0;i<15;i++){  //tava 18 antes n sei pq
	    v[i]=i;
	        if(v[i]<10){
	            cout<<" "<<v[i]<<" ";
	}
	        else{
		        cout<<" "<<v[i];
	}
}
cout<<endl;
    for(i=0;i<15;i++){
	    if(v[i]<10){
		    cout<<v[i]<<"  ";
	}
	    else{
	        cout<<v[i]<<" ";
	}
	    for(j=0;j<15;j++){
		    cout<<m[i][j];
	}
	    cout<<endl;
}
cout<<"\nLinha: ";
cin>>sl;
if(sl==-1){
	goto modo;
}
cout<<"Coluna: ";
cin>>sc;
while(sl>14||sl<-1||sc>14||sc<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>sl;
	if(sl==-1){
	goto modo;
    }
	cout<<"Coluna: ";
	cin>>sc;
}
while(m[sl][sc]=="[s]"||m[sl][sc]=="[d]"||m[sl][sc]=="[e]"||m[sl][sc]=="[h]"||m[sl][sc]=="[c]"){
	cout<<"Essas areas ja foram preenchidas digite novamente\nLinha: ";
	cin>>sl;
	if(sl==-1){
	goto modo;
    }
	cout<<"Coluna: ";
	cin>>sc;
}
m[sl][sc]="[s]";     // 0 e 0 m[0][0]=="[s]";
cout<<"\n   ";
for(i=0;i<15;i++){
	v[i]=i;
	if(v[i]<10){
	    cout<<" "<<v[i]<<" ";
	}
	else{
		cout<<" "<<v[i];
	}
}
cout<<endl;
for(i=0;i<15;i++){
	if(v[i]<10){
		cout<<v[i]<<"  ";
	}
	else{
	cout<<v[i]<<" ";
	}
	for(j=0;j<15;j++){
		cout<<m[i][j];
	}
	cout<<endl;
}
}
dl1:
if(navio=='D'||navio=='d'){
	if(dcont>0){
		m[dl1][dc1]="[ ]";
		m[dl2][dc2]="[ ]";
		cout<<"Voltando pro posicionamento do destroyer...\nRe";
	}
	dcont++;
	cout<<"posicione seu destroyer nesse mar!";
	cout<<"\n   ";
    for(i=0;i<15;i++){
	    v[i]=i;
	        if(v[i]<10){
	            cout<<" "<<v[i]<<" ";
	}
	        else{
		        cout<<" "<<v[i];
	}
}
cout<<endl;
    for(i=0;i<15;i++){
	    if(v[i]<10){
		    cout<<v[i]<<"  ";
	}
	    else{
	        cout<<v[i]<<" ";
	}
	    for(j=0;j<15;j++){
		    cout<<m[i][j];
	}
	    cout<<endl;
}
cout<<"\nDigite a primeira parte do destroyer: ";
cout<<"\nLinha: ";
cin>>dl1;
if(dl1==-1){
	goto modo;
}
cout<<"Coluna: ";
cin>>dc1;
while(dl1>14||dl1<-1||dc1>14||dc1<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>dl1;
	if(dl1==-1){
	goto modo;
    }
	cout<<"Coluna: ";
	cin>>dc1;
}
while(m[dl1][dc1]=="[s]"||m[dl1][dc1]=="[d]"||m[dl1][dc1]=="[e]"||m[dl1][dc1]=="[h]"||m[dl1][dc1]=="[c]"){
	cout<<"Essas areas ja foram preenchidas digite novamente\nLinha: ";
	cin>>dl1;
	if(dl1==-1){
	goto modo;
    }
	cout<<"Coluna: ";
	cin>>dc1;
}
m[dl1][dc1]="[d]";
cout<<"\n   ";
for(i=0;i<15;i++){
	v[i]=i;
	if(v[i]<10){
	    cout<<" "<<v[i]<<" ";
	}
	else{
		cout<<" "<<v[i];
	}
}
cout<<endl;
for(i=0;i<15;i++){
	if(v[i]<10){
		cout<<v[i]<<"  ";
	}
	else{
	cout<<v[i]<<" ";
	}
	for(j=0;j<15;j++){
		cout<<m[i][j];
	}
	cout<<endl;
}
cout<<"\nDigite a segunda parte do destroyer";
cout<<"\nLinha: ";
cin>>dl2;
if(dl2==-1){
	m[dl1][dc1]="[ ]";
	goto dl1;
}
cout<<"Coluna: ";
cin>>dc2;
while(dl2>14||dl2<-1||dc2>14||dc2<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>dl2;
	if(dl2==-1){
	m[dl1][dc1]="[ ]";
	goto dl1;
    }
	cout<<"Coluna: ";
	cin>>dc2;
}
while(m[dl2][dc2]=="[s]"||m[dl2][dc2]=="[d]"||m[dl2][dc2]=="[e]"||m[dl2][dc2]=="[h]"||m[dl2][dc2]=="[c]"){
	cout<<"Essas areas ja foram preenchidas digite novamente\nLinha: ";
	cin>>dl2;
	if(dl2==-1){
	m[dl1][dc1]="[ ]";
	goto dl1;
    }
	cout<<"Coluna: ";
	cin>>dc2;
}
while(dl2!=dl1+1&&dl2!=dl1-1&&dc2!=dc1-1&&dc2!=dc1+1||dl2<=dl1-1&&dc2<=dc1-1||dl2>=dl1+1&&dc2<=dc1-1||dl2>=dl1+1&&dc2>=dc1+1||dl2<=dl1-1&&dc2>=dc1+1){
	cout<<"Areas incorretas! Digite novamente\nLinha: ";
	cin>>dl2;
	if(dl2==-1){
	m[dl1][dc1]="[ ]";
	goto dl1;
    }
	cout<<"Coluna: ";
	cin>>dc2;
}
while(dl2>14||dl2<-1||dc2>14||dc2<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>dl2;
	if(dl2==-1){
	m[dl1][dc1]="[ ]";
	goto dl1;
    }
	cout<<"Coluna: ";
	cin>>dc2;
}
while(m[dl2][dc2]=="[s]"||m[dl2][dc2]=="[d]"||m[dl2][dc2]=="[e]"||m[dl2][dc2]=="[h]"||m[dl2][dc2]=="[c]"){
	cout<<"Essas areas ja foram preenchidas digite novamente\nLinha: ";
	cin>>dl2;
	if(dl2==-1){
	m[dl1][dc1]="[ ]";
	goto dl1;
    }
	cout<<"Coluna: ";
	cin>>dc2;
}
m[dl2][dc2]="[d]";
cout<<"\n   ";
for(i=0;i<15;i++){
	v[i]=i;
	if(v[i]<10){
	    cout<<" "<<v[i]<<" ";
	}
	else{
		cout<<" "<<v[i];
	}
}
cout<<endl;
for(i=0;i<15;i++){
	if(v[i]<10){
		cout<<v[i]<<"  ";
	}
	else{
	cout<<v[i]<<" ";
	}
	for(j=0;j<15;j++){
		cout<<m[i][j];
	}
	cout<<endl;
	
}
}

if(navio=='C'||navio=='c'){
	if(ccont>0){
		m[cl1][cc1]="[ ]";
		m[cl2][cc2]="[ ]";
		m[cl3][cc3]="[ ]";
		m[cl4][cc4]="[ ]";
		cout<<"Voltando pro posicionamento do cruzado...\nRe";
	}
	ccont++;
	cl1:
	cout<<"posicione seu cruzado nesse mar!";
	cout<<"\n   ";
    for(i=0;i<15;i++){
	    v[i]=i;
	        if(v[i]<10){
	            cout<<" "<<v[i]<<" ";
	}
	        else{
		        cout<<" "<<v[i];
	}
}
cout<<endl;
    for(i=0;i<15;i++){
	    if(v[i]<10){
		    cout<<v[i]<<"  ";
	}
	    else{
	        cout<<v[i]<<" ";
	}
	    for(j=0;j<15;j++){
		    cout<<m[i][j];
	}
	    cout<<endl;
}
cout<<"\nDigite a primeira parte do cruzado: ";
cout<<"\nLinha: ";
cin>>cl1;
if(cl1==-1){
	goto modo;
}
cout<<"Coluna: ";
cin>>cc1;
while(cl1>14||cl1<-1||cc1>14||cc1<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>cl1;
	if(cl1==-1){
		goto modo;
	}
	cout<<"Coluna: ";
	cin>>cc1;
}
while(m[cl1][cc1]=="[s]"||m[cl1][cc1]=="[d]"||m[cl1][cc1]=="[e]"||m[cl1][cc1]=="[h]"||m[cl1][cc1]=="[c]"){
	cout<<"Essas areas ja foram preenchidas digite novamente\nLinha: ";
	cin>>cl1;
	if(cl1==-1){
		goto modo;
	}
	cout<<"Coluna: ";
	cin>>cc1;
}
m[cl1][cc1]="[c]";
cl2:
cout<<"\n   ";
for(i=0;i<15;i++){
	v[i]=i;
	if(v[i]<10){
	    cout<<" "<<v[i]<<" ";
	}
	else{
		cout<<" "<<v[i];
	}
}
cout<<endl;
for(i=0;i<15;i++){
	if(v[i]<10){
		cout<<v[i]<<"  ";
	}
	else{
	cout<<v[i]<<" ";
	}
	for(j=0;j<15;j++){
		cout<<m[i][j];
	}
	cout<<endl;
}
cout<<"\nDigite a segunda parte do cruzado";
cout<<"\nLinha: ";
cin>>cl2;
if(cl2==-1){
	m[cl1][cc1]="[ ]";
	goto cl1;
}
cout<<"Coluna: ";
cin>>cc2;
while(cl2>14||cl2<-1||cc2>14||cc2<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>cl2;
	if(cl2==-1){
	m[cl1][cc1]="[ ]";
	goto cl1;
    }
	cout<<"Coluna: ";
	cin>>cc2;
}
while(m[cl2][cc2]=="[s]"||m[cl2][cc2]=="[d]"||m[cl2][cc2]=="[e]"||m[cl2][cc2]=="[h]"||m[cl2][cc2]=="[c]"){
	cout<<"Essas areas ja foram preenchidas digite novamente\nLinha: ";
	cin>>cl2;
	if(cl2==-1){
	m[cl1][cc1]="[ ]";
	goto cl1;
    }
	cout<<"Coluna: ";
	cin>>cc2;
}

while(cl2!=cl1+1&&cl2!=cl1-1&&cc2!=cc1-1&&cc2!=cc1+1||cl2<=cl1-1&&cc2<=cc1-1||cl2>=cl1+1&&cc2<=cc1-1||cl2>=cl1+1&&cc2>=cc1+1||cl2<=cl1-1&&cc2>=cc1+1){
	cout<<"Areas incorretas! Digite novamente\nLinha: ";
	cin>>cl2;
	if(cl2==-1){
	m[cl1][cc1]="[ ]";
	goto cl1;
    }
	cout<<"Coluna: ";
	cin>>cc2;
}
while(cl2>14||cl2<-1||cc2>14||cc2<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>cl2;
	if(cl2==-1){
	m[cl1][cc1]="[ ]";
	goto cl1;
    }
	cout<<"Coluna: ";
	cin>>cc2;
}
while(m[cl2][cc2]=="[s]"||m[cl2][cc2]=="[d]"||m[cl2][cc2]=="[e]"||m[cl2][cc2]=="[h]"||m[cl2][cc2]=="[c]"){
	cout<<"Essas areas ja foram preenchidas digite novamente\nLinha: ";
	cin>>cl2;
	if(cl2==-1){
	m[cl1][cc1]="[ ]";
	goto cl1;
    }
	cout<<"Coluna: ";
	cin>>cc2;
}
m[cl2][cc2]="[c]";
cl3:
cout<<"\n   ";
for(i=0;i<15;i++){
	v[i]=i;
	if(v[i]<10){
	    cout<<" "<<v[i]<<" ";
	}
	else{
		cout<<" "<<v[i];
	}
}
cout<<endl;
for(i=0;i<15;i++){
	if(v[i]<10){
		cout<<v[i]<<"  ";
	}
	else{
	cout<<v[i]<<" ";
	}
	for(j=0;j<15;j++){
		cout<<m[i][j];
	}
	cout<<endl;
}
cout<<"\nDigite a terceira parte do cruzado";
cout<<"\nLinha: ";
cin>>cl3;
if(cl3==-1){
	m[cl2][cc2]="[ ]";
	goto cl2;
    }
cout<<"Coluna: ";
cin>>cc3;
while(cl3>14||cl3<-1||cc3>14||cc3<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>cl3;
	if(cl3==-1){
	m[cl2][cc2]="[ ]";
	goto cl2;
    }
	cout<<"Coluna: ";
	cin>>cc3;
}
while(m[cl3][cc3]=="[s]"||m[cl3][cc3]=="[d]"||m[cl3][cc3]=="[e]"||m[cl3][cc3]=="[h]"||m[cl3][cc3]=="[c]"){
	cout<<"Essas areas ja foram preenchidas, digite novamente\nLinha: ";
	cin>>cl3;
	if(cl3==-1){
	m[cl2][cc2]="[ ]";
	goto cl2;
    }
	cout<<"Coluna: ";
	cin>>cc3;
}
if(cl2==cl1+1||cl2==cl1-1){
while(cc3!=cc1&&cc3!=cc2||cl3!=cl2+1&&cl3!=cl2-1&&cl3!=cl1+1&&cl3!=cl1-1){
	cout<<"Areas incorretas! Digite novamente\nLinha: ";
	cin>>cl3;
	if(cl3==-1){
	m[cl2][cc2]="[ ]";
	goto cl2;
    }
	cout<<"Coluna: ";
	cin>>cc3;
}
}
if(cc2==cc1+1||cc2==cc1-1){
while(cl3!=cl1&&cl3!=cl2||cc3!=cc2+1&&cc3!=cc2-1&&cc3!=cc1+1&&cc3!=cc1-1){
	cout<<"Areas incorretas! Digite novamente\nLinha: ";
	cin>>cl3;
	if(cl3==-1){
	m[cl2][cc2]="[ ]";
	goto cl2;
    }
	cout<<"Coluna: ";
	cin>>cc3;
}
}
while(cl3>14||cl3<0||cc3>14||cc3<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>cl3;
	if(cl3==-1){
	m[cl2][cc2]="[ ]";
	goto cl2;
    }
	cout<<"Coluna: ";
	cin>>cc3;
}
while(m[cl3][cc3]=="[s]"||m[cl3][cc3]=="[d]"||m[cl3][cc3]=="[e]"||m[cl3][cc3]=="[h]"||m[cl3][cc3]=="[c]"){
	cout<<"Essas areas ja foram preenchidas, digite novamente\nLinha: ";
	cin>>cl3;
	if(cl3==-1){
	m[cl2][cc2]="[ ]";
	goto cl2;
    }
	cout<<"Coluna: ";
	cin>>cc3;
}
m[cl3][cc3]="[c]";
cout<<"\n   ";
for(i=0;i<15;i++){
	v[i]=i;
	if(v[i]<10){
	    cout<<" "<<v[i]<<" ";
	}
	else{
		cout<<" "<<v[i];
	}
}
cout<<endl;
for(i=0;i<15;i++){
	if(v[i]<10){
		cout<<v[i]<<"  ";
	}
	else{
	cout<<v[i]<<" ";
	}
	for(j=0;j<15;j++){
		cout<<m[i][j];
	}
	cout<<endl;
}


cout<<"\nDigite a quarta parte do cruzado";
cout<<"\nLinha: ";
cin>>cl4;
if(cl4==-1){
	m[cl3][cc3]="[ ]";
	goto cl3;
    }
cout<<"Coluna: ";
cin>>cc4;
while(cl4>14||cl4<0||cc4>14||cc4<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>cl4;
	if(cl4==-1){
	m[cl3][cc3]="[ ]";
	goto cl3;
    }
	cout<<"Coluna: ";
	cin>>cc4;
}
while(m[cl4][cc4]=="[s]"||m[cl4][cc4]=="[d]"||m[cl4][cc4]=="[e]"||m[cl4][cc4]=="[h]"||m[cl4][cc4]=="[c]"){
	cout<<"Essas areas ja foram preenchidas, digite novamente\nLinha: ";
	cin>>cl4;
	if(cl4==-1){
	m[cl3][cc3]="[ ]";
	goto cl3;
    }
	cout<<"Coluna: ";
	cin>>cc4;
}
if(cl2==cl1+1||cl2==cl1-1){
while(cc4!=cc1&&cc4!=cc2&&cc4!=cc3||cl4!=cl2+1&&cl4!=cl2-1&&cl4!=cl1+1&&cl4!=cl1-1&&cl4!=cl3-1&&cl4!=cl3+1){
	cout<<"Areas incorretas! Digite novamente\nLinha: ";
	cin>>cl4;
	if(cl4==-1){
	m[cl3][cc3]="[ ]";
	goto cl3;
    }
	cout<<"Coluna: ";
	cin>>cc4;
}
}
if(cc2==cc1+1||cc2==cc1-1){
while(cl4!=cl1&&cl4!=cl2&&cl4!=cl3||cc4!=cc2+1&&cc4!=cc2-1&&cc4!=cc1+1&&cc4!=cc1-1&&cc4!=cc3+1&&cc4!=cc3-1){
	cout<<"Areas incorretas! Digite novamente\nLinha: ";
	cin>>cl4;
	if(cl4==-1){
	m[cl3][cc3]="[ ]";
	goto cl3;
    }
	cout<<"Coluna: ";
	cin>>cc4;
}
}
while(cl4>14||cl4<0||cc4>14||cc4<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>cl4;
	if(cl4==-1){
	m[cl3][cc3]="[ ]";
	goto cl3;
    }
	cout<<"Coluna: ";
	cin>>cc4;
}
while(m[cl4][cc4]=="[s]"||m[cl4][cc4]=="[d]"||m[cl4][cc4]=="[e]"||m[cl4][cc4]=="[h]"||m[cl4][cc4]=="[c]"){
	cout<<"Essas areas ja foram preenchidas, digite novamente\nLinha: ";
	cin>>cl4;
	if(cl4==-1){
	m[cl3][cc3]="[ ]";
	goto cl3;
    }
	cout<<"Coluna: ";
	cin>>cc4;
}
m[cl4][cc4]="[c]";
cout<<"\n   ";
for(i=0;i<15;i++){
	v[i]=i;
	if(v[i]<10){
	    cout<<" "<<v[i]<<" ";
	}
	else{
		cout<<" "<<v[i];
	}
}
cout<<endl;
for(i=0;i<15;i++){
	if(v[i]<10){
		cout<<v[i]<<"  ";
	}
	else{
	cout<<v[i]<<" ";
	}
	for(j=0;j<15;j++){
		cout<<m[i][j];
	}
	cout<<endl;
}


}
if(navio=='E'||navio=='e'){
	if(econt>0){
		m[el1][ec1]="[ ]";
		m[el2][ec2]="[ ]";
		m[el3][ec3]="[ ]";
		m[el4][ec4]="[ ]";
		m[el5][ec5]="[ ]";
		cout<<"Voltando pro posicionamento do encouracado...\nRe";
	}
	econt++;
	el1:
	cout<<"posicione seu encouracado nesse mar!";
	cout<<"\n   ";
    for(i=0;i<15;i++){
	    v[i]=i;
	        if(v[i]<10){
	            cout<<" "<<v[i]<<" ";
	}
	        else{
		        cout<<" "<<v[i];
	}
}
cout<<endl;
    for(i=0;i<15;i++){
	    if(v[i]<10){
		    cout<<v[i]<<"  ";
	}
	    else{
	        cout<<v[i]<<" ";
	}
	    for(j=0;j<15;j++){
		    cout<<m[i][j];
	}
	    cout<<endl;
}
cout<<"\nDigite a primeira parte do encouracado: ";
cout<<"\nLinha: ";
cin>>el1;
if(el1==-1){
	goto modo;
}
cout<<"Coluna: ";
cin>>ec1;
while(el1>14||el1<-1||ec1>14||ec1<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>el1;
	if(el1==-1){
		goto modo;
	}
	cout<<"Coluna: ";
	cin>>ec1;
}
while(m[el1][ec1]=="[s]"||m[el1][ec1]=="[d]"||m[el1][ec1]=="[e]"||m[el1][ec1]=="[h]"||m[el1][ec1]=="[c]"){
	cout<<"Essas areas ja foram preenchidas digite novamente\nLinha: ";
	cin>>el1;
	if(el1==-1){
		goto modo;
	}
	cout<<"Coluna: ";
	cin>>ec1;
}
m[el1][ec1]="[e]";
el2:
cout<<"\n   ";
for(i=0;i<15;i++){
	v[i]=i;
	if(v[i]<10){
	    cout<<" "<<v[i]<<" ";
	}
	else{
		cout<<" "<<v[i];
	}
}
cout<<endl;
for(i=0;i<15;i++){
	if(v[i]<10){
		cout<<v[i]<<"  ";
	}
	else{
	cout<<v[i]<<" ";
	}
	for(j=0;j<15;j++){
		cout<<m[i][j];
	}
	cout<<endl;
}
cout<<"\nDigite a segunda parte do encouracado";
cout<<"\nLinha: ";
cin>>el2;
if(el2==-1){
	m[el1][ec1]="[ ]";
	goto el1;
}
cout<<"Coluna: ";
cin>>ec2;
while(el2>14||el2<-1||ec2>14||ec2<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>el2;
	if(el2==-1){
	m[el1][ec1]="[ ]";
	goto el1;
    }
	cout<<"Coluna: ";
	cin>>ec2;
}
while(m[el2][ec2]=="[s]"||m[el2][ec2]=="[d]"||m[el2][ec2]=="[e]"||m[el2][ec2]=="[h]"||m[el2][ec2]=="[c]"){
	cout<<"Essas areas ja foram preenchidas digite novamente\nLinha: ";
	cin>>el2;
	if(el2==-1){
	m[el1][ec1]="[ ]";
	goto el1;
    }
	cout<<"Coluna: ";
	cin>>ec2;
}

while(el2!=el1+1&&el2!=el1-1&&ec2!=ec1-1&&ec2!=ec1+1||el2<=el1-1&&ec2<=ec1-1||el2>=el1+1&&ec2<=ec1-1||el2>=el1+1&&ec2>=ec1+1||el2<=el1-1&&ec2>=ec1+1){
	cout<<"Areas incorretas! Digite novamente\nLinha: ";
	cin>>el2;
	if(el2==-1){
	m[el1][ec1]="[ ]";
	goto el1;
    }
	cout<<"Coluna: ";
	cin>>ec2;
}
while(el2>14||el2<-1||ec2>14||ec2<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>el2;
	if(el2==-1){
	m[el1][ec1]="[ ]";
	goto el1;
    }
	cout<<"Coluna: ";
	cin>>ec2;
}
while(m[el2][ec2]=="[s]"||m[el2][ec2]=="[d]"||m[el2][ec2]=="[e]"||m[el2][ec2]=="[h]"||m[el2][ec2]=="[c]"){
	cout<<"Essas areas ja foram preenchidas digite novamente\nLinha: ";
	cin>>el2;
	if(el2==-1){
	m[el1][ec1]="[ ]";
	goto el1;
    }
	cout<<"Coluna: ";
	cin>>ec2;
}
m[el2][ec2]="[e]";
el3:
cout<<"\n   ";
for(i=0;i<15;i++){
	v[i]=i;
	if(v[i]<10){
	    cout<<" "<<v[i]<<" ";
	}
	else{
		cout<<" "<<v[i];
	}
}
cout<<endl;
for(i=0;i<15;i++){
	if(v[i]<10){
		cout<<v[i]<<"  ";
	}
	else{
	cout<<v[i]<<" ";
	}
	for(j=0;j<15;j++){
		cout<<m[i][j];
	}
	cout<<endl;
}
cout<<"\nDigite a terceira parte do encouracado";
cout<<"\nLinha: ";
cin>>el3;
if(el3==-1){
	m[el2][ec2]="[ ]";
	goto el2;
    }
cout<<"Coluna: ";
cin>>ec3;
while(el3>14||el3<-1||ec3>14||ec3<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>el3;
	if(el3==-1){
	m[el2][ec2]="[ ]";
	goto el2;
    }
	cout<<"Coluna: ";
	cin>>ec3;
}
while(m[el3][ec3]=="[s]"||m[el3][ec3]=="[d]"||m[el3][ec3]=="[e]"||m[el3][ec3]=="[h]"||m[el3][ec3]=="[c]"){
	cout<<"Essas areas ja foram preenchidas, digite novamente\nLinha: ";
	cin>>el3;
	if(el3==-1){
	m[el2][ec2]="[ ]";
	goto el2;
    }
	cout<<"Coluna: ";
	cin>>ec3;
}
if(el2==el1+1||el2==el1-1){
while(ec3!=ec1&&ec3!=ec2||el3!=el2+1&&el3!=el2-1&&el3!=el1+1&&el3!=el1-1){
	cout<<"Areas incorretas! Digite novamente\nLinha: ";
	cin>>el3;
	if(el3==-1){
	m[el2][ec2]="[ ]";
	goto el2;
    }
	cout<<"Coluna: ";
	cin>>ec3;
}
}
if(ec2==ec1+1||ec2==ec1-1){
while(el3!=el1&&el3!=el2||ec3!=ec2+1&&ec3!=ec2-1&&ec3!=ec1+1&&ec3!=ec1-1){
	cout<<"Areas incorretas! Digite novamente\nLinha: ";
	cin>>el3;
	if(el3==-1){
	m[el2][ec2]="[ ]";
	goto el2;
    }
	cout<<"Coluna: ";
	cin>>ec3;
}
}
while(el3>14||el3<-1||ec3>14||ec3<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>el3;
	if(el3==-1){
	m[el2][ec2]="[ ]";
	goto el2;
    }
	cout<<"Coluna: ";
	cin>>ec3;
}
while(m[el3][ec3]=="[s]"||m[el3][ec3]=="[d]"||m[el3][ec3]=="[e]"||m[el3][ec3]=="[h]"||m[el3][ec3]=="[c]"){
	cout<<"Essas areas ja foram preenchidas, digite novamente\nLinha: ";
	cin>>el3;
	if(el3==-1){
	m[el2][ec2]="[ ]";
	goto el2;
    }
	cout<<"Coluna: ";
	cin>>ec3;
}
m[el3][ec3]="[e]";
el4:
cout<<"\n   ";
for(i=0;i<15;i++){
	v[i]=i;
	if(v[i]<10){
	    cout<<" "<<v[i]<<" ";
	}
	else{
		cout<<" "<<v[i];
	}
}
cout<<endl;
for(i=0;i<15;i++){
	if(v[i]<10){
		cout<<v[i]<<"  ";
	}
	else{
	cout<<v[i]<<" ";
	}
	for(j=0;j<15;j++){
		cout<<m[i][j];
	}
	cout<<endl;
}


cout<<"\nDigite a quarta parte do encouracado";
cout<<"\nLinha: ";
cin>>el4;
if(el4==-1){
	m[el3][ec3]="[ ]";
	goto el3;
    }
cout<<"Coluna: ";
cin>>ec4;
while(el4>14||el4<-1||ec4>14||ec4<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>el4;
	if(el4==-1){
	m[el3][ec3]="[ ]";
	goto el3;
    }
	cout<<"Coluna: ";
	cin>>ec4;
}
while(m[el4][ec4]=="[s]"||m[el4][ec4]=="[d]"||m[el4][ec4]=="[e]"||m[el4][ec4]=="[h]"||m[el4][ec4]=="[c]"){
	cout<<"Essas areas ja foram preenchidas, digite novamente\nLinha: ";
	cin>>el4;
	if(el4==-1){
	m[el3][ec3]="[ ]";
	goto el3;
    }
	cout<<"Coluna: ";
	cin>>ec4;
}
if(el2==el1+1||el2==el1-1){
while(ec4!=ec1&&ec4!=ec2&&ec4!=ec3||el4!=el3+1&&el4!=el3-1&&el4!=el2+1&&el4!=el2-1&&el4!=el1+1&&el4!=el1-1){
	cout<<"Areas incorretas! Digite novamente\nLinha: ";
	cin>>el4;
	if(el4==-1){
	m[el3][ec3]="[ ]";
	goto el3;
    }
	cout<<"Coluna: ";
	cin>>ec4;
}
}
if(ec2==ec1+1||ec2==ec1-1){
while(el4!=el1&&el4!=el2&&el4!=el3||ec4!=ec2+1&&ec4!=ec2-1&&ec4!=ec1+1&&ec4!=ec1-1&&ec4!=ec3-1&&ec4!=ec3+1){
	cout<<"Areas incorretas! Digite novamente\nLinha: ";
	cin>>el4;
	if(el4==-1){
	m[el3][ec3]="[ ]";
	goto el3;
    }
	cout<<"Coluna: ";
	cin>>ec4;
}
}
while(el4>14||el4<-1||ec4>14||ec4<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>el4;
	if(el4==-1){
	m[el3][ec3]="[ ]";
	goto el3;
    }
	cout<<"Coluna: ";
	cin>>ec4;
}
while(m[el4][ec4]=="[s]"||m[el4][ec4]=="[d]"||m[el4][ec4]=="[e]"||m[el4][ec4]=="[h]"||m[el4][ec4]=="[c]"){
	cout<<"Essas areas ja foram preenchidas, digite novamente\nLinha: ";
	cin>>el4;
	if(el4==-1){
	m[el3][ec3]="[ ]";
	goto el3;
    }
	cout<<"Coluna: ";
	cin>>ec4;
}
m[el4][ec4]="[e]";
cout<<"\n   ";
for(i=0;i<15;i++){
	v[i]=i;
	if(v[i]<10){
	    cout<<" "<<v[i]<<" ";
	}
	else{
		cout<<" "<<v[i];
	}
}
cout<<endl;
for(i=0;i<15;i++){
	if(v[i]<10){
		cout<<v[i]<<"  ";
	}
	else{
	cout<<v[i]<<" ";
	}
	for(j=0;j<15;j++){
		cout<<m[i][j];
	}
	cout<<endl;
}
cout<<"\nDigite a quinta parte do encouracado";
cout<<"\nLinha: ";
cin>>el5;
if(el5==-1){
	m[el4][ec4]="[ ]";
	goto el4;
    }
cout<<"Coluna: ";
cin>>ec5;
while(el5>14||el5<-1||ec5>14||ec5<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>el5;
	if(el5==-1){
	m[el4][ec4]="[ ]";
	goto el4;
    }
	cout<<"Coluna: ";
	cin>>ec5;
}
while(m[el5][ec5]=="[s]"||m[el5][ec5]=="[d]"||m[el5][ec5]=="[e]"||m[el5][ec5]=="[h]"||m[el5][ec5]=="[c]"){
	cout<<"Essas areas ja foram preenchidas, digite novamente\nLinha: ";
	cin>>el5;
	if(el5==-1){
	m[el4][ec4]="[ ]";
	goto el4;
    }
	cout<<"Coluna: ";
	cin>>ec5;
}
if(el2==el1+1||el2==el1-1){
while(ec5!=ec1&&ec5!=ec2&&ec5!=ec3&&ec5!=ec4||el5!=el3+1&&el5!=el3-1&&el5!=el4+1&&el5!=el4-1&&el5!=el2-1&&el5!=el2+1&&el5!=el1+1&&el5!=el1-1){
	cout<<"Areas incorretas! Digite novamente\nLinha: ";
	cin>>el5;
	if(el5==-1){
	m[el4][ec4]="[ ]";
	goto el4;
    }
	cout<<"Coluna: ";
	cin>>ec5;
}
}
if(ec2==ec1+1||ec2==ec1-1){
while(el5!=el1&&el5!=el2&&el5!=el3&&el5!=el4||ec5!=ec3+1&&ec5!=ec3-1&&ec5!=ec4+1&&ec5!=ec4-1&&ec5!=ec2-1&&ec5!=ec2+1&&ec5!=ec1-1&&ec5!=ec1+1){
	cout<<"Areas incorretas! Digite novamente\nLinha: ";
	cin>>el5;
	if(el5==-1){
	m[el4][ec4]="[ ]";
	goto el4;
    }
	cout<<"Coluna: ";
	cin>>ec5;
}
}
while(el5>14||el5<-1||ec5>14||ec5<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>el5;
	if(el5==-1){
	m[el4][ec4]="[ ]";
	goto el4;
    }
	cout<<"Coluna: ";
	cin>>ec5;
}
while(m[el5][ec5]=="[s]"||m[el5][ec5]=="[d]"||m[el5][ec5]=="[e]"||m[el5][ec5]=="[h]"||m[el5][ec5]=="[c]"){
	cout<<"Essas areas ja foram preenchidas, digite novamente\nLinha: ";
	cin>>el5;
	if(el5==-1){
	m[el4][ec4]="[ ]";
	goto el4;
    }
	cout<<"Coluna: ";
	cin>>ec5;
}
m[el5][ec5]="[e]";
cout<<"\n   ";
for(i=0;i<15;i++){
	v[i]=i;
	if(v[i]<10){
	    cout<<" "<<v[i]<<" ";
	}
	else{
		cout<<" "<<v[i];
	}
}
cout<<endl;
for(i=0;i<15;i++){
	if(v[i]<10){
		cout<<v[i]<<"  ";
	}
	else{
	cout<<v[i]<<" ";
	}
	for(j=0;j<15;j++){
		cout<<m[i][j];
	}
	cout<<endl;
}

}
if(navio=='H'||navio=='h'){
	if(hcont>0){
		m[hl1][hc1]="[ ]";
		m[hl2][hc2]="[ ]";
		m[hl3][hc3]="[ ]";
		cout<<"Voltando pro posicionamento do hydroaviao...\nRe";
	}
	hcont++;
	hl1:
	cout<<"posicione seu hydroaviao nesse mar!";
	cout<<"\n   ";
    for(i=0;i<15;i++){
	    v[i]=i;
	        if(v[i]<10){
	            cout<<" "<<v[i]<<" ";
	}
	        else{
		        cout<<" "<<v[i];
	}
}
cout<<endl;
    for(i=0;i<15;i++){
	    if(v[i]<10){
		    cout<<v[i]<<"  ";
	}
	    else{
	        cout<<v[i]<<" ";
	}
	    for(j=0;j<15;j++){
		    cout<<m[i][j];
	}
	    cout<<endl;
}
cout<<"\nDigite a primeira parte do hydroaviao: ";
cout<<"\nLinha: ";
cin>>hl1;
if(hl1==-1){
	goto modo;
    }
cout<<"Coluna: ";
cin>>hc1;
while(hl1>14||hl1<-1||hc1>14||hc1<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>hl1;
	if(hl1==-1){
	goto modo;
    }
	cout<<"Coluna: ";
	cin>>hc1;
}
while(m[hl1][hc1]=="[s]"||m[hl1][hc1]=="[d]"||m[hl1][hc1]=="[e]"||m[hl1][hc1]=="[h]"||m[hl1][hc1]=="[c]"){
	cout<<"Essas areas ja foram preenchidas digite novamente\nLinha: ";
	cin>>hl1;
	if(hl1==-1){
	goto modo;
    }
	cout<<"Coluna: ";
	cin>>hc1;
}
m[hl1][hc1]="[h]";
hl2:
cout<<"\n   ";
for(i=0;i<15;i++){
	v[i]=i;
	if(v[i]<10){
	    cout<<" "<<v[i]<<" ";
	}
	else{
		cout<<" "<<v[i];
	}
}
cout<<endl;
for(i=0;i<15;i++){
	if(v[i]<10){
		cout<<v[i]<<"  ";
	}
	else{
	cout<<v[i]<<" ";
	}
	for(j=0;j<15;j++){
		cout<<m[i][j];
	}
	cout<<endl;
}
cout<<"\nDigite a segunda parte do hydroaviao";
cout<<"\nLinha: ";
cin>>hl2;
if(hl2==-1){
	m[hl1][hc1]="[ ]";
	goto hl1;
    }
cout<<"Coluna: ";
cin>>hc2;
while(hl2>14||hl2<-1||hc2>14||hc2<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>hl2;
	if(hl2==-1){
	m[hl1][hc1]="[ ]";
	goto hl1;
    }
	cout<<"Coluna: ";
	cin>>hc2;
}
while(m[hl2][hc2]=="[s]"||m[hl2][hc2]=="[d]"||m[hl2][hc2]=="[e]"||m[hl2][hc2]=="[h]"||m[hl2][hc2]=="[c]"){
	cout<<"Essas areas ja foram preenchidas digite novamente\nLinha: ";
	cin>>hl2;
	if(hl2==-1){
	m[hl1][hc1]="[ ]";
	goto hl1;
    }
	cout<<"Coluna: ";
	cin>>hc2;
}

while(hl2==hl1||hc2==hc1){
	cout<<"Areas incorretas! Digite novamente\nLinha: ";
	cin>>hl2;
	if(hl2==-1){
	m[hl1][hc1]="[ ]";
	goto hl1;
    }
	cout<<"Coluna: ";
	cin>>hc2;

}
if(hl2<hl1-1||hc2<hc1-1||hl2>hl1+1||hc2>hc1+1||hl2!=hl1-1&&hc2!=hc1-1&&hl2!=hl1+1&&hc2!=hc1+1){
while(hl2!=hl1-1&&hc2!=hc1-1&&hl2!=hl1+1&&hc2!=hc1+1){
	cout<<"Areas incorretas! Digite novamente\nLinha: ";
	cin>>hl2;
	if(hl2==-1){
	m[hl1][hc1]="[ ]";
	goto hl1;
    }
	cout<<"Coluna: ";
	cin>>hc2;
}
while(hl2<hl1-1||hc2<hc1-1||hl2>hl1+1||hc2>hc1+1){
	cout<<"Areas incorretas! Digite novamente\nLinha: ";
	cin>>hl2;
	if(hl2==-1){
	m[hl1][hc1]="[ ]";
	goto hl1;
    }
	cout<<"Coluna: ";
	cin>>hc2;
}
}
while(hl2>14||hl2<-1||hc2>14||hc2<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>hl2;
	if(hl2==-1){
	m[hl1][hc1]="[ ]";
	goto hl1;
    }
	cout<<"Coluna: ";
	cin>>hc2;
}
while(m[hl2][hc2]=="[s]"||m[hl2][hc2]=="[d]"||m[hl2][hc2]=="[e]"||m[hl2][hc2]=="[h]"||m[hl2][hc2]=="[c]"){
	cout<<"Essas areas ja foram preenchidas digite novamente\nLinha: ";
	cin>>hl2;
	if(hl2==-1){
	m[hl1][hc1]="[ ]";
	goto hl1;
    }
	cout<<"Coluna: ";
	cin>>hc2;
}
m[hl2][hc2]="[h]";
cout<<"\n   ";
for(i=0;i<15;i++){
	v[i]=i;
	if(v[i]<10){
	    cout<<" "<<v[i]<<" ";
	}
	else{
		cout<<" "<<v[i];
	}
}
cout<<endl;
for(i=0;i<15;i++){
	if(v[i]<10){
		cout<<v[i]<<"  ";
	}
	else{
	cout<<v[i]<<" ";
	}
	for(j=0;j<15;j++){
		cout<<m[i][j];
	}
	cout<<endl;
}
cout<<"\nDigite a terceira parte do hydroaviao";
cout<<"\nLinha: ";
cin>>hl3;
if(hl3==-1){
	m[hl2][hc2]="[ ]";
	goto hl2;
    }
cout<<"Coluna: ";
cin>>hc3;
while(hl3>14||hl3<-1||hc3>14||hc3<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>hl3;
	if(hl3==-1){
	m[hl2][hc2]="[ ]";
	goto hl2;
    }
	cout<<"Coluna: ";
	cin>>hc3;
}
while(m[hl3][hc3]=="[s]"||m[hl3][hc3]=="[d]"||m[hl3][hc3]=="[e]"||m[hl3][hc3]=="[h]"||m[hl3][hc3]=="[c]"){
	cout<<"Essas areas ja foram preenchidas digite novamente\nLinha: ";
	cin>>hl3;
	if(hl3==-1){
	m[hl2][hc2]="[ ]";
	goto hl2;
    }
	cout<<"Coluna: ";
	cin>>hc3;
}
if(hl2==hl1-1&&hc2==hc1-1){         //ex 7 7   dps 6 6 -> tem que ser somente 5 7; 6 8;7 5; 8 6;
	while(hl3!=hl1-1&&hc3!=hc1+1&&hl3!=hl1+1&&hc3!=hc1-1&&hl3!=hl2+1&&hc3!=hc2-1&&hl3!=hl2-1&&hc3!=hc2+1){
 	    cout<<"Areas Incorretas! Digite novamente.\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}
	while(hl3==hl2-1&&hc3==hc2-1||hl3==hl1+1&&hc3==hc1+1){
		cout<<"Areas incorretas! Digite novamente\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}

	while(hl3==hl2&&hc3!=hc2+2){
		cout<<"Areas incorretas! Digite novamente\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}
	
	
	while(hl3==hl1&&hc3!=hc1-2){
		cout<<"Areas incorretas! Digite novamente\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}
	

	while(hc3==hc2&&hl3!=hl2+2){
		cout<<"Areas incorretas! Digite novamente\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}
	

	while(hc3==hc1&&hl3!=hl1-2){
		cout<<"Areas incorretas! Digite novamente\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}
       
	}



if(hl2==hl1-1&&hc2==hc1+1){               // que seja possivel so as diagonais corretas..
	while(hl3!=hl1-1&&hc3!=hc1-1&&hl3!=hl1+1&&hc3!=hc1+1&&hl3!=hl2-1&&hc3!=hl2-1&&hl3!=hl2+1&&hc3!=hc2+1){
		cout<<"Areas incorretas! Digite novamente\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}
	while(hl3==hl1+1&&hc3==hc1-1||hl3==hl2-1&&hc3==hc2+1){            //evitar as diagonais
		cout<<"Areas incorretas! Digite novamente\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}

	while(hl3==hl2&&hc3!=hc2-2){
		cout<<"Areas incorretas! Digite novamente\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}


	while(hl3==hl1&&hc3!=hc1+2){
		cout<<"Areas incorretas! Digite novamente\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}


	while(hc3==hc2&&hl3!=hl2+2){
		cout<<"Areas incorretas! Digite novamente\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}
	

	while(hc3==hc1&&hl3!=hl1-2){
		cout<<"Areas incorretas! Digite novamente\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}
	
}

if(hl2==hl1+1&&hc2==hc1+1){
    while(hl3!=hl1-1&&hc3!=hc1+1&&hl3!=hl2-1&&hc3!=hc2+1&&hl3!=hl2+1&&hc3!=hc2-1&&hl3!=hl1+1&&hc3!=hc1-1){
    	cout<<"Areas incorretas! Digite novamente\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}
	while(hl3==hl2+1&&hc3==hc2+1||hl3==hl1-1&&hc3==hc1-1){
		cout<<"Areas incorretas! Digite novamente\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}
 
    while(hl3==hl2&&hc3!=hc2-2){
    	cout<<"Areas incorretas! Digite novamente\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}
	

	while(hl3==hl1&&hc3!=hc1+2){
		cout<<"Areas incorretas! Digite novamente\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}
	

	while(hc3==hc2&&hl3!=hl2-2){
		cout<<"Areas incorretas! Digite novamente\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}
	

	while(hc3==hc1&&hl3!=hl1+2){
	    cout<<"Areas incorretas! Digite novamente\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}
	
	
}

if(hl2==hl1+1&&hc2==hc1-1){
	while(hl3!=hl1-1&&hc3!=hc1-1&&hl3!=hl1+1&&hc3!=hc1+1&&hl3!=hl2-1&&hc3!=hc2-1&&hl3!=hl2+1&&hc3!=hc2+1){
		cout<<"Areas incorretas! Digite novamente\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}
	while(hl3==hl2+1&&hc3==hc2-1||hl3==hl1-1&&hc3==hc1+1){
		cout<<"Areas incorretas! Digite novamente\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}

	while(hl3==hl2&&hc3!=hc2+2){
		cout<<"Areas incorretas! Digite novamente\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}


	while(hl3==hl1&&hc3!=hc1-2){
		cout<<"Areas incorretas! Digite novamente\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}
	

	while(hc3==hc2&&hl3!=hl2-2){
		cout<<"Areas incorretas! Digite novamente\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}
	

	while(hc3==hc1&&hl3!=hl1+2){
		cout<<"Areas incorretas! Digite novamente\nLinha: ";
	    cin>>hl3;
	    if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	    cout<<"Coluna: ";
	    cin>>hc3;
	}
	
}
while(hl3>14||hl3<-1||hc3>14||hc3<0){
	cout<<"Extrapolou os limites! Digite novamente.\nLinha: ";
	cin>>hl3;
	if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	cout<<"Coluna: ";
	cin>>hc3;
}
while(m[hl3][hc3]=="[s]"||m[hl3][hc3]=="[d]"||m[hl3][hc3]=="[e]"||m[hl3][hc3]=="[h]"||m[hl3][hc3]=="[c]"){
	cout<<"Essas areas ja foram preenchidas digite novamente\nLinha: ";
	cin>>hl3;
	if(hl3==-1){
	    m[hl2][hc2]="[ ]";
	    goto hl2;
        }
	cout<<"Coluna: ";
	cin>>hc3;
}
m[hl3][hc3]="[h]";
cout<<"\n   ";
for(i=0;i<15;i++){
	v[i]=i;
	if(v[i]<10){
	    cout<<" "<<v[i]<<" ";
	}
	else{
		cout<<" "<<v[i];
	}
}
cout<<endl;
for(i=0;i<15;i++){
	if(v[i]<10){
		cout<<v[i]<<"  ";
	}
	else{
	cout<<v[i]<<" ";
	}
	for(j=0;j<15;j++){
		cout<<m[i][j];
	}
	cout<<endl;
}

}
cout<<"\nEscolha qual navio quer posicionar ou reposicionar na batalha naval (Usando as iniciais de cada navio e 'x' para finalizar): \n";
cout<<"Submarino: [ ]; Destroyer: [ ][ ]; Cruzado: [ ][ ][ ][ ]; Encouracado: [ ][ ][ ][ ][ ]; Hydroaviao: [ ]\n    S\t\t    D\t\t      C\t\t\t     E\t\t\t\t  H\t [ ]   [ ];\n";
cin>> navio;
if(navio=='f'||navio=='F'){
	seletor=0;
    goto seletor;	
	}

}
}

if(modo==2){
int boter;
boter:
cout<<"MODO BOT; Pecas aleatorias";
//encouracado
el1=1+rand()%13;
ec1=1+rand()%13;
if(m[el1][ec1]=="[s]"||m[el1][ec1]=="[d]"||m[el1][ec1]=="[e]"||m[el1][ec1]=="[h]"||m[el1][ec1]=="[c]"){
	el1=1+rand()%13;
	ec1=1+rand()%13;
}
m[el1][ec1]="[e]";
//segunda parte encouracado
el2=rand()%15;
ec2=rand()%15;
if(el2>14||el2<0||ec2>14||ec2<0){
	el2=rand()%15;
	ec2=rand()%15;
}
if(m[el2][ec2]=="[s]"||m[el2][ec2]=="[d]"||m[el2][ec2]=="[e]"||m[el2][ec2]=="[h]"||m[el2][ec2]=="[c]"){
	el2=rand()%15;
	ec2=rand()%15;
}

while(el2!=el1+1&&el2!=el1-1&&ec2!=ec1-1&&ec2!=ec1+1||el2<=el1-1&&ec2<=ec1-1||el2>=el1+1&&ec2<=ec1-1||el2>=el1+1&&ec2>=ec1+1||el2<=el1-1&&ec2>=ec1+1){
	el2=rand()%15;
	ec2=rand()%15;
}
if(m[el2][ec2]=="[s]"||m[el2][ec2]=="[d]"||m[el2][ec2]=="[e]"||m[el2][ec2]=="[h]"||m[el2][ec2]=="[c]"){
	el2=rand()%15;
	ec2=rand()%15;
}
if(m[el2+1][ec2+1]=="[s]"||m[el2+1][ec2+1]=="[d]"||m[el2+1][ec2+1]=="[h]"||m[el2+1][ec2+1]=="[e]"||m[el2+1][ec2+1]=="[c]"||m[el2-1][ec2-1]=="[s]"||m[el2-1][ec2-1]=="[d]"||m[el2-1][ec2-1]=="[h]"||m[el2-1][ec2-1]=="[c]"||m[el2-1][ec2-1]=="[e]"){
el2=rand()%15;
ec2=rand()%15;
}
m[el2][ec2]="[e]";
//terceira parte encouracado
if(el2==el1+1||el2==el1-1){
	el3=el2+1;
	ec3=ec1;
	if(el3==el1){
		el3=el1+1;
	}
}
if(ec2==ec1+1||ec2==ec1-1){
    ec3=ec2+1;
    el3=el1;
    if(ec3==ec1){
    	ec3=ec1+1;
	}
}
if(el3>14||el3<0){
	if(el3==el2+1){
		el3=el1-1;
	}
	if(el3==el1+1){
		el3=el2-1;
	}
}
if(ec3>14||ec3<0){
	if(ec3==ec2+1){
		ec3=ec1-1;
	}
	if(ec3==ec1+1){
		ec3=ec2-1;
	}
}
if(m[el3][ec3]=="[s]"||m[el3][ec3]=="[d]"||m[el3][ec3]=="[e]"||m[el3][ec3]=="[h]"||m[el3][ec3]=="[c]"){
	if(el2==el1+1||el2==el1-1){
		if(el3==el2+1){
			el3=el1-1;
		}
		if(el3==el1+1){
			el3=el2-1;
		}
	}
	if(ec2==ec1+1||ec2==ec1-1){
		if(ec3==ec2+1){
			ec3=ec1-1;
		}
		if(ec3==ec1+1){
			ec3=ec2-1;
		}
	}
}
m[el3][ec3]="[e]";
//quarta parte encouracado
if(el3==el2+1||el3==el2-1||el3==el1+1||el3==el1-1){
	el4=el3+1;
	ec4=ec1;
    if(el4==el1||el4==el2){
    	el4=el3-1;
	}
}
if(ec3==ec2+1||ec3==ec2-1||ec3==ec1+1||ec3==ec1-1){
    ec4=ec3+1;
    el4=el1;
    if(ec4==ec3||ec4==ec2||ec4==ec1){
    	ec4=ec3-1;
	}
}
if(el4>14||el4<0){
	if(el4==el3+1){
		el4=el2-1;
		if(el4==el1||el4==el3){
			el4=el1-1;
		}
	}
	if(el4==el3-1){
		el4=el2+1;
		if(el4==el1||el4==el3){
			el4=el1+1;
		}
	}
}
if(ec4>14||ec4<0){
	if(ec4==ec3+1){
		ec4=ec2-1;
		if(ec4==ec1||ec4==ec3){
			ec4=ec1-1;
		}
	}
	if(ec4==ec3-1){
		ec4=ec2+1;
		if(ec4==ec1||ec4==ec3){
			ec4=ec1+1;
		}
	}
}
if(m[el4][ec4]=="[s]"||m[el4][ec4]=="[d]"||m[el4][ec4]=="[e]"||m[el4][ec4]=="[h]"||m[el4][ec4]=="[c]"){
	if(ec4==ec1){
		if(el4==el3-1){
			el4=el1+1;
			if(el4==el2||el4==el3){
				el4=el2+1;
			}
		}
		if(el4==el3+1){
			el4=el1-1;
			if(el4==el2||el4==el3){
				el4=el2-1;
			}
		}
	}
	if(el4==el1){
		if(ec4==ec3-1){
			ec4=ec1+1;
			if(ec4==ec2||ec4==ec3){
				ec4=ec2+1;
			}
		}
		if(ec4==ec3+1){
			ec4=ec1-1;
			if(ec4==ec2||ec4==ec3){
				ec4=ec2-1;
			}
		}
	}
}
m[el4][ec4]="[e]";
//quinta parte encouracado
if(ec4==ec1){
	el5=el4+1;
	ec5=ec4;
	if(el5==el1||el5==el2||el5==el3){
		el5=el4-1;
	}
}
if(el4==el1){
	ec5=ec4+1;
	el5=el4;
	if(ec5==ec1||ec5==ec2||ec5==ec3||ec5==ec3){
		ec5=ec4-1;
	}
}
if(el5<0||el5>14){
	if(el5==el4+1){
		el5=el3-1;
		if(el5==el2||el5==el3||el5==el1){
			el5=el2-1;
			if(el5==el1||el5==el2||el5==el3){
				el5=el1-1;
			}
		}
	}
	if(el5==el4-1){
		el5=el3+1;
		if(el5==el2||el5==el3||el5==el1){
			el5=el2+1;
			if(el5==el1||el5==el2||el5==el3){
				el5=el1+1;
			}
		}
	}
}
if(ec5<0||ec5>14){
	if(ec5==ec4+1){
		ec5=ec3-1;
		if(ec5==ec2||ec5==ec1||ec5==ec3){
			ec5=ec2-1;
			if(ec5==ec1||ec5==ec2||ec5==ec3){
				ec5=ec1-1;
			}
		}
	}
	if(ec5==ec4-1){
		ec5=ec3+1;
		if(ec5==ec2||ec5==ec1||ec5==ec3){
			ec5=ec2+1;
			if(ec5==ec1||ec5==ec2||ec5==ec3){
				ec5=ec1+1;
			}
		}
	}
}
if(m[el5][ec5]=="[s]"||m[el5][ec5]=="[d]"||m[el5][ec5]=="[e]"||m[el5][ec5]=="[h]"||m[el5][ec5]=="[c]"){
	if(ec5==ec1){
		if(el5==el4+1){
		el5=el3-1;
		if(el5==el2||el5==el1||el5==el3){
			el5=el2-1;
			if(el5==el1||el5==el2||el5==el3){
				el5=el1-1;
			}
		}
	}
	    if(el5==el4-1){
		    el5=el3+1;
		    if(el5==el2||el5==el1||el5==el3){
			    el5=el2+1;
			    if(el5==el1||el5==el2||el5==el3){
				    el5=el1+1;
			}
		}
	}
}
    if(el5==el1){
    	if(ec5==ec4+1){
		ec5=ec3-1;
		if(ec5==ec2||ec5==ec1||ec5==ec3){
			ec5=ec2-1;
			if(ec5==ec1||ec5==ec2||ec5==ec3){
				ec5=ec1-1;
			}
		}
	}
	if(ec5==ec4-1){
		ec5=ec3+1;
		if(ec5==ec2||ec5==ec1||ec5==ec3){
			ec5=ec2+1;
			if(ec5==ec1||ec5==ec2||ec5==ec3){
				ec5=ec1+1;
			}
		}
	}
	}
}
m[el5][ec5]="[e]";
//cruzado

cl1=1+rand()%13; /*fiz assim pq tava dando erro quando colocava 0 ou 14*/
cc1=1+rand()%13;
if(m[cl1][cc1]=="[s]"||m[cl1][cc1]=="[d]"||m[cl1][cc1]=="[e]"||m[cl1][cc1]=="[h]"||m[cl1][cc1]=="[c]"){
	cl1=1+rand()%13;
	cc1=1+rand()%13;
}
m[cl1][cc1]="[c]";
//segunda parte cruzado
cl2=rand()%15;
cc2=rand()%15;
if(cl2>14||cl2<0||cc2>14||cc2<0){
	cl2=rand()%15;
	cc2=rand()%15;
}
if(m[cl2][cc2]=="[s]"||m[cl2][cc2]=="[d]"||m[cl2][cc2]=="[e]"||m[cl2][cc2]=="[h]"||m[cl2][cc2]=="[c]"){
	cl2=rand()%15;
	cc2=rand()%15;
}

while(cl2!=cl1+1&&cl2!=cl1-1&&cc2!=cc1-1&&cc2!=cc1+1||cl2<=cl1-1&&cc2<=cc1-1||cl2>=cl1+1&&cc2<=cc1-1||cl2>=cl1+1&&cc2>=cc1+1||cl2<=cl1-1&&cc2>=cc1+1){
	cl2=rand()%15;
	cc2=rand()%15;
}
if(m[cl2][cc2]=="[s]"||m[cl2][cc2]=="[d]"||m[cl2][cc2]=="[e]"||m[cl2][cc2]=="[h]"||m[cl2][cc2]=="[c]"){
	cl2=rand()%15;
	cc2=rand()%15;
}
if(m[cl2+1][cc2+1]=="[s]"||m[cl2+1][cc2+1]=="[d]"||m[cl2+1][cc2+1]=="[h]"||m[cl2+1][cc2+1]=="[e]"||m[cl2+1][cc2+1]=="[c]"||m[cl2-1][cc2-1]=="[s]"||m[cl2-1][cc2-1]=="[d]"||m[cl2-1][cc2-1]=="[h]"||m[cl2-1][cc2-1]=="[c]"||m[cl2-1][cc2-1]=="[e]"){
	cl2=rand()%15;
	cc2=rand()%15;
}
if(cl2>14||cl2<0||cc2>14||cc2<0){
	cl2=rand()%15;
	cc2=rand()%15;
}
m[cl2][cc2]="[c]";
//terceira parte cruzado
cl3=rand()%15;
cc3=rand()%15;
if(cl2==cl1+1||cl2==cl1-1){
	cl3=cl2+1;
	cc3=cc1;
	if(cl3==cl1){
		cl3=cl1+1;
	}
}
if(cc2==cc1+1||cc2==cc1-1){
    cc3=cc2+1;
    cl3=cl1;
    if(cc3==cc1){
    	cc3=cc1+1;
	}
}
if(cl3>14||cl3<0){
	if(cl3==cl2+1){
		cl3=cl1-1;
	}
	if(cl3==cl1+1){
		cl3=cl2-1;
	}
}
if(cc3>14||cc3<0){
	if(cc3==cc2+1){
		cc3=cc1-1;
	}
	if(cc3==cc1+1){
		cc3=cc2-1;
	}
}
if(m[cl3][cc3]=="[s]"||m[cl3][cc3]=="[d]"||m[cl3][cc3]=="[e]"||m[cl3][cc3]=="[h]"||m[cl3][cc3]=="[c]"){
	if(cl2==cl1+1||cl2==cl1-1){
		if(cl3==cl2+1){
			cl3=cl1-1;
		}
		if(cl3==cl1+1){
			cl3=cl2-1;
		}
	}
	if(cc2==cc1+1||cc2==cc1-1){
		if(cc3==cc2+1){
			cc3=cc1-1;
		}
		if(cc3==cc1+1){
			cc3=cc2-1;
		}
	}
}
m[cl3][cc3]="[c]";
//quarta parte cruzado
if(cl3==cl2+1||cl3==cl2-1||cl3==cl1+1||cl3==cl1-1){
	cl4=cl3+1;
	cc4=cc1;
    if(cl4==cl1||cl4==cl2){
    	cl4=cl3-1;
	}
}
if(cc3==cc2+1||cc3==cc2-1||cc3==cc1+1||cc3==cc1-1){
    cc4=cc3+1;
    cl4=cl1;
    if(cc4==cc3||cc4==cc2){
    	cc4=cc3-1;
	}
}
if(cl4>14||cl4<0){
	if(cl4==cl3+1){
		cl4=cl2-1;
		if(cl4==el1||cl4==el3){
			cl4=cl1-1;
		}
	}
	if(cl4==cl3-1){
		cl4=cl2+1;
		if(cl4==cl1||cl4==cl3){
			cl4=cl1+1;
		}
	}
}
if(cc4>14||cc4<0){
	if(cc4==cc3+1){
		cc4=cc2-1;
		if(cc4==cc1||cc4==cc3){
			cc4=cc1-1;
		}
	}
	if(cc4==cc3-1){
		cc4=cc2+1;
		if(cc4==cc1||cc4==cc3){
			cc4=cc1+1;
		}
	}
}
if(m[cl4][cc4]=="[s]"||m[cl4][cc4]=="[d]"||m[cl4][cc4]=="[e]"||m[cl4][cc4]=="[h]"||m[cl4][cc4]=="[c]"){
	if(cc4==cc1){
		if(cl4==cl3-1){
			cl4=cl1+1;
			if(cl4==cl2){
				cl4=cl2+1;
			}
		}
		if(cl4==cl3+1){
			cl4=cl1-1;
			if(cl4==cl2){
				cl4=cl2-1;
			}
		}
		if(cl4==cl2-1){
			cl4=cl1+1;
			if(cl4==cl3){
				cl4=cl3+1;
			}
		}
		if(cl4==cl2+1){
			cl4=cl1-1;
			if(cl4==cl3){
				cl4=cl3-1;
			}
		}
	}
	if(cl4==cl1){
		if(cc4==cc3-1){
			cc4=cc1+1;
			if(cc4==cc2){
				cc4=cc2+1;
			}
		}
		if(cc4==cc3+1){
			cc4=cc1-1;
			if(cc4==cc2){
				cc4=cc2-1;
			}
		}
		if(cc4==cc2-1){
			cc4=cc1+1;
			if(cc4==cc3){
				cc4=cc3+1;
			}
		}
		if(cc4==cc2+1){
			cc4=cc1-1;
			if(cc4==cc3){
				cc4=cc3-1;
			}
		}
	}
}
m[cl4][cc4]="[c]";
//hydroaviao

hl1=1+rand()%13;
hc1=1+rand()%13;
while(m[hl1][hc1]=="[s]"||m[hl1][hc1]=="[d]"||m[hl1][hc1]=="[e]"||m[hl1][hc1]=="[h]"||m[hl1][hc1]=="[c]"){
	hl1=rand()%14;
	hc1=rand()%14;
}
m[hl1][hc1]="[h]";
//segunda parte hydroaviao
vhl2[0]=hl1-1;
vhc2[0]=hc1-1;
vhl2[1]=hl1-1;
vhc2[1]=hc1+1;
vhl2[2]=hl1+1;
vhc2[2]=hc1-1;
vhl2[3]=hl1+1;
vhc2[3]=hc1+1;
xho=rand()%4;
hl2=vhl2[xho];
hc2=vhc2[xho];
while(hl2>14||hl2<0||hc2>14||hc2<0){
	if(xho!=0){
		xho=xho-1;
		hl2=vhl2[xho];
		hc2=vhc2[xho];
		if(xho==0){
			if(hl2>14||hl2<0||hc2>14||hc2<0){
				xho==xho+2;
				hl2=vhl2[xho];
		        hc2=vhc2[xho];
			}
		}
	}	
	if(xho!=3){
		xho=xho+1;
		hl2=vhl2[xho];
		hc2=vhc2[xho];
		if(xho==3){
			if(hl2>14||hl2<0||hc2>14||hc2<0){
				xho==xho+2;
				hl2=vhl2[xho];
		        hc2=vhc2[xho];
			}
		}
    }
}
while(m[hl2][hc2]=="[s]"||m[hl2][hc2]=="[d]"||m[hl2][hc2]=="[e]"||m[hl2][hc2]=="[h]"||m[hl2][hc2]=="[c]"){
	if(xho!=0){
		xho=xho-1;
		hl2=vhl2[xho];
		hc2=vhc2[xho];
		if(xho==0){
			if(m[hl2][hc2]=="[s]"||m[hl2][hc2]=="[d]"||m[hl2][hc2]=="[e]"||m[hl2][hc2]=="[h]"||m[hl2][hc2]=="[c]"){
				xho==xho+2;
				hl2=vhl2[xho];
		        hc2=vhc2[xho];
			}
		}
	}
	if(xho!=3){
		xho=xho+1;
		hl2=vhl2[xho];
		hc2=vhc2[xho];
		if(xho==3){
		    if(m[hl2][hc2]=="[s]"||m[hl2][hc2]=="[d]"||m[hl2][hc2]=="[e]"||m[hl2][hc2]=="[h]"||m[hl2][hc2]=="[c]"){
				xho==xho+2;
				hl2=vhl2[xho];
		        hc2=vhc2[xho];
			}	
		}
    }
}
m[hl2][hc2]="[h]";
//terceira parte hydroaviao
if(xho==0){
	vhl3[0]=hl2-1;
	vhc3[0]=hc2+1;
	vhl3[1]=hl2+1;
	vhc3[1]=hc2-1;
	vhl3[2]=hl1+1;
	vhc3[2]=hc1-1;
	vhl3[3]=hl1-1;
	vhc3[3]=hc1+1;
	xho3=rand()%4;
	hl3=vhl3[xho3];
	hc3=vhc3[xho3];
while(hl3>14||hl3<0||hc3>14||hc3<0){
	if(xho3!=0){
		xho3=xho3-1;
		hl3=vhl3[xho3];
		hc3=vhc3[xho3];
		if(xho3==0){
			if(hl3>14||hl3<0||hc3>14||hc3<0){
				xho3==xho3+2;
				hl3=vhl3[xho3];
		        hc3=vhc3[xho3];
			}
		}
	}	
	if(xho3!=3){
		xho3=xho3+1;
		hl3=vhl3[xho3];
		hc3=vhc3[xho3];
		if(xho3==3){
			if(hl3>14||hl3<0||hc3>14||hc3<0){
				xho3==xho3+2;
				hl3=vhl3[xho3];
		        hc3=vhc3[xho3];
			}
		}
    }
}
while(m[hl3][hc3]=="[s]"||m[hl3][hc3]=="[d]"||m[hl3][hc3]=="[e]"||m[hl3][hc3]=="[h]"||m[hl3][hc3]=="[c]"){
	if(xho3!=0){
		xho3=xho3-1;
		hl3=vhl3[xho3];
		hc3=vhc3[xho3];
		if(xho3==0){
			if(m[hl3][hc3]=="[s]"||m[hl3][hc3]=="[d]"||m[hl3][hc3]=="[e]"||m[hl3][hc3]=="[h]"||m[hl3][hc3]=="[c]"){
				xho3==xho3+2;
				hl3=vhl3[xho3];
		        hc3=vhc3[xho3];
			}
		}
	}
	if(xho3!=3){
		xho3=xho3+1;
		hl3=vhl3[xho3];
		hc3=vhc3[xho3];
		if(xho3==3){
		    if(m[hl3][hc3]=="[s]"||m[hl3][hc3]=="[d]"||m[hl3][hc3]=="[e]"||m[hl3][hc3]=="[h]"||m[hl3][hc3]=="[c]"){
				xho3==xho3+2;
				hl3=vhl3[xho3];
		        hc3=vhc3[xho3];
			}	
		}
    }
}
}
if(xho==1){
	vhl3[0]=hl2-1;
	vhc3[0]=hc2-1;
	vhl3[1]=hl2+1;
	vhc3[1]=hc2+1;
	vhl3[2]=hl1-1;
	vhc3[2]=hc1-1;
	vhl3[3]=hl1+1;
	vhc3[3]=hc1+1;
	xho3=rand()%4;
	hl3=vhl3[xho3];
	hc3=vhc3[xho3];
while(hl3>14||hl3<0||hc3>14||hc3<0){
	if(xho3!=0){
		xho3=xho3-1;
		hl3=vhl3[xho3];
		hc3=vhc3[xho3];
		if(xho3==0){
			if(hl3>14||hl3<0||hc3>14||hc3<0){
				xho3==xho3+2;
				hl3=vhl3[xho3];
		        hc3=vhc3[xho3];
			}
		}
	}	
	if(xho3!=3){
		xho3=xho3+1;
		hl3=vhl3[xho3];
		hc3=vhc3[xho3];
		if(xho3==3){
			if(hl3>14||hl3<0||hc3>14||hc3<0){
				xho3==xho3+2;
				hl3=vhl3[xho3];
		        hc3=vhc3[xho3];
			}
		}
    }
}
while(m[hl3][hc3]=="[s]"||m[hl3][hc3]=="[d]"||m[hl3][hc3]=="[e]"||m[hl3][hc3]=="[h]"||m[hl3][hc3]=="[c]"){
	if(xho3!=0){
		xho3=xho3-1;
		hl3=vhl3[xho3];
		hc3=vhc3[xho3];
		if(xho3==0){
			if(m[hl3][hc3]=="[s]"||m[hl3][hc3]=="[d]"||m[hl3][hc3]=="[e]"||m[hl3][hc3]=="[h]"||m[hl3][hc3]=="[c]"){
				xho3==xho3+2;
				hl3=vhl3[xho3];
		        hc3=vhc3[xho3];
			}
		}
	}
	if(xho3!=3){
		xho3=xho3+1;
		hl3=vhl3[xho3];
		hc3=vhc3[xho3];
		if(xho3==3){
		    if(m[hl3][hc3]=="[s]"||m[hl3][hc3]=="[d]"||m[hl3][hc3]=="[e]"||m[hl3][hc3]=="[h]"||m[hl3][hc3]=="[c]"){
				xho3==xho3+2;
				hl3=vhl3[xho3];
		        hc3=vhc3[xho3];
			}	
		}
    }
}
}
if(xho==2){
	vhl3[0]=hl2-1;
	vhc3[0]=hc2-1;
	vhl3[1]=hl2+1;
	vhc3[1]=hc2+1;
	vhl3[2]=hl1-1;
	vhc3[2]=hc1-1;
	vhl3[3]=hl1+1;
	vhc3[3]=hc1+1;
	xho3=rand()%4;
	hl3=vhl3[xho3];
	hc3=vhc3[xho3];
while(hl3>14||hl3<0||hc3>14||hc3<0){
	if(xho3!=0){
		xho3=xho3-1;
		hl3=vhl3[xho3];
		hc3=vhc3[xho3];
		if(xho3==0){
			if(hl3>14||hl3<0||hc3>14||hc3<0){
				xho3==xho3+2;
				hl3=vhl3[xho3];
		        hc3=vhc3[xho3];
			}
		}
	}	
	if(xho3!=3){
		xho3=xho3+1;
		hl3=vhl3[xho3];
		hc3=vhc3[xho3];
		if(xho3==3){
			if(hl3>14||hl3<0||hc3>14||hc3<0){
				xho3==xho3+2;
				hl3=vhl3[xho3];
		        hc3=vhc3[xho3];
			}
		}
    }
}
while(m[hl3][hc3]=="[s]"||m[hl3][hc3]=="[d]"||m[hl3][hc3]=="[e]"||m[hl3][hc3]=="[h]"||m[hl3][hc3]=="[c]"){
	if(xho3!=0){
		xho3=xho3-1;
		hl3=vhl3[xho3];
		hc3=vhc3[xho3];
		if(xho3==0){
			if(m[hl3][hc3]=="[s]"||m[hl3][hc3]=="[d]"||m[hl3][hc3]=="[e]"||m[hl3][hc3]=="[h]"||m[hl3][hc3]=="[c]"){
				xho3==xho3+2;
				hl3=vhl3[xho3];
		        hc3=vhc3[xho3];
			}
		}
	}
	if(xho3!=3){
		xho3=xho3+1;
		hl3=vhl3[xho3];
		hc3=vhc3[xho3];
		if(xho3==3){
		    if(m[hl3][hc3]=="[s]"||m[hl3][hc3]=="[d]"||m[hl3][hc3]=="[e]"||m[hl3][hc3]=="[h]"||m[hl3][hc3]=="[c]"){
				xho3==xho3+2;
				hl3=vhl3[xho3];
		        hc3=vhc3[xho3];
			}	
		}
    }
}
}
if(xho==3){
	vhl3[0]=hl2+1;
	vhc3[0]=hc2-1;
	vhl3[1]=hl2-1;
	vhc3[1]=hc2+1;
	vhl3[2]=hl1-1;
	vhc3[2]=hc1+1;
	vhl3[3]=hl1+1;
	vhc3[3]=hc1-1;
	xho3=rand()%4;
	hl3=vhl3[xho3];
	hc3=vhc3[xho3];
while(hl3>14||hl3<0||hc3>14||hc3<0){
	if(xho3!=0){
		xho3=xho3-1;
		hl3=vhl3[xho3];
		hc3=vhc3[xho3];
		if(xho3==0){
			if(hl3>14||hl3<0||hc3>14||hc3<0){
				xho3==xho3+2;
				hl3=vhl3[xho3];
		        hc3=vhc3[xho3];
			}
		}
	}	
	if(xho3!=3){
		xho3=xho3+1;
		hl3=vhl3[xho3];
		hc3=vhc3[xho3];
		if(xho3==3){
			if(hl3>14||hl3<0||hc3>14||hc3<0){
				xho3==xho3+2;
				hl3=vhl3[xho3];
		        hc3=vhc3[xho3];
			}
		}
    }
}
while(m[hl3][hc3]=="[s]"||m[hl3][hc3]=="[d]"||m[hl3][hc3]=="[e]"||m[hl3][hc3]=="[h]"||m[hl3][hc3]=="[c]"){
	if(xho3!=0){
		xho3=xho3-1;
		hl3=vhl3[xho3];
		hc3=vhc3[xho3];
		if(xho3==0){
			if(m[hl3][hc3]=="[s]"||m[hl3][hc3]=="[d]"||m[hl3][hc3]=="[e]"||m[hl3][hc3]=="[h]"||m[hl3][hc3]=="[c]"){
				xho3==xho3+2;
				hl3=vhl3[xho3];
		        hc3=vhc3[xho3];
			}
		}
	}
	if(xho3!=3){
		xho3=xho3+1;
		hl3=vhl3[xho3];
		hc3=vhc3[xho3];
		if(xho3==3){
		    if(m[hl3][hc3]=="[s]"||m[hl3][hc3]=="[d]"||m[hl3][hc3]=="[e]"||m[hl3][hc3]=="[h]"||m[hl3][hc3]=="[c]"){
				xho3==xho3+2;
				hl3=vhl3[xho3];
		        hc3=vhc3[xho3];
			}	
		}
    }
}
}
m[hl3][hc3]="[h]";
//submarino
sl=rand()%15;
sc=rand()%15;
while(m[sl][sc]=="[s]"||m[sl][sc]=="[d]"||m[sl][sc]=="[e]"||m[sl][sc]=="[h]"||m[sl][sc]=="[c]"){
	sl=rand()%15;
    sc=rand()%15;
}
m[sl][sc]="[s]";
//destroyer

dl1=rand()%15;
dc1=rand()%15;
while(m[dl1][dc1]=="[s]"||m[dl1][dc1]=="[d]"||m[dl1][dc1]=="[e]"||m[dl1][dc1]=="[h]"||m[dl1][dc1]=="[c]"){
	dl1=rand()%15;
	dc1=rand()%15;
}
m[dl1][dc1]="[d]";
//segunda parte destroyer
dl2=rand()%15;
dc2=rand()%15;
while(m[dl2][dc2]=="[s]"||m[dl2][dc2]=="[d]"||m[dl2][dc2]=="[e]"||m[dl2][dc2]=="[h]"||m[dl2][dc2]=="[c]"){
	dl2=rand()%15;
	dc2=rand()%15;
}
while(dl2!=dl1+1&&dl2!=dl1-1&&dc2!=dc1-1&&dc2!=dc1+1||dl2<=dl1-1&&dc2<=dc1-1||dl2>=dl1+1&&dc2<=dc1-1||dl2>=dl1+1&&dc2>=dc1+1||dl2<=dl1-1&&dc2>=dc1+1){
	dl2=rand()%15;
	dc2=rand()%15;
}
while(m[dl2][dc2]=="[s]"||m[dl2][dc2]=="[d]"||m[dl2][dc2]=="[e]"||m[dl2][dc2]=="[h]"||m[dl2][dc2]=="[c]"){
    dl2=rand()%15;
    dc2=rand()%15;
}
m[dl2][dc2]="[d]";
for(i=0;i<15;i++){
	for(j=0;j<15;j++){
		if(m[i][j]=="[c]"||m[i][j]=="[s]"||m[i][j]=="[d]"||m[i][j]=="[e]"||m[i][j]=="[h]"||m[i][j]=="[c]"){
			npecas++;
		}
	}
}
if(npecas<15){
	for(i=0;i<15;i++){
	for(j=0;j<15;j++){
		m[i][j]="[ ]";
	}
}
	goto boter;
}
}
//Parte final
if(modo==1){
	for(i=0;i<15;i++){
	    for(j=0;j<15;j++){
		    if(m[i][j]=="[c]"||m[i][j]=="[s]"||m[i][j]=="[d]"||m[i][j]=="[e]"||m[i][j]=="[h]"||m[i][j]=="[c]"){
			    npecas++;
		    }
	    }
    }
}
for(i=0;i<15;i++){
	for(j=0;j<15;j++){
		m[i][j]="[ ]";
	}
}
cout<<"\n   ";
    for(i=0;i<15;i++){
	    v[i]=i;
	        if(v[i]<10){
	            cout<<" "<<v[i]<<" ";
	}
	        else{
		        cout<<" "<<v[i];
	}
}
cout<<endl;
    for(i=0;i<15;i++){
	    if(v[i]<10){
		    cout<<v[i]<<"  ";
	}
	    else{
	        cout<<v[i]<<" ";
	}
	    for(j=0;j<15;j++){
		    cout<<m[i][j];
	}
	    cout<<endl;
}
cout<<"DESCUBRA ONDE ESTAO OS NAVIOS E ATAQUE!\n[~]-> Significa que acertou a agua.\nSe quiser sair digite -1\n";
cout<<"Digite a linha e a coluna onde voce acha que estao os navios";
cout<<"\nTENTATIVAS: "<<ntentativas<<"\nLinha: ";
cin>>xl;
if(xl==-1){
    	goto seletor;
	}
cout<<"Coluna: ";
cin>>xc;
ntentativas--;
while(xcont<npecas){
    m[xl][xc]="[~]";
    if(xl!=sl&&xc!=sc&&xl!=dl1&&xc!=dc1&&xl!=dl2&&xc!=dc2&&xl!=cl1&&xc!=cc1&&xl!=cl2&&xc!=cc2&&xl!=cl3&&xc!=cc3&&xl!=cl4&&xc!=cc4&&xl!=el1&&xc!=ec1&&xl!=el2&&xc!=ec2&&xl!=el3&&xc!=ec3&&xl!=el4&&xc!=ec4&&xl!=el5&&xc!=ec5&&xl!=hl1&&xc!=hc1&&xl!=hl2&&xc!=hc2&&xl!=hl3&&xc!=hc3){
    	m[xl][xc]="[~]";
    	cout<<"\n\n\tAGUA!!!\n";
	}
    while(m[xl][xc]=="[x]"||m[xl][xc]=="[s]"||m[xl][xc]=="[d]"||m[xl][xc]=="[c]"||m[xl][xc]=="[e]"||m[xl][xc]=="[h]"){
		cout<<"Essas areas já estão prenchidas! Digite areas vazias!";
		cout<<"\nTENTATIVAS: "<<ntentativas<<"\nLinha:";
    	cin>>xl;
    	if(xl==-1){
    	goto seletor;
	}
    	cout<<"Coluna: ";
    	cin>>xc;
    	ntentativas--;
	}
	if(ntentativas==0){
    	cout<<"Infelizmente acabaram suas tentativas...\n'0' para voltar ao menu: ";
    	cin>>fim;
    	while(fim!=0){
		cin>>fim;
	}
	if(fim==0){
		goto seletor;
	}
	}
	while(xl>14||xc>14||xl<-1||xc<0){
		cout<<"Extrapolou os limites!";
		cout<<"\nTENTATIVAS: "<<ntentativas<<"\nLinha: ";
		cin>>xl;
		if(xl==-1){
    	goto seletor;
	}
		cout<<"Coluna: ";
		cin>>xc;
		ntentativas--;
	}
	if(ntentativas==0){
    	cout<<"Infelizmente acabaram suas tentativas...\n'0' para voltar ao menu: ";
    	cin>>fim;
    	while(fim!=0){
		cin>>fim;
	}
	if(fim==0){
		goto seletor;
	}
	}
    if(xl==sl&&xc==sc){
	    m[sl][sc]="[s]";
	    xcont++;
	    cout<<"\n\n\n\tQue sorte! Encontrou o submarino!\n";
    }
    if(xl==dl1&&xc==dc1||xl==dl2&&xc==dc2){
	    m[xl][xc]="[x]";
	    xcont++;
	    cout<<"\n\n\n\tEncontrou uma parte de um navio!\n";
	    if(m[dl1][dc1]=="[x]"&&m[dl2][dc2]=="[x]"){
		    m[dl1][dc1]="[d]";
		    m[dl2][dc2]="[d]";
		    cout<<"\tAh! Conseguiu destruir o destroyer completo!\n";
	    }
    }
    if(xl==cl1&&xc==cc1||xl==cl2&&xc==cc2||xl==cl3&&xc==cc3||xl==cl4&&xc==cc4){
    	m[xl][xc]="[x]";
    	xcont++;
    	cout<<"\n\n\n\tEncontrou uma parte de um navio!\n";
    	if(m[cl1][cc1]=="[x]"&&m[cl2][cc2]=="[x]"&&m[cl3][cc3]=="[x]"&&m[cl4][cc4]=="[x]"){
    		m[cl1][cc1]="[c]";
		    m[cl2][cc2]="[c]";
		    m[cl3][cc3]="[c]";
		    m[cl4][cc4]="[c]";
		    cout<<"\tBoa! Conseguiu destruir o cruzado inteiro!\n";
		}
    }
    if(xl==el1&&xc==ec1||xl==el2&&xc==ec2||xl==el3&&xc==ec3||xl==el4&&xc==ec4||xl==el5&&xc==ec5){
    	m[xl][xc]="[x]";
    	xcont++;
    	cout<<"\n\n\n\tEncontrou uma parte de um navio!\n";
    	if(m[el1][ec1]=="[x]"&&m[el2][ec2]=="[x]"&&m[el3][ec3]=="[x]"&&m[el4][ec4]=="[x]"&&m[el5][ec5]=="[x]"){
    		m[el1][ec1]="[e]";
		    m[el2][ec2]="[e]";
		    m[el3][ec3]="[e]";
		    m[el4][ec4]="[e]";
		    m[el5][ec5]="[e]";
		    cout<<"\tMeu Deus! Voce destruiu o encouracado!!!\n";
		}
	}
	if(xl==hl1&&xc==hc1||xl==hl2&&xc==hc2||xl==hl3&&xc==hc3){
		m[xl][xc]="[x]";
		xcont++;
		cout<<"\n\n\n\tEncontrou uma parte de um navio!\n";
		if(m[hl1][hc1]=="[x]"&&m[hl2][hc2]=="[x]"&&m[hl3][hc3]=="[x]"){
			m[hl1][hc1]="[h]";
		    m[hl2][hc2]="[h]";
		    m[hl3][hc3]="[h]";
		    cout<<"\tMatou o hydroaviao! Esse deu trabalho...\n";
		}
	}
	cout<<"\n   ";
for(i=0;i<15;i++){
	v[i]=i;
	if(v[i]<10){
	    cout<<" "<<v[i]<<" ";
	}
	else{
		cout<<" "<<v[i];
	}
}
cout<<endl;
for(i=0;i<15;i++){
	if(v[i]<10){
		cout<<v[i]<<"  ";
	}
	else{
	cout<<v[i]<<" ";
	}
	for(j=0;j<15;j++){
		cout<<m[i][j];
	}
	cout<<endl;
}
    if(xcont<npecas){
        cout<<"Continue!! Ainda falta navio!";
        cout<<"\nTENTATIVAS: "<<ntentativas<<"\nLinha: ";
        cin>>xl;
        if(xl==-1){
    	goto seletor;
	}
        cout<<"Coluna: ";
        cin>>xc;
        ntentativas--;
    }
    if(ntentativas==0){
    	cout<<"Infelizmente acabaram suas tentativas...\n'0' para voltar ao menu: ";
    	cin>>fim;
    	while(fim!=0){
		cin>>fim;
	}
	if(fim==0){
		goto seletor;
	}
	}
    	cout<<"\n   ";
}
if(xcont>=npecas){
	cout<<"\n\tParabens! Voce derrotou todos os navios!!!!";
	cout<<"\n'0'para retornar ao menu";
	cin>>fim;
	while(fim!=0){
		cin>>fim;
	}
	if(fim==0){
		goto seletor;
	}
}
}
}
}
}

