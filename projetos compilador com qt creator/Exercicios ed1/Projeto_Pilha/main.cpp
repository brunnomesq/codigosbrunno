
#include <iostream>
#include <pilha.h>
using namespace brn;

int main()
{
try{
int tamanho=5;
Pilha pi(tamanho);
pi.empilhar(10);
pi.empilhar(21);
pi.empilhar(12);
pi.empilhar(13);
pi.empilhar(23);

pi.desempilhar();
pi.desempilhar();

pi.empilhar(97);

int* p=pi.getVet();
int topo=pi.getTopo();

for(int pos=0;pos<=topo;pos++){
        std::cout<<*p<<" ";
        p++;
    }
}catch(const std::runtime_error &mensagem) {
        std::cout << "Erro: " << mensagem.what() << std::endl;
    }
}
