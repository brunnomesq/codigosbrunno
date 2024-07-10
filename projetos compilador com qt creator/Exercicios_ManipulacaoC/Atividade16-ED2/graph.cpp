#include "graph.h"

Graph::Graph ()
{
    QString filename = "C:/Users/Eliane/C++/Atividade16-ED2/Atividade16-ED2/graph.txt";
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly|QIODevice::Text)) {
        throw file.errorString();
    }
    QString data = file.readLine();
    int s = data.toInt();
    if(s>0){
        this->size=s;
        this->matrix = new int*[s];
        for (int i = 0; i < s; i++) {
            this->matrix[i] = new int[s];
        }
        for (int i = 0; i < s; i++) {
            for (int j = 0; j < s; j++) {
                matrix[i][j] = -1;
            }
        }
    }


    try{
        if(matrix)
            for(int i = 0;i<s &&!file.atEnd();i++){
                data = file.readLine();
                QStringList datalist = data.split(",");
                for(int j = 0; j<s;j++){
                    bool ok;
                    int index = datalist[j].toInt(&ok);
                    if(datalist.isEmpty() == false && matrix[i][j] == -1 && index != 0){
                        matrix[i][j] = index;
                    }
                }
            }
        file.close();
    } catch (std::bad_alloc &err) {
        throw err;
    }
}

void Graph::insert(int position, int position2, int weight){
    if(!matrix) return;

    if(position<0||position2<0) throw QString("position invalid");
    if(position>=size || position2>=size) throw QString("out of scope");
    if(matrix[position][position2]== -1){
        matrix[position][position2] = weight;
        matrix[position2][position] = weight;
    }else{
        throw QString("connection already exits");
    }
}

int Graph::update(int position, int position2, int weight){
    if(!matrix) return -1;
    if(position<0||position2<0) throw QString("position invalid");
    if(position>=size || position2>=size) throw QString("out of scope");
    if(matrix[position][position2]!=-1){
        int old = matrix[position][position2];
        matrix[position][position2] = weight;
        matrix[position2][position] = weight;
        return old;
    }else{
        throw QString("connection does not exits");
    }
}

int Graph::remove(int position, int position2){
    if(!matrix) return -1;
    if(position<0||position2<0) throw QString("position invalid");
    if(position>=size || position2>=size) throw QString("out of scope");
    if(matrix[position][position2]!=-1){
        int old = matrix[position][position2];
        matrix[position][position2] = -1;
        matrix[position2][position] = -1;
        return old;
    }else{
        throw QString("connection does not exits");
    }
}
int Graph::access(int position, int position2){
    if(!matrix) throw QString("matrix is null");
    if(position<0||position2<0) throw QString("position invalid");
    if(position>=size || position2>=size) throw QString("out of scope");
    return matrix[position][position2] ;
}

int Graph::getsize(){
    return size;
}
Graph::~Graph(){
    for (int i = 0; i < size; i++) delete[] matrix[i];
    delete[] matrix;
}
