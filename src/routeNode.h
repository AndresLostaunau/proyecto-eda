#ifndef PROYECTO_EDA_ROUTENODE_H
#define PROYECTO_EDA_ROUTENODE_H

#include "point.h"

/**
 * Toda la información relevante de una ruta es guardada aquí
 * */
class RouteNode{
private:
    Point start;
    Point finish;
public:
    RouteNode(const Point &start, const Point &finish) : start(start), finish(finish) {}
    const Point &getStart() const {return start;}
    const Point &getFinish() const {return finish;}
};

#endif //PROYECTO_EDA_ROUTENODE_H
