#include "dados.h"
namespace brn{
int Dados::getMatricula() const
{
    return matricula;
}

void Dados::setMatricula(int newMatricula)
{
    matricula = newMatricula;
}

const QString &Dados::getNome() const
{
    return nome;
}

void Dados::setNome(const QString &newNome)
{
    nome = newNome;
}

const QString &Dados::getDepartamento() const
{
    return departamento;
}

void Dados::setDepartamento(const QString &newDepartamento)
{
    departamento = newDepartamento;
}

const QString &Dados::getTitulacao() const
{
    return titulacao;
}

void Dados::setTitulacao(const QString &newTitulacao)
{
    titulacao = newTitulacao;
}

const QString &Dados::getTipo_de_contrato() const
{
    return tipo_de_contrato;
}

void Dados::setTipo_de_contrato(const QString &newTipo_de_contrato)
{
    tipo_de_contrato = newTipo_de_contrato;
}

Dados::Dados():
    matricula(0),
    nome(""),
    departamento(""),
    titulacao(""),
    tipo_de_contrato("")
{
}
Dados::Dados(int matricula,QString nome, QString departamento, QString titulacao, QString tipo_de_contrato):
    matricula(matricula),
    nome(nome),
    departamento(departamento),
    titulacao(titulacao),
    tipo_de_contrato(tipo_de_contrato)
{
}

}
