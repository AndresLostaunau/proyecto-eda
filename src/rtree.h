#ifndef PROYECTO_EDA_RTREE_H
#define PROYECTO_EDA_RTREE_H

#include "routeNode.h"

const int N = 3;

/**
 * RTree donde el resto de nodos son también RTrees.
 * Si un nodo se encuentra sin Area se considererará como nodo hoja.
 * El RTree solo utilizará el punto de partida del nodo.
 * */
template <typename T>
class RTree{
private:
    T *root;
    RTree *child[N];
    Area *area;
public:
    RTree():root(nullptr){}
    void insert(T *node)=0;
    void window_search(Point p1, Point p2)=0;
};

#endif //PROYECTO_EDA_RTREE_H
