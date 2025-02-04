#ifndef DADOS_H
#define DADOS_H
#include <QString>
namespace brn{
class Dados
{
private:
    int matricula;
    QString nome;
    QString departamento;
    QString titulacao;
    QString tipo_de_contrato;

public:
    Dados();
    Dados(int matricula,QString nome, QString departamento, QString titulacao, QString tipo_de_contrato);
    int getMatricula() const;
    void setMatricula(int newMatricula);
    const QString &getNome() const;
    void setNome(const QString &newNome);
    const QString &getDepartamento() const;
    void setDepartamento(const QString &newDepartamento);
    const QString &getTitulacao() const;
    void setTitulacao(const QString &newTitulacao);
    const QString &getTipo_de_contrato() const;
    void setTipo_de_contrato(const QString &newTipo_de_contrato);
};
}
#endif // DADOS_H
