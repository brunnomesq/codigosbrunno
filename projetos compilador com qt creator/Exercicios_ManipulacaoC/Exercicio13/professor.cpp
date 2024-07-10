#include "professor.h"
namespace ed{
int Professor::getMatricula()
{
    return matricula;
}

void Professor::setMatricula(int newMatricula)
{
    matricula = newMatricula;
}

QString Professor::getNome()
{
    return nome;
}

void Professor::setNome(QString newNome)
{
    nome = newNome;
}

QString Professor::getDepartamento()
{
    return departamento;
}

void Professor::setDepartamento(QString newDepartamento)
{
    departamento = newDepartamento;
}

QString Professor::getTitulacao()
{
    return titulacao;
}

void Professor::setTitulacao(QString newTitulacao)
{
    titulacao = newTitulacao;
}

QString Professor::getTipo_de_contrato()
{
    return tipo_de_contrato;
}

void Professor::setTipo_de_contrato(QString newTipo_de_contrato)
{
    tipo_de_contrato = newTipo_de_contrato;
}

Professor::Professor():
    matricula(0),
    nome(""),
    departamento(""),
    titulacao(""),
    tipo_de_contrato("")
{
}
Professor::Professor(int matricula,QString nome, QString departamento, QString titulacao, QString tipo_de_contrato):
    matricula(matricula),
    nome(nome),
    departamento(departamento),
    titulacao(titulacao),
    tipo_de_contrato(tipo_de_contrato)
{


}
QString Professor::toString(){
    QString dado="Matricula "+QString::number(matricula)+
            ";\n"+nome+";\n"+departamento+
            ";\n"+titulacao+";\n"+tipo_de_contrato+".";
    return dado;
}
}
