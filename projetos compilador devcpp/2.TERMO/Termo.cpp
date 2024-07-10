#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
//tentar fazer o jogo termo (coloca a palavra do dia ou uma palavra random pra tentar adivinhar).; certo
// mostrar ao lado as palavras usadas;
char pl,sl,tl,ql,qil;
char plt,slt,tlt,qlt,qilt;
string pl1,sl1,tl1,ql1,qil1;
string pl2,sl2,tl2,ql2,qil2;
string pl3,sl3,tl3,ql3,qil3;
string pl4,sl4,tl4,ql4,qil4;
string pl5,sl5,tl5,ql5,qil5;
string pl6,sl6,tl6,ql6,qil6;
string termo,dicio;
int menu,mini,iniciador,voltar;
int cont_pl,cont_sl,cont_tl,cont_ql,cont_qil;
int cont_pl0,cont_sl0,cont_tl0,cont_ql0,cont_qil0;
char pl0,sl0,tl0,ql0,qil0;
mini=0;
menu:
cout<<"\t\t\t&!$#!   [=T=][=E=][=R=][=M=][=O=]   !@#A$\n";
cout<<"Digite 1 para iniciar: ";
cin>>iniciador;
while(iniciador!=1){
	cin>>iniciador;
}
cout<<"1- Jogar TERMO\n2- Regras do jogo\n3- Creditos\n";
cin>>mini;
if(mini==3){
	cout<<"Somente feito por mim Brunno...";
	cout<<"'0' para voltar ao menu";
	cin>>mini;
	while(mini!=0){
		cin>>mini;
	}
	if(mini==0){
		goto menu;
	}
}
if(mini==2){
	cout<<"As regras são simples, a principal delas eh voce adivinhar a palavra do dia colocada no inicio do jogo\n";
	cout<<"*Coloque somente palavras minusculas, o computador nao reconhece quando tem letra maiuscula;";
	cout<<"\n*Palavras com '=' do lado quer dizer que a letra esta na posicao certa;";
	cout<<"\n*Palavras com '-' do lado quer dizer que corresponde com a palavra do dia mas esta na posicao errada;";
	cout<<"\n*Dueto e Quarteto sao jogos iguais ao termo porem tem que acertar 2 ou 4 palavras;";
	cout<<"\n*Evite palavras erradas, no futuro vai ter dicionario que impossibilita isso.";
	cout<<"\n'0' para voltar";
	cin>>mini;
	while(mini!=0){
		cin>>mini;
	}
	if(mini==0){
		goto menu;
	}
}
if(mini==1){
cout<<"Palavra do dia: ";
cin>>plt>>slt>>tlt>>qlt>>qilt;
termo=termo+plt;termo=termo+slt;termo=termo+tlt;termo=termo+qlt;termo=termo+qilt;
cout<<plt<<slt<<tlt<<qlt<<qilt<<endl;
termo="+"+termo+"+";
cout<<termo;
system("CLS");
cout<<"          TERMO             \n[   ][   ][   ][   ][   ]\n\n[   ][   ][   ][   ][   ]\n\n[   ][   ][   ][   ][   ]\n\n[   ][   ][   ][   ][   ]\n\n[   ][   ][   ][   ][   ]\n\n[   ][   ][   ][   ][   ]\n";
cin>>pl>>sl>>tl>>ql>>qil;
//|
pl1=" ";
pl1=pl1+pl;
pl1=pl1+" ";
sl1=" ";
sl1=sl1+sl;
sl1=sl1+" ";
tl1=" ";
tl1=tl1+tl;
tl1=tl1+" ";
ql1=" ";
ql1=ql1+ql;
ql1=ql1+" ";
qil1=" ";
qil1=qil1+qil;
qil1=qil1+" ";
cont_pl=0;cont_sl=0;cont_tl=0;cont_ql=0;cont_qil=0;
cont_pl0=0;cont_sl0=0;cont_tl0=0;cont_ql0=0;cont_qil0=0;
pl0='*',sl0='*',tl0='*',ql0='*',qil0='*';
//=
if(pl==plt){
	pl1="=";
	pl1=pl1+pl;
	pl1=pl1+"=";
	cont_pl++;
}
if(sl==slt){
	sl1="=";
	sl1=sl1+sl;
	sl1=sl1+"=";
	cont_sl++;
}
if(tl==tlt){
	tl1="=";
	tl1=tl1+tl;
	tl1=tl1+"=";
	cont_tl++;
}
if(ql==qlt){
	ql1="=";
	ql1=ql1+ql;
	ql1=ql1+"=";
	cont_ql++;
}
if(qil==qilt){
	qil1="=";
	qil1=qil1+qil;
	qil1=qil1+"=";
	cont_qil++;
}
//- e |
if(cont_pl==0){
	if(pl==slt&&sl!=slt){
		pl1="-";
		pl1=pl1+pl;      //1
		pl1=pl1+"-";
		cont_pl0++;
		pl0=pl;
	}
	if(pl==tlt&&tl!=tlt){
		pl1="-";          //2
		pl1=pl1+pl;
		pl1=pl1+"-";
		cont_pl0++;
		pl0=pl;
	}
	if(pl==qlt&&ql!=qlt){
		pl1="-";
		pl1=pl1+pl;
		pl1=pl1+"-";
		cont_pl0++;
		pl0=pl;
	}
	if(pl==qilt&&qil!=qilt){
		pl1="-";
		pl1=pl1+pl;             //3
		pl1=pl1+"-";
		cont_pl0++;
		pl0=pl;
	}
}
if(cont_sl==0){
	if(sl==plt&&pl!=plt){
		sl1="-";
		sl1=sl1+sl;
		sl1=sl1+"-";
		cont_sl0++;
		sl0=sl;
		if(cont_pl0==1&&sl==pl0){
		    sl1=" ";
            sl1=sl1+sl;
            sl1=sl1+" ";	
		}
	}
	if(sl==tlt&&tl!=tlt){
		sl1="-";
		sl1=sl1+sl;
		sl1=sl1+"-";
		cont_sl0++;
		sl0=sl;
	    if(cont_pl0==1&&sl==pl0){
		    sl1=" ";
            sl1=sl1+sl;
            sl1=sl1+" ";	
		}
	}
	if(sl==qlt&&ql!=qlt){	
		sl1="-";
		sl1=sl1+sl;
		sl1=sl1+"-";
		cont_sl0++;
		sl0=sl;
		if(cont_pl0==1&&sl==pl0){
		    sl1=" ";
            sl1=sl1+sl;
            sl1=sl1+" ";	
		}
	}
	if(sl==qilt&&qil!=qilt){
		sl1="-";
		sl1=sl1+sl;
		sl1=sl1+"-";
		cont_sl0++;
		sl0=sl;
	    if(cont_pl0==1&&sl==pl0){
		    sl1=" ";
            sl1=sl1+sl;
            sl1=sl1+" ";	
		}
	}
	
}
if(cont_tl==0){
	if(tl==plt&&pl!=plt){
		tl1="-";
		tl1=tl1+tl;
		tl1=tl1+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl1=" ";
			tl1=tl1+tl;
			tl1=tl1+" ";
		}
	}
	if(tl==slt&&sl!=slt){
		tl1="-";
		tl1=tl1+tl;
		tl1=tl1+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl1=" ";
			tl1=tl1+tl;
			tl1=tl1+" ";
		}
	}
	if(tl==qlt&&ql!=qlt){
		tl1="-";
		tl1=tl1+tl;
		tl1=tl1+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl1=" ";
			tl1=tl1+tl;
			tl1=tl1+" ";
		}
	}
	if(tl==qilt&&qil!=qilt){
		tl1="-";
		tl1=tl1+tl;
		tl1=tl1+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl1=" ";
			tl1=tl1+tl;
			tl1=tl1+" ";
		}
	}
	
}
if(cont_ql==0){
	if(ql==plt&&pl!=plt){
		ql1="-";
		ql1=ql1+ql;
		ql1=ql1+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql1=" ";
			ql1=ql1+ql;
			ql1=ql1+" ";
		}
	}
	if(ql==slt&&sl!=slt){
		ql1="-";
		ql1=ql1+ql;
		ql1=ql1+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql1=" ";
			ql1=ql1+ql;
			ql1=ql1+" ";
		}
	}
	if(ql==tlt&&tl!=tlt){
		ql1="-";
		ql1=ql1+ql;
		ql1=ql1+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql1=" ";
			ql1=ql1+ql;
			ql1=ql1+" ";
		}
	}
	if(ql==qilt&&qil!=qilt){
		ql1="-";
		ql1=ql1+ql;
		ql1=ql1+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql1=" ";
			ql1=ql1+ql;
			ql1=ql1+" ";
		}
	}
}
if(cont_qil==0){
	if(qil==plt&&pl!=plt){
		qil1="-";
		qil1=qil1+qil;
		qil1=qil1+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil1=" ";
			qil1=qil1+qil;
			qil1=qil1+" ";
		}
	}
	if(qil==slt&&sl!=slt){
		qil1="-";
		qil1=qil1+qil;
		qil1=qil1+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil1=" ";
			qil1=qil1+qil;
			qil1=qil1+" ";
		}
	}
	if(qil==tlt&&tl!=tlt){
		qil1="-";
		qil1=qil1+qil;
		qil1=qil1+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil1=" ";
			qil1=qil1+qil;
			qil1=qil1+" ";
		}
	}
	if(qil==qlt&&ql!=qlt){
		qil1="-";
		qil1=qil1+qil;
		qil1=qil1+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil1=" ";
			qil1=qil1+qil;
			qil1=qil1+" ";
		}
	}
	
}
cout<<termo;
system("CLS");
cout<<"          TERMO             \n["<<pl1<<"]["<<sl1<<"]["<<tl1<<"]["<<ql1<<"]["<<qil1<<"]\n\n[   ][   ][   ][   ][   ]\n\n[   ][   ][   ][   ][   ]\n\n[   ][   ][   ][   ][   ]\n\n[   ][   ][   ][   ][   ]\n\n[   ][   ][   ][   ][   ]\n";
if(pl==plt&&sl==slt&&tl==tlt&&ql==qlt&&qil==qilt){
	cout<<"Parabens, acertou o termo do dia na primeira tentativa\n'0'Para voltar pro menu: ";
	cin>>voltar;
	while(voltar!=0){
		cin>>voltar;
	}
	goto menu;
}
cin>>pl>>sl>>tl>>ql>>qil;
//|
pl2=" ";
pl2=pl2+pl;
pl2=pl2+" ";
sl2=" ";
sl2=sl2+sl;
sl2=sl2+" ";
tl2=" ";
tl2=tl2+tl;
tl2=tl2+" ";
ql2=" ";
ql2=ql2+ql;
ql2=ql2+" ";
qil2=" ";
qil2=qil2+qil;
qil2=qil2+" ";
cont_pl=0;cont_sl=0;cont_tl=0;cont_ql=0;cont_qil=0;
cont_pl0=0;cont_sl0=0;cont_tl0=0;cont_ql0=0;cont_qil0=0;
pl0='*',sl0='*',tl0='*',ql0='*',qil0='*';
//=
if(pl==plt){
	pl2="=";
	pl2=pl2+pl;
	pl2=pl2+"=";
	cont_pl++;
}
if(sl==slt){
	sl2="=";
	sl2=sl2+sl;
	sl2=sl2+"=";
	cont_sl++;
}
if(tl==tlt){
	tl2="=";
	tl2=tl2+tl;
	tl2=tl2+"=";
	cont_tl++;
}
if(ql==qlt){
	ql2="=";
	ql2=ql2+ql;
	ql2=ql2+"=";
	cont_ql++;
}
if(qil==qilt){
	qil2="=";
	qil2=qil2+qil;
	qil2=qil2+"=";
	cont_qil++;
}
//- e |
//- e |
if(cont_pl==0){
	if(pl==slt&&sl!=slt){
		pl2="-";
		pl2=pl2+pl;      //1
		pl2=pl2+"-";
		cont_pl0++;
		pl0=pl;
	}
	if(pl==tlt&&tl!=tlt){
		pl2="-";          //2
		pl2=pl2+pl;
		pl2=pl2+"-";
		cont_pl0++;
		pl0=pl;
	}
	if(pl==qlt&&ql!=qlt){
		pl2="-";
		pl2=pl2+pl;
		pl2=pl2+"-";
		cont_pl0++;
		pl0=pl;
	}
	if(pl==qilt&&qil!=qilt){
		pl2="-";
		pl2=pl2+pl;             //3
		pl2=pl2+"-";
		cont_pl0++;
		pl0=pl;
	}
}
if(cont_sl==0){
	if(sl==plt&&pl!=plt){
		sl2="-";
		sl2=sl2+sl;
		sl2=sl2+"-";
		cont_sl0++;
		sl0=sl;
		if(cont_pl0==1&&sl==pl0){
		    sl2=" ";
            sl2=sl2+sl;
            sl2=sl2+" ";	
		}
	}
	if(sl==tlt&&tl!=tlt){
		sl2="-";
		sl2=sl2+sl;
		sl2=sl2+"-";
		cont_sl0++;
		sl0=sl;
	    if(cont_pl0==1&&sl==pl0){
		    sl2=" ";
            sl2=sl2+sl;
            sl2=sl2+" ";	
		}
	}
	if(sl==qlt&&ql!=qlt){	
		sl2="-";
		sl2=sl2+sl;
		sl2=sl2+"-";
		cont_sl0++;
		sl0=sl;
		if(cont_pl0==1&&sl==pl0){
		    sl2=" ";
            sl2=sl2+sl;
            sl2=sl2+" ";	
		}
	}
	if(sl==qilt&&qil!=qilt){
		sl2="-";
		sl2=sl2+sl;
		sl2=sl2+"-";
		cont_sl0++;
		sl0=sl;
	    if(cont_pl0==1&&sl==pl0){
		    sl2=" ";
            sl2=sl2+sl;
            sl2=sl2+" ";	
		}
	}
	
}
if(cont_tl==0){
	if(tl==plt&&pl!=plt){
		tl2="-";
		tl2=tl2+tl;
		tl2=tl2+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl2=" ";
			tl2=tl2+tl;
			tl2=tl2+" ";
		}
	}
	if(tl==slt&&sl!=slt){
		tl2="-";
		tl2=tl2+tl;
		tl2=tl2+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl2=" ";
			tl2=tl2+tl;
			tl2=tl2+" ";
		}
	}
	if(tl==qlt&&ql!=qlt){
		tl2="-";
		tl2=tl2+tl;
		tl2=tl2+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl2=" ";
			tl2=tl2+tl;
			tl2=tl2+" ";
		}
	}
	if(tl==qilt&&qil!=qilt){
		tl2="-";
		tl2=tl2+tl;
		tl2=tl2+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl2=" ";
			tl2=tl2+tl;
			tl2=tl2+" ";
		}
	}
	
}
if(cont_ql==0){
	if(ql==plt&&pl!=plt){
		ql2="-";
		ql2=ql2+ql;
		ql2=ql2+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql2=" ";
			ql2=ql2+ql;
			ql2=ql2+" ";
		}
	}
	if(ql==slt&&sl!=slt){
		ql2="-";
		ql2=ql2+ql;
		ql2=ql2+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql2=" ";
			ql2=ql2+ql;
			ql2=ql2+" ";
		}
	}
	if(ql==tlt&&tl!=tlt){
		ql2="-";
		ql2=ql2+ql;
		ql2=ql2+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql2=" ";
			ql2=ql2+ql;
			ql2=ql2+" ";
		}
	}
	if(ql==qilt&&qil!=qilt){
		ql2="-";
		ql2=ql2+ql;
		ql2=ql2+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql2=" ";
			ql2=ql2+ql;
			ql2=ql2+" ";
		}
	}
}
if(cont_qil==0){
	if(qil==plt&&pl!=plt){
		qil2="-";
		qil2=qil2+qil;
		qil2=qil2+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil2=" ";
			qil2=qil2+qil;
			qil2=qil2+" ";
		}
	}
	if(qil==slt&&sl!=slt){
		qil2="-";
		qil2=qil2+qil;
		qil2=qil2+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil2=" ";
			qil2=qil2+qil;
			qil2=qil2+" ";
		}
	}
	if(qil==tlt&&tl!=tlt){
		qil2="-";
		qil2=qil2+qil;
		qil2=qil2+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil2=" ";
			qil2=qil2+qil;
			qil2=qil2+" ";
		}
	}
	if(qil==qlt&&ql!=qlt){
		qil2="-";
		qil2=qil2+qil;
		qil2=qil2+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil2=" ";
			qil2=qil2+qil;
			qil2=qil2+" ";
		}
	}
	
}
cout<<termo;
system("CLS");
cout<<"          TERMO             \n["<<pl1<<"]["<<sl1<<"]["<<tl1<<"]["<<ql1<<"]["<<qil1<<"]\n\n["<<pl2<<"]["<<sl2<<"]["<<tl2<<"]["<<ql2<<"]["<<qil2<<"]\n\n[   ][   ][   ][   ][   ]\n\n[   ][   ][   ][   ][   ]\n\n[   ][   ][   ][   ][   ]\n\n[   ][   ][   ][   ][   ]\n";
if(pl==plt&&sl==slt&&tl==tlt&&ql==qlt&&qil==qilt){
	cout<<"Parabens, acertou o termo do dia na segunda tentativa\n'0'Para voltar pro menu: ";
	cin>>voltar;
	while(voltar!=0){
		cin>>voltar;
	}
	goto menu;
}
cin>>pl>>sl>>tl>>ql>>qil;
//|
pl3=" ";
pl3=pl3+pl;
pl3=pl3+" ";
sl3=" ";
sl3=sl3+sl;
sl3=sl3+" ";
tl3=" ";
tl3=tl3+tl;
tl3=tl3+" ";
ql3=" ";
ql3=ql3+ql;
ql3=ql3+" ";
qil3=" ";
qil3=qil3+qil;
qil3=qil3+" ";
cont_pl=0;cont_sl=0;cont_tl=0;cont_ql=0;cont_qil=0;
cont_pl0=0;cont_sl0=0;cont_tl0=0;cont_ql0=0;cont_qil0=0;
pl0='*',sl0='*',tl0='*',ql0='*',qil0='*';
//=
if(pl==plt){
	pl3="=";
	pl3=pl3+pl;
	pl3=pl3+"=";
	cont_pl++;
}
if(sl==slt){
	sl3="=";
	sl3=sl3+sl;
	sl3=sl3+"=";
	cont_sl++;
}
if(tl==tlt){
	tl3="=";
	tl3=tl3+tl;
	tl3=tl3+"=";
	cont_tl++;
}
if(ql==qlt){
	ql3="=";
	ql3=ql3+ql;
	ql3=ql3+"=";
	cont_ql++;
}
if(qil==qilt){
	qil3="=";
	qil3=qil3+qil;
	qil3=qil3+"=";
	cont_qil++;
}
//- e |
if(cont_pl==0){
	if(pl==slt&&sl!=slt){
		pl3="-";
		pl3=pl3+pl;      //1
		pl3=pl3+"-";
		cont_pl0++;
		pl0=pl;
	}
	if(pl==tlt&&tl!=tlt){
		pl3="-";          //2
		pl3=pl3+pl;
		pl3=pl3+"-";
		cont_pl0++;
		pl0=pl;
	}
	if(pl==qlt&&ql!=qlt){
		pl3="-";
		pl3=pl3+pl;
		pl3=pl3+"-";
		cont_pl0++;
		pl0=pl;
	}
	if(pl==qilt&&qil!=qilt){
		pl3="-";
		pl3=pl3+pl;             //3
		pl3=pl3+"-";
		cont_pl0++;
		pl0=pl;
	}
}
if(cont_sl==0){
	if(sl==plt&&pl!=plt){
		sl3="-";
		sl3=sl3+sl;
		sl3=sl3+"-";
		cont_sl0++;
		sl0=sl;
		if(cont_pl0==1&&sl==pl0){
		    sl3=" ";
            sl3=sl3+sl;
            sl3=sl3+" ";	
		}
	}
	if(sl==tlt&&tl!=tlt){
		sl3="-";
		sl3=sl3+sl;
		sl3=sl3+"-";
		cont_sl0++;
		sl0=sl;
	    if(cont_pl0==1&&sl==pl0){
		    sl3=" ";
            sl3=sl3+sl;
            sl3=sl3+" ";	
		}
	}
	if(sl==qlt&&ql!=qlt){	
		sl3="-";
		sl3=sl3+sl;
		sl3=sl3+"-";
		cont_sl0++;
		sl0=sl;
		if(cont_pl0==1&&sl==pl0){
		    sl3=" ";
            sl3=sl3+sl;
            sl3=sl3+" ";	
		}
	}
	if(sl==qilt&&qil!=qilt){
		sl3="-";
		sl3=sl3+sl;
		sl3=sl3+"-";
		cont_sl0++;
		sl0=sl;
	    if(cont_pl0==1&&sl==pl0){
		    sl3=" ";
            sl3=sl3+sl;
            sl3=sl3+" ";	
		}
	}
	
}
if(cont_tl==0){
	if(tl==plt&&pl!=plt){
		tl3="-";
		tl3=tl3+tl;
		tl3=tl3+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl3=" ";
			tl3=tl3+tl;
			tl3=tl3+" ";
		}
	}
	if(tl==slt&&sl!=slt){
		tl3="-";
		tl3=tl3+tl;
		tl3=tl3+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl3=" ";
			tl3=tl3+tl;
			tl3=tl3+" ";
		}
	}
	if(tl==qlt&&ql!=qlt){
		tl3="-";
		tl3=tl3+tl;
		tl3=tl3+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl3=" ";
			tl3=tl3+tl;
			tl3=tl3+" ";
		}
	}
	if(tl==qilt&&qil!=qilt){
		tl3="-";
		tl3=tl3+tl;
		tl3=tl3+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl3=" ";
			tl3=tl3+tl;
			tl3=tl3+" ";
		}
	}
	
}
if(cont_ql==0){
	if(ql==plt&&pl!=plt){
		ql3="-";
		ql3=ql3+ql;
		ql3=ql3+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql3=" ";
			ql3=ql3+ql;
			ql3=ql3+" ";
		}
	}
	if(ql==slt&&sl!=slt){
		ql3="-";
		ql3=ql3+ql;
		ql3=ql3+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql3=" ";
			ql3=ql3+ql;
			ql3=ql3+" ";
		}
	}
	if(ql==tlt&&tl!=tlt){
		ql3="-";
		ql3=ql3+ql;
		ql3=ql3+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql3=" ";
			ql3=ql3+ql;
			ql3=ql3+" ";
		}
	}
	if(ql==qilt&&qil!=qilt){
		ql3="-";
		ql3=ql3+ql;
		ql3=ql3+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql3=" ";
			ql3=ql3+ql;
			ql3=ql3+" ";
		}
	}
}
if(cont_qil==0){
	if(qil==plt&&pl!=plt){
		qil3="-";
		qil3=qil3+qil;
		qil3=qil3+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil3=" ";
			qil3=qil3+qil;
			qil3=qil3+" ";
		}
	}
	if(qil==slt&&sl!=slt){
		qil3="-";
		qil3=qil3+qil;
		qil3=qil3+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil3=" ";
			qil3=qil3+qil;
			qil3=qil3+" ";
		}
	}
	if(qil==tlt&&tl!=tlt){
		qil3="-";
		qil3=qil3+qil;
		qil3=qil3+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil3=" ";
			qil3=qil3+qil;
			qil3=qil3+" ";
		}
	}
	if(qil==qlt&&ql!=qlt){
		qil3="-";
		qil3=qil3+qil;
		qil3=qil3+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil3=" ";
			qil3=qil3+qil;
			qil3=qil3+" ";
		}
	}
	
}
cout<<termo;
system("CLS");
cout<<"          TERMO             \n["<<pl1<<"]["<<sl1<<"]["<<tl1<<"]["<<ql1<<"]["<<qil1<<"]\n\n["<<pl2<<"]["<<sl2<<"]["<<tl2<<"]["<<ql2<<"]["<<qil2<<"]\n\n["<<pl3<<"]["<<sl3<<"]["<<tl3<<"]["<<ql3<<"]["<<qil3<<"]\n\n[   ][   ][   ][   ][   ]\n\n[   ][   ][   ][   ][   ]\n\n[   ][   ][   ][   ][   ]\n";
if(pl==plt&&sl==slt&&tl==tlt&&ql==qlt&&qil==qilt){
	cout<<"Parabens, acertou o termo do dia na terceira tentativa\n'0'Para voltar pro menu: ";
	cin>>voltar;
	while(voltar!=0){
		cin>>voltar;
	}
	goto menu;
}
cin>>pl>>sl>>tl>>ql>>qil;
//|
pl4=" ";
pl4=pl4+pl;
pl4=pl4+" ";
sl4=" ";
sl4=sl4+sl;
sl4=sl4+" ";
tl4=" ";
tl4=tl4+tl;
tl4=tl4+" ";
ql4=" ";
ql4=ql4+ql;
ql4=ql4+" ";
qil4=" ";
qil4=qil4+qil;
qil4=qil4+" ";
cont_pl=0;cont_sl=0;cont_tl=0;cont_ql=0;cont_qil=0;
cont_pl0=0;cont_sl0=0;cont_tl0=0;cont_ql0=0;cont_qil0=0;
pl0='*',sl0='*',tl0='*',ql0='*',qil0='*';
//=
if(pl==plt){
	pl4="=";
	pl4=pl4+pl;
	pl4=pl4+"=";
	cont_pl++;
}
if(sl==slt){
	sl4="=";
	sl4=sl4+sl;
	sl4=sl4+"=";
	cont_sl++;
}
if(tl==tlt){
	tl4="=";
	tl4=tl4+tl;
	tl4=tl4+"=";
	cont_tl++;
}
if(ql==qlt){
	ql4="=";
	ql4=ql4+ql;
	ql4=ql4+"=";
	cont_ql++;
}
if(qil==qilt){
	qil4="=";
	qil4=qil4+qil;
	qil4=qil4+"=";
	cont_qil++;
}
//- e |
if(cont_pl==0){
	if(pl==slt&&sl!=slt){
		pl4="-";
		pl4=pl4+pl;      //1
		pl4=pl4+"-";
		cont_pl0++;
		pl0=pl;
	}
	if(pl==tlt&&tl!=tlt){
		pl4="-";          //2
		pl4=pl4+pl;
		pl4=pl4+"-";
		cont_pl0++;
		pl0=pl;
	}
	if(pl==qlt&&ql!=qlt){
		pl4="-";
		pl4=pl4+pl;
		pl4=pl4+"-";
		cont_pl0++;
		pl0=pl;
	}
	if(pl==qilt&&qil!=qilt){
		pl4="-";
		pl4=pl4+pl;             //3
		pl4=pl4+"-";
		cont_pl0++;
		pl0=pl;
	}
}
if(cont_sl==0){
	if(sl==plt&&pl!=plt){
		sl4="-";
		sl4=sl4+sl;
		sl4=sl4+"-";
		cont_sl0++;
		sl0=sl;
		if(cont_pl0==1&&sl==pl0){
		    sl4=" ";
            sl4=sl4+sl;
            sl4=sl4+" ";	
		}
	}
	if(sl==tlt&&tl!=tlt){
		sl4="-";
		sl4=sl4+sl;
		sl4=sl4+"-";
		cont_sl0++;
		sl0=sl;
	    if(cont_pl0==1&&sl==pl0){
		    sl4=" ";
            sl4=sl4+sl;
            sl4=sl4+" ";	
		}
	}
	if(sl==qlt&&ql!=qlt){	
		sl4="-";
		sl4=sl4+sl;
		sl4=sl4+"-";
		cont_sl0++;
		sl0=sl;
		if(cont_pl0==1&&sl==pl0){
		    sl4=" ";
            sl4=sl4+sl;
            sl4=sl4+" ";	
		}
	}
	if(sl==qilt&&qil!=qilt){
		sl4="-";
		sl4=sl4+sl;
		sl4=sl4+"-";
		cont_sl0++;
		sl0=sl;
	    if(cont_pl0==1&&sl==pl0){
		    sl4=" ";
            sl4=sl4+sl;
            sl4=sl4+" ";	
		}
	}
	
}
if(cont_tl==0){
	if(tl==plt&&pl!=plt){
		tl4="-";
		tl4=tl4+tl;
		tl4=tl4+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl4=" ";
			tl4=tl4+tl;
			tl4=tl4+" ";
		}
	}
	if(tl==slt&&sl!=slt){
		tl4="-";
		tl4=tl4+tl;
		tl4=tl4+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl4=" ";
			tl4=tl4+tl;
			tl4=tl4+" ";
		}
	}
	if(tl==qlt&&ql!=qlt){
		tl4="-";
		tl4=tl4+tl;
		tl4=tl4+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl4=" ";
			tl4=tl4+tl;
			tl4=tl4+" ";
		}
	}
	if(tl==qilt&&qil!=qilt){
		tl4="-";
		tl4=tl4+tl;
		tl4=tl4+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl4=" ";
			tl4=tl4+tl;
			tl4=tl4+" ";
		}
	}
	
}
if(cont_ql==0){
	if(ql==plt&&pl!=plt){
		ql4="-";
		ql4=ql4+ql;
		ql4=ql4+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql4=" ";
			ql4=ql4+ql;
			ql4=ql4+" ";
		}
	}
	if(ql==slt&&sl!=slt){
		ql4="-";
		ql4=ql4+ql;
		ql4=ql4+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql4=" ";
			ql4=ql4+ql;
			ql4=ql4+" ";
		}
	}
	if(ql==tlt&&tl!=tlt){
		ql4="-";
		ql4=ql4+ql;
		ql4=ql4+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql4=" ";
			ql4=ql4+ql;
			ql4=ql4+" ";
		}
	}
	if(ql==qilt&&qil!=qilt){
		ql4="-";
		ql4=ql4+ql;
		ql4=ql4+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql4=" ";
			ql4=ql4+ql;
			ql4=ql4+" ";
		}
	}
}
if(cont_qil==0){
	if(qil==plt&&pl!=plt){
		qil4="-";
		qil4=qil4+qil;
		qil4=qil4+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil4=" ";
			qil4=qil4+qil;
			qil4=qil4+" ";
		}
	}
	if(qil==slt&&sl!=slt){
		qil4="-";
		qil4=qil4+qil;
		qil4=qil4+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil4=" ";
			qil4=qil4+qil;
			qil4=qil4+" ";
		}
	}
	if(qil==tlt&&tl!=tlt){
		qil4="-";
		qil4=qil4+qil;
		qil4=qil4+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil4=" ";
			qil4=qil4+qil;
			qil4=qil4+" ";
		}
	}
	if(qil==qlt&&ql!=qlt){
		qil4="-";
		qil4=qil4+qil;
		qil4=qil4+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil4=" ";
			qil4=qil4+qil;
			qil4=qil4+" ";
		}
	}
	
}
cout<<termo;
system("CLS");
cout<<"          TERMO             \n["<<pl1<<"]["<<sl1<<"]["<<tl1<<"]["<<ql1<<"]["<<qil1<<"]\n\n["<<pl2<<"]["<<sl2<<"]["<<tl2<<"]["<<ql2<<"]["<<qil2<<"]\n\n["<<pl3<<"]["<<sl3<<"]["<<tl3<<"]["<<ql3<<"]["<<qil3<<"]\n\n["<<pl4<<"]["<<sl4<<"]["<<tl4<<"]["<<ql4<<"]["<<qil4<<"]\n\n[   ][   ][   ][   ][   ]\n\n[   ][   ][   ][   ][   ]\n";
if(pl==plt&&sl==slt&&tl==tlt&&ql==qlt&&qil==qilt){
	cout<<"Parabens, acertou o termo do dia na quarta tentativa\n'0'Para voltar pro menu: ";
	cin>>voltar;
	while(voltar!=0){
		cin>>voltar;
	}
	goto menu;
}
cin>>pl>>sl>>tl>>ql>>qil;
//|
pl5=" ";
pl5=pl5+pl;
pl5=pl5+" ";
sl5=" ";
sl5=sl5+sl;
sl5=sl5+" ";
tl5=" ";
tl5=tl5+tl;
tl5=tl5+" ";
ql5=" ";
ql5=ql5+ql;
ql5=ql5+" ";
qil5=" ";
qil5=qil5+qil;
qil5=qil5+" ";
cont_pl=0;cont_sl=0;cont_tl=0;cont_ql=0;cont_qil=0;
cont_pl0=0;cont_sl0=0;cont_tl0=0;cont_ql0=0;cont_qil0=0;
pl0='*',sl0='*',tl0='*',ql0='*',qil0='*';
//=
if(pl==plt){
	pl5="=";
	pl5=pl5+pl;
	pl5=pl5+"=";
	cont_pl++;
}
if(sl==slt){
	sl5="=";
	sl5=sl5+sl;
	sl5=sl5+"=";
	cont_sl++;
}
if(tl==tlt){
	tl5="=";
	tl5=tl5+tl;
	tl5=tl5+"=";
	cont_tl++;
}
if(ql==qlt){
	ql5="=";
	ql5=ql5+ql;
	ql5=ql5+"=";
	cont_ql++;
}
if(qil==qilt){
	qil5="=";
	qil5=qil5+qil;
	qil5=qil5+"=";
	cont_qil++;
}
//- e |
if(cont_pl==0){
	if(pl==slt&&sl!=slt){
		pl5="-";
		pl5=pl5+pl;      //1
		pl5=pl5+"-";
		cont_pl0++;
		pl0=pl;
	}
	if(pl==tlt&&tl!=tlt){
		pl5="-";          //2
		pl5=pl5+pl;
		pl5=pl5+"-";
		cont_pl0++;
		pl0=pl;
	}
	if(pl==qlt&&ql!=qlt){
		pl5="-";
		pl5=pl5+pl;
		pl5=pl5+"-";
		cont_pl0++;
		pl0=pl;
	}
	if(pl==qilt&&qil!=qilt){
		pl5="-";
		pl5=pl5+pl;             //3
		pl5=pl5+"-";
		cont_pl0++;
		pl0=pl;
	}
}
if(cont_sl==0){
	if(sl==plt&&pl!=plt){
		sl5="-";
		sl5=sl5+sl;
		sl5=sl5+"-";
		cont_sl0++;
		sl0=sl;
		if(cont_pl0==1&&sl==pl0){
		    sl5=" ";
            sl5=sl5+sl;
            sl5=sl5+" ";	
		}
	}
	if(sl==tlt&&tl!=tlt){
		sl5="-";
		sl5=sl5+sl;
		sl5=sl5+"-";
		cont_sl0++;
		sl0=sl;
	    if(cont_pl0==1&&sl==pl0){
		    sl5=" ";
            sl5=sl5+sl;
            sl5=sl5+" ";	
		}
	}
	if(sl==qlt&&ql!=qlt){	
		sl5="-";
		sl5=sl5+sl;
		sl5=sl5+"-";
		cont_sl0++;
		sl0=sl;
		if(cont_pl0==1&&sl==pl0){
		    sl5=" ";
            sl5=sl5+sl;
            sl5=sl5+" ";	
		}
	}
	if(sl==qilt&&qil!=qilt){
		sl5="-";
		sl5=sl5+sl;
		sl5=sl5+"-";
		cont_sl0++;
		sl0=sl;
	    if(cont_pl0==1&&sl==pl0){
		    sl5=" ";
            sl5=sl5+sl;
            sl5=sl5+" ";	
		}
	}
	
}
if(cont_tl==0){
	if(tl==plt&&pl!=plt){
		tl5="-";
		tl5=tl5+tl;
		tl5=tl5+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl5=" ";
			tl5=tl5+tl;
			tl5=tl5+" ";
		}
	}
	if(tl==slt&&sl!=slt){
		tl5="-";
		tl5=tl5+tl;
		tl5=tl5+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl5=" ";
			tl5=tl5+tl;
			tl5=tl5+" ";
		}
	}
	if(tl==qlt&&ql!=qlt){
		tl5="-";
		tl5=tl5+tl;
		tl5=tl5+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl5=" ";
			tl5=tl5+tl;
			tl5=tl5+" ";
		}
	}
	if(tl==qilt&&qil!=qilt){
		tl5="-";
		tl5=tl5+tl;
		tl5=tl5+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl5=" ";
			tl5=tl5+tl;
			tl5=tl5+" ";
		}
	}
	
}
if(cont_ql==0){
	if(ql==plt&&pl!=plt){
		ql5="-";
		ql5=ql5+ql;
		ql5=ql5+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql5=" ";
			ql5=ql5+ql;
			ql5=ql5+" ";
		}
	}
	if(ql==slt&&sl!=slt){
		ql5="-";
		ql5=ql5+ql;
		ql5=ql5+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql5=" ";
			ql5=ql5+ql;
			ql5=ql5+" ";
		}
	}
	if(ql==tlt&&tl!=tlt){
		ql5="-";
		ql5=ql5+ql;
		ql5=ql5+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql5=" ";
			ql5=ql5+ql;
			ql5=ql5+" ";
		}
	}
	if(ql==qilt&&qil!=qilt){
		ql5="-";
		ql5=ql5+ql;
		ql5=ql5+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql5=" ";
			ql5=ql5+ql;
			ql5=ql5+" ";
		}
	}
}
if(cont_qil==0){
	if(qil==plt&&pl!=plt){
		qil5="-";
		qil5=qil5+qil;
		qil5=qil5+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil5=" ";
			qil5=qil5+qil;
			qil5=qil5+" ";
		}
	}
	if(qil==slt&&sl!=slt){
		qil5="-";
		qil5=qil5+qil;
		qil5=qil5+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil5=" ";
			qil5=qil5+qil;
			qil5=qil5+" ";
		}
	}
	if(qil==tlt&&tl!=tlt){
		qil5="-";
		qil5=qil5+qil;
		qil5=qil5+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil5=" ";
			qil5=qil5+qil;
			qil5=qil5+" ";
		}
	}
	if(qil==qlt&&ql!=qlt){
		qil5="-";
		qil5=qil5+qil;
		qil5=qil5+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil5=" ";
			qil5=qil5+qil;
			qil5=qil5+" ";
		}
	}
	
}
cout<<termo;
system("CLS");
cout<<"          TERMO             \n["<<pl1<<"]["<<sl1<<"]["<<tl1<<"]["<<ql1<<"]["<<qil1<<"]\n\n["<<pl2<<"]["<<sl2<<"]["<<tl2<<"]["<<ql2<<"]["<<qil2<<"]\n\n["<<pl3<<"]["<<sl3<<"]["<<tl3<<"]["<<ql3<<"]["<<qil3<<"]\n\n["<<pl4<<"]["<<sl4<<"]["<<tl4<<"]["<<ql4<<"]["<<qil4<<"]\n\n["<<pl5<<"]["<<sl5<<"]["<<tl5<<"]["<<ql5<<"]["<<qil5<<"]\n\n[   ][   ][   ][   ][   ]\n";
if(pl==plt&&sl==slt&&tl==tlt&&ql==qlt&&qil==qilt){
	cout<<"Parabens, acertou o termo do dia na quinta tentativa\n'0'Para voltar pro menu: ";
	cin>>voltar;
	while(voltar!=0){
		cin>>voltar;
	}
	goto menu;
}
cin>>pl>>sl>>tl>>ql>>qil;
//|
pl6=" ";
pl6=pl6+pl;
pl6=pl6+" ";
sl6=" ";
sl6=sl6+sl;
sl6=sl6+" ";
tl6=" ";
tl6=tl6+tl;
tl6=tl6+" ";
ql6=" ";
ql6=ql6+ql;
ql6=ql6+" ";
qil6=" ";
qil6=qil6+qil;
qil6=qil6+" ";
cont_pl=0;cont_sl=0;cont_tl=0;cont_ql=0;cont_qil=0;
cont_pl0=0;cont_sl0=0;cont_tl0=0;cont_ql0=0;cont_qil0=0;
pl0='*',sl0='*',tl0='*',ql0='*',qil0='*';
//=
if(pl==plt){
	pl6="=";
	pl6=pl6+pl;
	pl6=pl6+"=";
	cont_pl++;
}
if(sl==slt){
	sl6="=";
	sl6=sl6+sl;
	sl6=sl6+"=";
	cont_sl++;
}
if(tl==tlt){
	tl6="=";
	tl6=tl6+tl;
	tl6=tl6+"=";
	cont_tl++;
}
if(ql==qlt){
	ql6="=";
	ql6=ql6+ql;
	ql6=ql6+"=";
	cont_ql++;
}
if(qil==qilt){
	qil6="=";
	qil6=qil6+qil;
	qil6=qil6+"=";
	cont_qil++;
}
//- e |
if(cont_pl==0){
	if(pl==slt&&sl!=slt){
		pl6="-";
		pl6=pl6+pl;      //1
		pl6=pl6+"-";
		cont_pl0++;
		pl0=pl;
	}
	if(pl==tlt&&tl!=tlt){
		pl6="-";          //2
		pl6=pl6+pl;
		pl6=pl6+"-";
		cont_pl0++;
		pl0=pl;
	}
	if(pl==qlt&&ql!=qlt){
		pl6="-";
		pl6=pl6+pl;
		pl6=pl6+"-";
		cont_pl0++;
		pl0=pl;
	}
	if(pl==qilt&&qil!=qilt){
		pl6="-";
		pl6=pl6+pl;             //3
		pl6=pl6+"-";
		cont_pl0++;
		pl0=pl;
	}
}
if(cont_sl==0){
	if(sl==plt&&pl!=plt){
		sl6="-";
		sl6=sl6+sl;
		sl6=sl6+"-";
		cont_sl0++;
		sl0=sl;
		if(cont_pl0==1&&sl==pl0){
		    sl6=" ";
            sl6=sl6+sl;
            sl6=sl6+" ";	
		}
	}
	if(sl==tlt&&tl!=tlt){
		sl6="-";
		sl6=sl6+sl;
		sl6=sl6+"-";
		cont_sl0++;
		sl0=sl;
	    if(cont_pl0==1&&sl==pl0){
		    sl6=" ";
            sl6=sl6+sl;
            sl6=sl6+" ";	
		}
	}
	if(sl==qlt&&ql!=qlt){	
		sl6="-";
		sl6=sl6+sl;
		sl6=sl6+"-";
		cont_sl0++;
		sl0=sl;
		if(cont_pl0==1&&sl==pl0){
		    sl6=" ";
            sl6=sl6+sl;
            sl6=sl6+" ";	
		}
	}
	if(sl==qilt&&qil!=qilt){
		sl6="-";
		sl6=sl6+sl;
		sl6=sl6+"-";
		cont_sl0++;
		sl0=sl;
	    if(cont_pl0==1&&sl==pl0){
		    sl6=" ";
            sl6=sl6+sl;
            sl6=sl6+" ";	
		}
	}
	
}
if(cont_tl==0){
	if(tl==plt&&pl!=plt){
		tl6="-";
		tl6=tl6+tl;
		tl6=tl6+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl6=" ";
			tl6=tl6+tl;
			tl6=tl6+" ";
		}
	}
	if(tl==slt&&sl!=slt){
		tl6="-";
		tl6=tl6+tl;
		tl6=tl6+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl6=" ";
			tl6=tl6+tl;
			tl6=tl6+" ";
		}
	}
	if(tl==qlt&&ql!=qlt){
		tl6="-";
		tl6=tl6+tl;
		tl6=tl6+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl6=" ";
			tl6=tl6+tl;
			tl6=tl6+" ";
		}
	}
	if(tl==qilt&&qil!=qilt){
		tl6="-";
		tl6=tl6+tl;
		tl6=tl6+"-";
		cont_tl0++;
		tl0=tl;
		if(cont_pl0==1&&tl==pl0||cont_sl0==1&&tl==sl0||cont_pl0>=1&&tl==pl0&&cont_sl0>=1&&tl==sl0){
			tl6=" ";
			tl6=tl6+tl;
			tl6=tl6+" ";
		}
	}
	
}
if(cont_ql==0){
	if(ql==plt&&pl!=plt){
		ql6="-";
		ql6=ql6+ql;
		ql6=ql6+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql6=" ";
			ql6=ql6+ql;
			ql6=ql6+" ";
		}
	}
	if(ql==slt&&sl!=slt){
		ql6="-";
		ql6=ql6+ql;
		ql6=ql6+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql6=" ";
			ql6=ql6+ql;
			ql6=ql6+" ";
		}
	}
	if(ql==tlt&&tl!=tlt){
		ql6="-";
		ql6=ql6+ql;
		ql6=ql6+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql6=" ";
			ql6=ql6+ql;
			ql6=ql6+" ";
		}
	}
	if(ql==qilt&&qil!=qilt){
		ql6="-";
		ql6=ql6+ql;
		ql6=ql6+"-";
		cont_ql0++;
		ql0=ql;
		if(cont_pl0==1&&ql==pl0||cont_sl0==1&&ql==sl0||cont_tl0==1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_sl0>=1&&ql==sl0||cont_sl0>=1&&ql==sl0&&cont_tl0>=1&&ql==tl0||cont_pl0>=1&&ql==pl0&&cont_tl0>=1&&ql==tl0){
			ql6=" ";
			ql6=ql6+ql;
			ql6=ql6+" ";
		}
	}
}
if(cont_qil==0){
	if(qil==plt&&pl!=plt){
		qil6="-";
		qil6=qil6+qil;
		qil6=qil6+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil6=" ";
			qil6=qil6+qil;
			qil6=qil6+" ";
		}
	}
	if(qil==slt&&sl!=slt){
		qil6="-";
		qil6=qil6+qil;
		qil6=qil6+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil6=" ";
			qil6=qil6+qil;
			qil6=qil6+" ";
		}
	}
	if(qil==tlt&&tl!=tlt){
		qil6="-";
		qil6=qil6+qil;
		qil6=qil6+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil6=" ";
			qil6=qil6+qil;
			qil6=qil6+" ";
		}
	}
	if(qil==qlt&&ql!=qlt){
		qil6="-";
		qil6=qil6+qil;
		qil6=qil6+"-";
		cont_qil0++;
		qil0=qil;
		if(cont_pl0==1&&qil==pl0||cont_sl0==1&&qil==sl0||cont_tl0==1&&qil==tl0||cont_ql0==1&&qil==ql0||
		cont_pl0>=1&&qil==pl0&&cont_sl0>=1&&qil==sl0||cont_pl0>=1&&qil==pl0&&cont_tl0>=1&&qil==tl0||cont_pl0>=1&&qil==pl0&&cont_ql0>=1&&qil==ql0||
		cont_sl0>=1&&qil==sl0&&cont_tl0>=1&&qil==tl0||cont_sl0>=1&&qil==sl0&&cont_ql0>=1&&qil==ql0||cont_tl0>=1&&qil==tl0&&cont_ql0>=1&&qil==ql0){
			qil6=" ";
			qil6=qil6+qil;
			qil6=qil6+" ";
		}
	}
	
}
cout<<termo;
system("CLS");
cout<<"          TERMO             \n["<<pl1<<"]["<<sl1<<"]["<<tl1<<"]["<<ql1<<"]["<<qil1<<"]\n\n["<<pl2<<"]["<<sl2<<"]["<<tl2<<"]["<<ql2<<"]["<<qil2<<"]\n\n["<<pl3<<"]["<<sl3<<"]["<<tl3<<"]["<<ql3<<"]["<<qil3<<"]\n\n["<<pl4<<"]["<<sl4<<"]["<<tl4<<"]["<<ql4<<"]["<<qil4<<"]\n\n["<<pl5<<"]["<<sl5<<"]["<<tl5<<"]["<<ql5<<"]["<<qil5<<"]\n\n["<<pl6<<"]["<<sl6<<"]["<<tl6<<"]["<<ql6<<"]["<<qil6<<"]\n";
if(pl==plt&&sl==slt&&tl==tlt&&ql==qlt&&qil==qilt){
	cout<<"Parabens, acertou o termo do dia na ultima tentativa\n'0'Para voltar pro menu: ";
	cin>>voltar;
	while(voltar!=0){
		cin>>voltar;
	}
	goto menu;
}
else{
	cout<<"Nao foi dessa vez... \n '0'Para voltar pro menu: ";
	cin>>voltar;
	while(voltar!=0){
		cin>>voltar;
	}
	goto menu;
}
}
}
