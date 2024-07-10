#include <iostream>
#include <fstream>
#include <string>
#include <cctype> // Para usar a função toupper

int main() {
    // Leitura do arquivo de entrada
    std::string arquivo="C:\Users\brunn\Desktop\Ex_Manipular\testee.txt";
    std::ifstream inputFile(arquivo.c_str());

    // Verifica se o arquivo foi aberto com sucesso
    if (!inputFile.is_open()) {
        std::cerr << "Erro ao abrir o arquivo de entrada." << std::endl;
        return 1;
    }

    // Leitura do conteúdo do arquivo para uma string
    std::string inputContent((std::istreambuf_iterator<char>(inputFile)),
                             (std::istreambuf_iterator<char>()));

    // Manipulação das letras minúsculas para maiúsculas
    for (char &c : inputContent) {
        if (std::islower(c)) {
            c = std::toupper(c);
        }
    }

    // Fechar o arquivo de entrada
    inputFile.close();

    // Escrita do conteúdo manipulado em um novo arquivo
    std::ofstream outputFile(arquivo.c_str());

    // Verifica se o arquivo foi aberto com sucesso
    if (!outputFile.is_open()) {
        std::cerr << "Erro ao abrir o arquivo de saída." << std::endl;
        return 1;
    }

    // Escrever o conteúdo manipulado no arquivo de saída
    outputFile << inputContent;

    // Fechar o arquivo de saída
    outputFile.close();

    std::cout << "Operação concluída com sucesso." << std::endl;

    return 0;
}
