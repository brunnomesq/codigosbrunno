#ifndef GRAPH_H
#define GRAPH_H
#include<QString>
#include<QFile>

class Graph
{
public:
    Graph();
    ~Graph();

    void insert(int position, int position2, int weight);
    int update(int position, int position2, int weight);
    int remove(int position, int position2);
    int access(int position, int position2);
    int getsize();

private:
    int size;
    int **matrix = 0;
};

#endif // GRAPH_H
