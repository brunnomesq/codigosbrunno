#ifndef MANIPULARARQUIVO_H
#define MANIPULARARQUIVO_H
#include <fstream>
#include <cctype>
#include <QString>
namespace TP2{

class ManipularArquivo
{
private:
    char ch;
    QString entrada;
    QString saida;
public:
    ManipularArquivo();
    char inverterCapitalizacao(char newCh);
    void processFile(const QString& arquivoEntradaNome, const QString& arquivoSaidaNome);
    const QString &getEntrada() const;
    const QString &getSaida() const;
};
}

#endif // MANIPULARARQUIVO_H
