#include "docentes.h"
namespace ed2{
int Docentes::getMatricula() const
{
    return matricula;
}

void Docentes::setMatricula(int newMatricula)
{
    matricula = newMatricula;
}

const QString &Docentes::getNome() const
{
    return nome;
}

void Docentes::setNome(const QString &newNome)
{
    nome = newNome;
}

const QString &Docentes::getDepartamento() const
{
    return departamento;
}

void Docentes::setDepartamento(const QString &newDepartamento)
{
    departamento = newDepartamento;
}

const QString &Docentes::getTitulacao() const
{
    return titulacao;
}

void Docentes::setTitulacao(const QString &newTitulacao)
{
    titulacao = newTitulacao;
}

const QString &Docentes::getTipo_de_contrato() const
{
    return tipo_de_contrato;
}

void Docentes::setTipo_de_contrato(const QString &newTipo_de_contrato)
{
    tipo_de_contrato = newTipo_de_contrato;
}

Docentes::Docentes():
    matricula(0),
    nome(""),
    departamento(""),
    titulacao(""),
    tipo_de_contrato("")
{
}
Docentes::Docentes(int matricula,QString nome, QString departamento, QString titulacao, QString tipo_de_contrato):
    matricula(matricula),
    nome(nome),
    departamento(departamento),
    titulacao(titulacao),
    tipo_de_contrato(tipo_de_contrato)
{


}
QString Docentes::toString(){
    QString dado="Matricula: "+QString::number(matricula)+
            "\n"+nome+"\nDepartamento: "+departamento+
            "\nTitulação: "+titulacao+"\nTipo de Contrato: "+tipo_de_contrato;
    return dado;
}
}
