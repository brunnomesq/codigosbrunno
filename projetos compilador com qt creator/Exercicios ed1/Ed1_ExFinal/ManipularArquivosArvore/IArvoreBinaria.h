#ifndef IARVOREBINARIA_H
#define IARVOREBINARIA_H
#include <QString>
namespace ED1{
class IArvoreBinaria{
    virtual void inserir(QString elemento) = 0;
    virtual QString imprimir() = 0;
};
}
#endif // IARVOREBINARIA_H
