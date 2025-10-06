#include <iostream>
#include "Point.h"
#include "Circle.h"
#include <vector>
#include <cmath>

using namespace std;

Circle::Circle(Point c, double radius) :
    center(c),
    r(radius) {
}

vector<double> Circle::getCoords() {
    vector<double> coords;
    int numPoints = 50;
    
    for (int i = 0; i <= numPoints; i++) {
        double angle = 2 * (3.14159) * i / numPoints;
        coords.push_back(center.a + r * cos(angle));
        coords.push_back(center.b + r * sin(angle));
    }
    
    return coords;
}
