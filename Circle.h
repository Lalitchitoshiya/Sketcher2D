#pragma once

#include <iostream>
#include <vector>
#include "Point.h"

using namespace std;

class Circle {

public:
    Point center;
    double r;

    Circle(Point c, double radius);
    vector<double> getCoords();

};