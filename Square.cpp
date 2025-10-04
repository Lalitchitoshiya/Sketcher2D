#include <vector>
#include "Point.h"
#include "Square.h"
#include <cmath>
using namespace std;


Square::Square(Point p1, double side) : 
    P1(p1),
    s(side){
    P2 = Point(P1.a + s, P1.b); 
    P3 = Point(P1.a + s, P1.b + s);
    P4 = Point(P1.a, P1.b + s);
}


vector<double> Square::getCoords() {
        vector<double> coords;
        coords.push_back(P1.a);
        coords.push_back(P1.b);
        coords.push_back(P2.a);
        coords.push_back(P2.b);
        coords.push_back(P3.a);
        coords.push_back(P3.b);
        coords.push_back(P4.a);
        coords.push_back(P4.b);
        coords.push_back(P1.a);
        coords.push_back(P1.b);
    return {coords};
}