#include "manipulararquivo.h"
namespace les {
ManipularArquivo::ManipularArquivo(QString nomeDoArquivo):
    nomeDoArquivoNoDisco(nomeDoArquivo)
{
}


void ManipularArquivo::inserirPalavrasArvore() {
    try {
        ArvoreDePalavras = new ArvoreBinaria();
        std::ifstream arquivo(nomeDoArquivoNoDisco.toStdString().c_str());
        if (!arquivo.is_open()) throw QString("ERRO Arquivo nao pode ser aberto");

        std::string linha;
        while (getline(arquivo, linha)) {
            QString texto = QString::fromStdString(linha);

            // Converter para minúsculas e remover espaços e caracteres especiais
            texto = texto.toLower();
            texto.remove(QRegularExpression("[^\\w\\s]")); // [^] significa nao remover
            // \\w nao remover expressoes alfanumericas (1,d,b) e \\s nao remover espacos

            QStringList strList = texto.split(' ', Qt::SkipEmptyParts);
             // esse skipEmptyParts significa que caso tenha outros espacos alem dos que estao separando
            for (const auto &palavra : strList) {
                ArvoreDePalavras->inserir(palavra);
            }
            //aqui insere dentro de um loop cada palavra
        }
    } catch (const std::bad_alloc &erro) {
        throw QString("Memoria insuficiente");
    }
}

ArvoreBinaria *ManipularArquivo::getArvoreDePalavras() const
{
    return ArvoreDePalavras;
}
}
