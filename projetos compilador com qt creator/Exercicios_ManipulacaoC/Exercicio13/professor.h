#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <QString>
namespace ed{
class Professor
{
private:
    int matricula;
    QString nome;
    QString departamento;
    QString titulacao;
    QString tipo_de_contrato;

public:
    Professor();
    Professor(int matricula,QString nome, QString departamento, QString titulacao, QString tipo_de_contrato);
    int getMatricula() ;
    void setMatricula(int newMatricula);
    QString getNome() ;
    void setNome(QString newNome);
    QString getDepartamento() ;
    void setDepartamento(QString newDepartamento);
    QString getTitulacao() ;
    void setTitulacao(QString newTitulacao);
    QString getTipo_de_contrato();
    void setTipo_de_contrato(QString newTipo_de_contrato);
    QString toString();
};
}

#endif // PROFESSOR_H
