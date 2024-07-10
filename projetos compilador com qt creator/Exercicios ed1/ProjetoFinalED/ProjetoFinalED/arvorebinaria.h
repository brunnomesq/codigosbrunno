#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H
#include<no.h>
#include<QString>
#include<iostream>
#include<IArvoreBinaria.h>
namespace les{
class ArvoreBinaria : public IArvoreBinaria
{
    //atributos
private:
    No* raiz;
    QString saida;


    //Metodos
private:

    void inserirRecursivo(No **raiz, QString elemento);
    void removerRecursivo(No **raiz, QString elemento);
    void emOrdem(No* raiz);
    QString retornar_Maior(No **raiz);

public:
    ArvoreBinaria();
    ~ArvoreBinaria();
    void inserir(QString elemento){this->inserirRecursivo(&raiz,elemento);}
    void remover(QString elemento){this->removerRecursivo(&raiz, elemento);}
    QString imprimir(){saida = ""; emOrdem(raiz); return saida;}
    No* getRaiz()const{return raiz;}
    void setSaida(const QString &newSaida){saida = newSaida;}
    QString getSaida() const {return saida;}

};
}
#endif // ARVOREBINARIA_H
