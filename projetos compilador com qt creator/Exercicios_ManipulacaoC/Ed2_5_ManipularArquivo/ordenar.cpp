#include "ordenar.h"
#include <QString>
#include <ctime>
namespace brn{
Ordenar::Ordenar(int tamanho) : tamanho(tamanho){
    if (tamanho <= 0) throw QString("A quantidade não pode ser menor ou igual a 0");
    try {
        array = new Dados[tamanho];
    } catch (std::bad_alloc &) {
        throw QString("Vetor não pode ser criado");
    }
}
Ordenar::~Ordenar(){
    if(array) delete[] array;
}
int Ordenar::getTamanho() const{
    return tamanho;
}

Dados Ordenar::acessar(int pos){
    return array[pos];
}
QString Ordenar::acessar2(int pos,int valor){
    switch(valor){
    case 1:
        return array[pos].getNome();
    case 2:
        return array[pos].getDepartamento();
    case 3:
        return array[pos].getTitulacao();
    case 4:
        return array[pos].getTipo_de_contrato();
    default:
        return "";
    }
}
void Ordenar::gerador(Dados lista, int pos){
    array[pos]=lista;
}
int Ordenar::buscaSequencialN(QString nome){
    for(int pos=0;pos<getTamanho();pos++){
        if(nome == array[pos].getNome()){
            return pos;
        }
    }
    return -1;
}
int Ordenar::buscaSequencialM(int matricula){
    for(int pos=0;pos<getTamanho();pos++){
        if(matricula == array[pos].getMatricula()){
            return pos;
        }
    }
    return -1;
}

int Ordenar::buscaBinariaN(QString nome){
    int menor = 0;
    int maior = tamanho -1;
    while (menor <= maior) {
        int meio = (menor + maior) / 2;
        if (array[meio].getNome() == nome){
             return meio;
        }
        if (array[menor].getNome() == nome){
            meio=menor;
            return meio;
        }
        if (array[maior].getNome() == nome){
            meio=maior;
            return meio;
        }
        else {
            if (array[menor].getNome() != nome){
            menor = menor + 1;
            }else if (array[maior].getNome() != nome){
            maior = maior - 1;
            }
        }

     }
     return -1;
}
int Ordenar::buscaBinariaM(int matricula){
    int menor = 0;
    int maior = tamanho -1;
    while (menor <= maior) {
        int meio = (menor + maior) / 2;
        if (array[meio].getMatricula() == matricula){
             return meio;
        }
        if (array[menor].getMatricula() == matricula){
            meio=menor;
            return meio;
        }
        if (array[maior].getMatricula() == matricula){
            meio=maior;
            return meio;
        }
        else{
            if (array[menor].getMatricula() != matricula){
                menor = menor + 1;
            }else if (array[maior].getMatricula() != matricula){
                maior = maior - 1;
            }
        }

     }
     return -1;
}
void Ordenar::selection_sort(int v1,int v2,int v3) {
    if(v1!=0){
    for(int pos=0;pos<getTamanho()-1;pos++){
        int minimo=pos;
        for (int i=pos+1;i<getTamanho();i++){
            if(acessar2(i,v1).toLower()<acessar2(minimo,v1).toLower()){
                minimo=i;
            }
        }
        Dados temp= array[pos];
        array[pos]=array[minimo];
        array[minimo]=temp;
    }
    }
    if(v2!=0){
        for (int pos = 0; pos < getTamanho() - 1; pos++) {
            if (acessar2(pos,v1) == acessar2(pos+1,v1)) { //acessar2(pos+1,v1)
                int inicio = pos; //acessar2(pos,v1) acessar2(pos+1,v1)
                while (pos < getTamanho() - 1 && acessar2(pos,v1) == acessar2(pos+1,v1)) {
                    pos++;
                }
                int fim = pos;

                // Usando o algoritmo de seleção para ordenar os nomes
                for (int i = inicio; i < fim; i++) {
                    int minimo = i;
                    for (int j = i + 1; j <= fim; j++) {//acessar2(j,v2) acessar(minimo,v2)
                        if (acessar2(j,v2).toLower() < acessar2(minimo,v2).toLower()) {
                            minimo = j;
                        }
                    }
                    Dados temp = array[i];
                    array[i] = array[minimo];
                    array[minimo] = temp;
                }
            }
        }
    }
    if(v3!=0){ //acessar2(pos,v1) acessar2(pos+1,v1) acessar2(pos,v2) acessar2(pos+1,v2)
        for (int pos = 0; pos < getTamanho() - 1; pos++) {
            if (acessar2(pos,v1) == acessar2(pos+1,v1) &&
                acessar2(pos,v2) == acessar2(pos+1,v2)) {
                int inicio = pos;
                while (pos < getTamanho() - 1 && acessar2(pos,v1) == acessar2(pos+1,v1) &&
                       acessar2(pos,v2) == acessar2(pos+1,v2)) {
                    pos++;
                }
                int fim = pos;

                // Usando o algoritmo de seleção para ordenar por nome
                for (int i = inicio; i < fim; i++) {
                    int minimo = i;
                    for (int j = i + 1; j <= fim; j++) {//acessar2(j,v3) acessar2(minimo,v3)
                        if (acessar2(j,v3).toLower() < acessar2(minimo,v3).toLower()) {
                            minimo = j;
                        }
                    }
                    Dados temp = array[i];
                    array[i] = array[minimo];
                    array[minimo] = temp;
                }
            }
        }
    }
    else if(v1==0&&v2==0&&v3==0){
        for(int pos=0;pos<getTamanho()-1;pos++){
            int minimo=pos;
            for (int i=pos+1;i<getTamanho();i++){
                if(array[i].getMatricula()<array[minimo].getMatricula()){
                    minimo=i;
                }
            }
            Dados temp= array[pos];
            array[pos]=array[minimo];
            array[minimo]=temp;
        }
    }
}

/*void Ordenar::selectionSortMatricula(){
    for(int pos=0;pos<getTamanho()-1;pos++){
        int minimo=pos;
        for (int i=pos+1;i<getTamanho();i++){
            if(array[i].getMatricula()<array[minimo].getMatricula()){
                minimo=i;
            }
        }
        Dados temp= array[pos];
        array[pos]=array[minimo];
        array[minimo]=temp;
    }
}
void Ordenar::selectionSortNome(){
    for(int pos=0;pos<getTamanho()-1;pos++){
        int minimo=pos;
        for (int i=pos+1;i<getTamanho();i++){
            if(array[i].getNome().toLower()<array[minimo].getNome().toLower()){
                minimo=i;
            }
        }
        Dados temp= array[pos];
        array[pos]=array[minimo];
        array[minimo]=temp;
    }
}
void Ordenar::selectionSortDepartamento(){
    for(int pos=0;pos<getTamanho()-1;pos++){
        int minimo=pos;
        for (int i=pos+1;i<getTamanho();i++){
            if(array[i].getDepartamento().toLower()<array[minimo].getDepartamento().toLower()){
                minimo=i;
            }
        }
        Dados temp= array[pos];
        array[pos]=array[minimo];
        array[minimo]=temp;
    }
    // Ordenação por nome dentro do mesmo departamento
        for (int pos = 0; pos < getTamanho() - 1; pos++) {
            if (array[pos].getDepartamento() == array[pos + 1].getDepartamento()) {
                int inicio = pos;
                while (pos < getTamanho() - 1 && array[pos].getDepartamento() == array[pos + 1].getDepartamento()) {
                    pos++;
                }
                int fim = pos;

                // Usando o algoritmo de seleção para ordenar os nomes
                for (int i = inicio; i < fim; i++) {
                    int minimo = i;
                    for (int j = i + 1; j <= fim; j++) {
                        if (array[j].getNome().toLower() < array[minimo].getNome().toLower()) {
                            minimo = j;
                        }
                    }
                    Dados temp = array[i];
                    array[i] = array[minimo];
                    array[minimo] = temp;
                }
            }
        }
}
void Ordenar::selectionSortTitulacao(){
    for(int pos=0;pos<getTamanho()-1;pos++){
        int minimo=pos;
        for (int i=pos+1;i<getTamanho();i++){
            if(array[i].getTitulacao().toLower()<array[minimo].getTitulacao().toLower()){
                minimo=i;
            }
        }
        Dados temp= array[pos];
        array[pos]=array[minimo];
        array[minimo]=temp;
    }
    //parte do nome
    // Ordenação por nome dentro do mesmo departamento
        for (int pos = 0; pos < getTamanho() - 1; pos++) {
            if (array[pos].getTitulacao() == array[pos + 1].getTitulacao()) {
                int inicio = pos;
                while (pos < getTamanho() - 1 && array[pos].getTitulacao() == array[pos + 1].getTitulacao()) {
                    pos++;
                }
                int fim = pos;

                // Usando o algoritmo de seleção para ordenar os nomes
                for (int i = inicio; i < fim; i++) {
                    int minimo = i;
                    for (int j = i + 1; j <= fim; j++) {
                        if (array[j].getNome().toLower() < array[minimo].getNome().toLower()) {
                            minimo = j;
                        }
                    }
                    Dados temp = array[i];
                    array[i] = array[minimo];
                    array[minimo] = temp;
                }
            }
        }
}
void Ordenar::selectionSortTipoDeContrato(){
    for(int pos=0;pos<getTamanho()-1;pos++){
        int minimo=pos;
        for (int i=pos+1;i<getTamanho();i++){
            if(array[i].getTipo_de_contrato().toLower()<array[minimo].getTipo_de_contrato().toLower()){
                minimo=i;
            }
        }
        Dados temp= array[pos];
        array[pos]=array[minimo];
        array[minimo]=temp;
    }
    // Ordenação por nome dentro do mesmo departamento
        for (int pos = 0; pos < getTamanho() - 1; pos++) {
            if (array[pos].getTipo_de_contrato() == array[pos + 1].getTipo_de_contrato()) {
                int inicio = pos;
                while (pos < getTamanho() - 1 && array[pos].getTipo_de_contrato() == array[pos + 1].getTipo_de_contrato()) {
                    pos++;
                }
                int fim = pos;

                // Usando o algoritmo de seleção para ordenar os nomes
                for (int i = inicio; i < fim; i++) {
                    int minimo = i;
                    for (int j = i + 1; j <= fim; j++) {
                        if (array[j].getNome().toLower() < array[minimo].getNome().toLower()) {
                            minimo = j;
                        }
                    }
                    Dados temp = array[i];
                    array[i] = array[minimo];
                    array[minimo] = temp;
                }
            }
        }
}
void Ordenar::selectionSortDepTitNome(){
    // Ordenação por departamento
        for (int pos = 0; pos < getTamanho() - 1; pos++) {
            int minimo = pos;
            for (int i = pos + 1; i < getTamanho(); i++) {
                if (array[i].getDepartamento().toLower() < array[minimo].getDepartamento().toLower()) {
                    minimo = i;
                }
            }
            Dados temp = array[pos];
            array[pos] = array[minimo];
            array[minimo] = temp;
        }

        // Ordenação por titulação dentro do mesmo departamento
        for (int pos = 0; pos < getTamanho() - 1; pos++) {
            if (array[pos].getDepartamento() == array[pos + 1].getDepartamento()) {
                int inicio = pos;
                while (pos < getTamanho() - 1 && array[pos].getDepartamento() == array[pos + 1].getDepartamento()) {
                    pos++;
                }
                int fim = pos;

                // Usando o algoritmo de seleção para ordenar por titulação
                for (int i = inicio; i < fim; i++) {
                    int minimo = i;
                    for (int j = i + 1; j <= fim; j++) {
                        if (array[j].getTitulacao().toLower() < array[minimo].getTitulacao().toLower()) {
                            minimo = j;
                        }
                    }
                    Dados temp = array[i];
                    array[i] = array[minimo];
                    array[minimo] = temp;
                }
            }
        }

        // Ordenação por nome dentro do mesmo departamento e mesma titulação
        for (int pos = 0; pos < getTamanho() - 1; pos++) {
            if (array[pos].getDepartamento() == array[pos + 1].getDepartamento() &&
                array[pos].getTitulacao() == array[pos + 1].getTitulacao()) {
                int inicio = pos;
                while (pos < getTamanho() - 1 && array[pos].getDepartamento() == array[pos + 1].getDepartamento() &&
                       array[pos].getTitulacao() == array[pos + 1].getTitulacao()) {
                    pos++;
                }
                int fim = pos;

                // Usando o algoritmo de seleção para ordenar por nome
                for (int i = inicio; i < fim; i++) {
                    int minimo = i;
                    for (int j = i + 1; j <= fim; j++) {
                        if (array[j].getNome().toLower() < array[minimo].getNome().toLower()) {
                            minimo = j;
                        }
                    }
                    Dados temp = array[i];
                    array[i] = array[minimo];
                    array[minimo] = temp;
                }
            }
        }
}
void Ordenar::selectionSortDepTipNome(){
    // Ordenação por departamento
        for (int pos = 0; pos < getTamanho() - 1; pos++) {
            int minimo = pos;
            for (int i = pos + 1; i < getTamanho(); i++) {
                if (array[i].getDepartamento().toLower() < array[minimo].getDepartamento().toLower()) {
                    minimo = i;
                }
            }
            Dados temp = array[pos];
            array[pos] = array[minimo];
            array[minimo] = temp;
        }

        // Ordenação por titulação dentro do mesmo departamento
        for (int pos = 0; pos < getTamanho() - 1; pos++) {
            if (array[pos].getDepartamento() == array[pos + 1].getDepartamento()) {
                int inicio = pos;
                while (pos < getTamanho() - 1 && array[pos].getDepartamento() == array[pos + 1].getDepartamento()) {
                    pos++;
                }
                int fim = pos;

                // Usando o algoritmo de seleção para ordenar por titulação
                for (int i = inicio; i < fim; i++) {
                    int minimo = i;
                    for (int j = i + 1; j <= fim; j++) {
                        if (array[j].getTipo_de_contrato().toLower() < array[minimo].getTipo_de_contrato().toLower()) {
                            minimo = j;
                        }
                    }
                    Dados temp = array[i];
                    array[i] = array[minimo];
                    array[minimo] = temp;
                }
            }
        }

        // Ordenação por nome dentro do mesmo departamento e mesma titulação
        for (int pos = 0; pos < getTamanho() - 1; pos++) {
            if (array[pos].getDepartamento() == array[pos + 1].getDepartamento() &&
                array[pos].getTipo_de_contrato() == array[pos + 1].getTipo_de_contrato()) {
                int inicio = pos;
                while (pos < getTamanho() - 1 && array[pos].getDepartamento() == array[pos + 1].getDepartamento() &&
                       array[pos].getTipo_de_contrato() == array[pos + 1].getTipo_de_contrato()) {
                    pos++;
                }
                int fim = pos;

                // Usando o algoritmo de seleção para ordenar por nome
                for (int i = inicio; i < fim; i++) {
                    int minimo = i;
                    for (int j = i + 1; j <= fim; j++) {
                        if (array[j].getNome().toLower() < array[minimo].getNome().toLower()) {
                            minimo = j;
                        }
                    }
                    Dados temp = array[i];
                    array[i] = array[minimo];
                    array[minimo] = temp;
                }
            }
        }
}*/
int Ordenar::toString(QString opcao, QString texto) {
    int pos;
    if (opcao == "Busca Sequencial-Nome") {
        QString nome=texto.toUpper();
        pos = buscaSequencialN(nome);
        return pos;
    } else if (opcao == "Busca Sequencial-Matricula") {
        int matricula = texto.toInt(); // Converta a QString para um inteiro
        pos = buscaSequencialM(matricula);
        return pos;
    } else if (opcao == "Busca Binaria-Nome") {
        QString nome=texto.toUpper();
        pos = buscaBinariaN(nome);
        return pos;
    } else if (opcao == "Busca Binaria-Matricula") {
        int matricula = texto.toInt(); // Converta a QString para um inteiro
        pos = buscaSequencialM(matricula);
        return pos;
    }
    return -1;
}

}
