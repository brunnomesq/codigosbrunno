#include "manipulararquivo.h"
#include <fstream>
namespace TP2 {

ManipularArquivo::ManipularArquivo():ch('-'),entrada(""),saida(""){}

char ManipularArquivo::inverterCapitalizacao(char newCh){
    ch=newCh;
    entrada+=ch;
    if (isalpha(ch)){
            // Se for uma letra, inverte a capitalização usando a tabela ASCII
            if (islower(ch)){
                return static_cast<char>(ch - 32); // Converte minúscula para maiúscula
            }
            else if (isupper(ch)){
                return static_cast<char>(ch + 32); // Converte maiúscula para minúscula
            }
        }
        // Mantém outros caracteres inalterados
        return ch;
}
void ManipularArquivo::processFile(const QString& arquivoEntradaNome, const QString& arquivoSaidaNome)
{
    std::ifstream inputFile(arquivoEntradaNome.toStdString().c_str());
    std::ofstream outputFile(arquivoSaidaNome.toStdString().c_str());

    if (!inputFile.is_open() || !outputFile.is_open())
    {
        throw QString("ERRO Arquivo nao pode ser aberto");
    }

    char ch;

     while (!inputFile.eof()) //Enquanto o arquivo nao chegar no final:
    {
        inputFile.get(ch); //inves de pegar linha por linha ele pega caractere por caractere

        // Inverte a capitalização do caractere
        ch = inverterCapitalizacao(ch);
        // Escreve o caractere convertido no arquivo de saída
        outputFile.put(ch);
        saida += ch;

    }
    /*while (inputFile.get(ch))
    {
        // Inverte a capitalização do caractere
        ch = inverterCapitalizacao(ch);

        // Escreve o caractere convertido no arquivo de saída
        outputFile.put(ch);
        saida+=ch;
    }*/

    inputFile.close();
    outputFile.close();
}

const QString &ManipularArquivo::getSaida() const
{
    return saida;
}

const QString &ManipularArquivo::getEntrada() const
{
    return entrada;
}


}
