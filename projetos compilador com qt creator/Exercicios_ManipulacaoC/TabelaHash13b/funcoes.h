#ifndef FUNCOES_H
#define FUNCOES_H

#include <QString>
#include <docentes.h>
#include <llde.h>

namespace ed2 {
    class Funcoes {
    private:
        int tamanho;
        int colisoes;
        int chave;
        LLDE **tabela;

    public:
        Funcoes(int tamanho, int colisoes);
        ~Funcoes();

        int obterTamanho() const;
        int obterColisoes() const;
        int obterChave(int matricula);
        int obterTamanhoDasChaves(int pos) const;
        int obterPosicaoNaChave();
        int calcularChave(int matricula);

        Docentes obterDados(int pos, int chave) const;
        void gerar(Docentes lista, QString nome);
        void ajustarMatricula();

        int calcularNumeroPrimo(int numero, int colisoes);
        int buscaLetra(int matricula);
        int buscarSequencialNome(QString nome, int ASCII);
        int buscarSequencialMatricula(int matricula, int ASCII);

        int encontrarPosicao(QString opcao, QString texto, QString texto2, QString letra);
        int encontrarChave(int pos, QString opcao, QString texto, QString texto2);

        void remover(int matricula, QString nome, QString letra);
        void inserir(int matricula, QString nome, QString departamento, QString titulacao, QString tipo, QString letra);
        void alterar(int matricula, QString nome, QString departamento, QString titulacao, QString tipo, QString letra);
    };
}

#endif // FUNCOES_H
