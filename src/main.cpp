#include <iostream>
#include "rtree.h"

int main() {
    RTree<RouteNode> rtree;
    // El único dato relevante es el start point
    rtree.insert({2,3,4,5}); //A
    rtree.insert({4,2,1,7}); //B
    rtree.insert({3,6,1,2}); //C
    rtree.insert({1,2,3,4}); //D
    rtree.insert({2,6,2,3}); //E
    rtree.insert({0,2,1,4}); //F
    rtree.insert({1,3,2,4}); //G
    rtree.insert({3,7,5,4}); //H
    rtree.insert({1,1,3,4}); //I
    rtree.insert({1,4,5,6}); //J
    rtree.insert({1,5,5,6}); //K
    rtree.insert({1,6,6,7}); //L
    rtree.insert({1,7,6,7}); //M
    return 0;
}