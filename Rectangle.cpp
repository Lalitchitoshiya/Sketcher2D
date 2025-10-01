#include <vector>
#include "Point.h"
#include "Rectangle.h"
#include <cmath>
using namespace std;

Rectangle::Rectangle(Point p1,Point p3): P1(p1),P3(p3),P2(P1.a,P3.b),P4(P3.a,P1.b) {
    l = abs(P3.a-P1.a);
    w = abs(P3.b-P1.b);
}

Rectangle::Rectangle(Point p1, double length, double width) : 
    P1(p1),
    l(length),
    w(width){
    P2 = Point(P1.a + l, P1.b); 
    P3 = Point(P1.a + l, P1.b + w);
    P4 = Point(P1.a, P1.b + w);
}


vector<double> Rectangle::getCoords() {
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