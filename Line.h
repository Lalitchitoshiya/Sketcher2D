#pragma once
#include <iostream>
#include <vector>
#include "Point.h"
using namespace std;

class Line {
    public:
        Point P1;
        Point P2;

        Line(Point p1, Point p2);
        
        vector<Point> getCoords();
};