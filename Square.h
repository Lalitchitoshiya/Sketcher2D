#pragma once
#include <iostream>
#include <vector>
#include "Point.h"
using namespace std;

class Square {
    public:
        Point P1;
        Point P2;
        Point P3;
        Point P4;
        double s;

        Square (Point p1, double side);
        vector<double> getCoords();
};