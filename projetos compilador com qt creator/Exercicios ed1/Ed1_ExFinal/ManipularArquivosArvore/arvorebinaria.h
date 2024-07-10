#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H
#include<no.h>
#include<QString>
#include<iostream>
#include<IArvoreBinaria.h>
namespace ED1{
class ArvoreBinaria : public IArvoreBinaria
{
    //atributos
private:
    No* raiz;
    QString saida;


    //Metodos
private:

    void inserirRecursivo(No **raiz, QString elemento);
    void emOrdem(No* raiz);
    QString retornar_Maior(No **raiz);

public:
    ArvoreBinaria();
    ~ArvoreBinaria();
    void inserir(QString elemento){this->inserirRecursivo(&raiz,elemento);}

    QString imprimir();

    No* getRaiz()const;
    void setSaida(const QString &newSaida);
    QString getSaida() const;

};
}
#endif // ARVOREBINARIA_H
