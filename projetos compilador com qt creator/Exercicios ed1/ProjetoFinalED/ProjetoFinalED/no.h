#ifndef NO_H
#define NO_H
#include<QString>
#include<iostream>
namespace les{
class No
{
private:
    QString dado;
    int repeticoes;
public:
    No *direita;
    No *esquerda;
public:
    No(QString dado);
    ~No();
    QString getDado()const{return dado;}
    void setDado(QString dado){this->dado = dado;}
    No* getDireita(){return direita;}
    void setDireita(No* direita){this->direita = direita;}
    No* getEsquerda(){return esquerda;}
    void setEsquerda(No* esquerda){this->esquerda = esquerda;}
    int getRepeticoes() const;
    void setRepeticoes(int newRepeticoes);
};
}

#endif // NO_H
