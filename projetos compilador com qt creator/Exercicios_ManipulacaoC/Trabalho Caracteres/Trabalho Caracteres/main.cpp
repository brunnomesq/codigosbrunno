#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

// Função para inverter a capitalização de um caractere
char inverterCapitalizacao(char ch) 
{
    if (isalpha(ch)) 
    {
        // Se for uma letra, inverte a capitalização usando a tabela ASCII
        if (islower(ch)) 
        {
            return static_cast<char>(ch - 32); // Converte minúscula para maiúscula
        } 
        else if (isupper(ch)) 
        {
            return static_cast<char>(ch + 32); // Converte maiúscula para minúscula
        }
    }
    // Mantém outros caracteres inalterados
    return ch;
}

// Função para processar o arquivo
void processFile(const string& arquivoEntradaNome, const string& arquivoSaidaNome) 
{
    ifstream inputFile(arquivoEntradaNome.c_str());
    ofstream outputFile(arquivoSaidaNome.c_str());

    if (!inputFile.is_open() || !outputFile.is_open()) 
    {
        cerr << "Erro ao abrir os arquivos." << endl;
        return;
    }

    char ch;

    while (!inputFile.eof()) //Enquanto o arquivo nao chegar no final:
    {
        inputFile.get(ch); //inves de pegar linha por linha ele pega caractere por caractere

        // Inverte a capitalização do caractere
        ch = inverterCapitalizacao(ch);
        // Escreve o caractere convertido no arquivo de saída
        outputFile.put(ch);

    }

    inputFile.close();
    outputFile.close();

    cout << "Conversao concluida. Verifique o arquivo '" << arquivoSaidaNome << "'." << endl;
}

int main() 
{
    string arquivoEntradaNome = "entrada.txt";
    string arquivoSaidaNome = "saida.txt";

    processFile(arquivoEntradaNome, arquivoSaidaNome);

    return 0;
}
