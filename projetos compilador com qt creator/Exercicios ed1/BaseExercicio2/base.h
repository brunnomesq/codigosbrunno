#ifndef BASE_H
#define BASE_H
#include <QString>

namespace brn{
class Base
{
private:
    int num;
    int base;
public:
    Base(int num);
    void setBase(int b);
    QString baseAlterar();
};
}
#endif // BASE_H
