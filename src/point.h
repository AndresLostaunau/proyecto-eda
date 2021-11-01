#ifndef PROYECTO_EDA_POINT_H
#define PROYECTO_EDA_POINT_H

#include <math.h>

class Point{
private:
    double x;
    double y;
public:
    Point(double x, double y) : x(x), y(y) {}
    double getX() const {return x;}
    double getY() const {return y;}
    double distance(double x2, double y2){return pow(pow(x-x2,2)+pow(y-y2,2),1/2);}
    double distance(Point p2){return pow(pow(x-p2.getX(),2)+pow(y-p2.getY(),2),1/2);}
};

/**
 * El área representa un rectangulo por dos puntos, siendo LL el inferior
 * izquierda (lower left) y UR el superior derecha (upper right).
 * */
class Area{
private:
    Point LL;
    Point UR;
public:
    Area(const Point &ll, const Point &ur) : LL(ll), UR(ur) {}
    bool collision(Area a2){return false;}
};

#endif //PROYECTO_EDA_POINT_H
