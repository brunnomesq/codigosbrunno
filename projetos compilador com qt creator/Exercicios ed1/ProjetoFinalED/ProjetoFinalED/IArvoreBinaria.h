#ifndef IARVOREBINARIA_H
#define IARVOREBINARIA_H
#include <QString>
namespace les{
class IArvoreBinaria{
    virtual void inserir(QString elemento) = 0;
    virtual QString imprimir() = 0;
    virtual void remover(QString elemento) = 0;
};
}
#endif // IARVOREBINARIA_H
