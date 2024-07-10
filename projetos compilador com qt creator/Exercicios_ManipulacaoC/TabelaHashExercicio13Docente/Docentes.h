#ifndef DOCENTES_H
#define DOCENTES_H

#include <QString>

namespace ed2 {

class Docentes {
private:
    int matricula;
    QString nome;
    QString departamento;
    QString titulacao;
    QString tipoContrato;

public:
    Docentes() {}
    Docentes(int matricula, QString nome, QString departamento, QString titulacao, QString tipoContrato) :
        matricula(matricula),
        nome(nome),
        departamento(departamento),
        titulacao(titulacao),
        tipoContrato(tipoContrato)
    {}

    int getMatricula() const { return matricula; }
    void setMatricula(int newMatricula) { matricula = newMatricula; }

    const QString &getNome() const { return nome; }
    void setNome(const QString &newNome) { nome = newNome; }

    const QString &getDepartamento() const { return departamento; }
    void setDepartamento(const QString &newDepartamento) { departamento = newDepartamento; }

    const QString &getTitulacao() const { return titulacao; }
    void setTitulacao(const QString &newTitulacao) { titulacao = newTitulacao; }

    const QString &getTipoContrato() const { return tipoContrato; }
    void setTipoContrato(const QString &newTipoContrato) { tipoContrato = newTipoContrato; }

    QString toString() {
        QString dados = "Matricula: " + QString::number(matricula) +
                        "\nNome: " + nome +
                        "\nDepartamento: " + departamento +
                        "\nTitulação: " + titulacao +
                        "\nTipo de Contrato: " + tipoContrato;
        return dados;
    }
};

}

#endif // BRN_DOCENTES_H
