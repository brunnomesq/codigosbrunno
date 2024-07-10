#include "manipulararquivo.h"
namespace ED1 {


ManipularArquivo::ManipularArquivo(QString nomeDoArquivo):
    nomeDoArquivoNoDisco(nomeDoArquivo)
{
}
ArvoreBinaria *ManipularArquivo::getPalavras() const
{
    return Palavras;
}
void ManipularArquivo::buscarDadosNoArquivo() {
    try {
        Palavras = new ArvoreBinaria();
        std::ifstream arquivo(nomeDoArquivoNoDisco.toStdString().c_str());
        if (!arquivo.is_open()){
            throw QString("ERRO Arquivo nao pode ser aberto");
        }
        std::string linha;
        while (getline(arquivo, linha)) {
            QString texto = QString::fromStdString(linha);

            // Converter para minúsculas e remover espaços e caracteres especiais
            texto = texto.toLower();
            texto.remove(QRegularExpression("[^\\p{L}0-9\\s]")); // [^] significa nao remover
            // \\p{L}0-9 nao remover expressoes alfanumericas e com acentos(1,d,b,~,ú) e \\s nao remover espacos

            QStringList strList = texto.split(' ', Qt::SkipEmptyParts);
             // esse skipEmptyParts significa que caso tenha outros espacos alem dos que estao separando
            for (const QString &palavra : strList){
                Palavras->inserir(palavra);
            }
            //aqui insere dentro de um loop cada palavra
        }
    } catch (const std::bad_alloc &erro) {
        throw QString("Memoria insuficiente");
    }
}

}
