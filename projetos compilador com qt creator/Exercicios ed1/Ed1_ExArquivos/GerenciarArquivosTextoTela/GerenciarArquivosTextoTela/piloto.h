#ifndef PILOTO_H
#define PILOTO_H

#include <QString>
namespace  ejm {//incio
class Piloto
{
    //Atributos
private:
    int codigo;
    QString nome;
    QString pais;
    int idade;
    QString equipe;
    QString motor;
public:
    Piloto();
    Piloto(int codigo,QString nome, QString pais, int idade, QString equipe,
           QString motor);
    int getCodigo() const;
    void setCodigo(int newCodigo);
    const QString &getNome() const;
    void setNome(const QString &newNome);
    const QString &getPais() const;
    void setPais(const QString &newPais);
    int getIdade() const;
    void setIdade(int newIdade);
    const QString &getEquipe() const;
    void setEquipe(const QString &newEquipe);
    const QString &getMotor() const;
    void setMotor(const QString &newMotor);
    QString toString()const;
};
}//fim

#endif // PILOTO_H
