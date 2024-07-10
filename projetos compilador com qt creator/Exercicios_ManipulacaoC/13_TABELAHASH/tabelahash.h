#ifndef TABELAHASH_H
#define TABELAHASH_H
#include <QString>
#include <dados.h>
#include <llde.h>
namespace brn{
class TabelaHash
{
private:
    int tamanho;
    int colisoes;
    int chave;
    LLDE **tabela;
public:
    TabelaHash(int tamanho, int colisoes);
    ~TabelaHash();

    int getTamanho() const;
    int getColisoes()const;
    int getChave(int matricula) ;
    int getTamanhoDasChaves(int pos) const;
    int getPosicaoNaChave();
    int CalcularChave(int matricula);


    Dados getDados(int pos,int chave)const;
    void gerador(Dados lista, int pos);
    void ajustarMatri();

    int calcularNumeroPrimo(int numero,int colisoes);

    int buscaSequencialN(QString nome);
    int buscaSequencialM(int matricula);


    int encontrarPos(QString opcao, QString texto, QString texto2);
    int encontrarChave(int pos,QString opcao, QString texto, QString texto2);

    void remover(int matricula, QString nome);
    void inserir(int matricula, QString nome,QString departamento, QString titulacao, QString tipo);
    void alterar(int matricula, QString nome,QString departamento, QString titulacao, QString tipo);

   /* void selectionSortMatricula();
    void selectionSortNome();
    void selectionSortDepartamento();
    void selectionSortTitulacao();
    void selectionSortTipoDeContrato();
    void selectionSortDepTitNome();
    void selectionSortDepTipNome();*/
};

}


#endif // TABELAHASH_H
