#pragma once

#include <iostream>
#include <vector>
#include "Point.h"

using namespace std;

class Triangle {

public:
    Point P1;
    Point P2;
    Point P3;

    Triangle(Point p1, Point p2, Point p3);
    vector<double> getCoords();

};