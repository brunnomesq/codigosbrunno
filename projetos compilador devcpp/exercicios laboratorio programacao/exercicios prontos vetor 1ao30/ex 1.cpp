//Fazer  um  algoritmo  que leia  a nota  de  10  alunos  de  uma  disciplina. 
// Calcule  e  escreva  o número  de alunos  que  tiveram notas superior à média da turma.
#include <iostream>
using namespace std;
int main()
{
int j, i;
float v[10],media;
media=0;
i=0;
for(i=0;i<=9;i++){
    cout<<"Digite a nota do aluno "<<i+1<<": ";
    cin>>v[i];
	media=v[i]+media;
}
media=media/10;
cout<<"A media da turma equivale a "<<media<<endl;
for(i=0;i<=9;i++){
    if(v[i]>media){
    	cout<<"O aluno "<<i+1<<" com a nota "<<v[i]<<" possui nota maior que a media"<<endl;
		}
	}
}
