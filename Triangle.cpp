#include <iostream>
#include "Point.h"
#include "Triangle.h"
#include <vector>

using namespace std;

Triangle::Triangle(Point p1, Point p2, Point p3) :
    P1(p1),
    P2(p2),
    P3(p3) {
}

vector<double> Triangle::getCoords() {
    vector<double> coords;
    coords.push_back(P1.a);
    coords.push_back(P1.b);
    coords.push_back(P2.a);
    coords.push_back(P2.b);
    coords.push_back(P3.a);
    coords.push_back(P3.b);
    coords.push_back(P1.a);
    coords.push_back(P1.b);
    return coords;
}
