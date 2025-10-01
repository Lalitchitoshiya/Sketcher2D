#pragma once
#include <iostream>
#include <vector>
#include "Point.h"
using namespace std;

class Rectangle {
    public:
        Point P1;
        Point P3;
        Point P2;
        Point P4;
        double l,w;

        Rectangle(Point p1, Point p3);
        Rectangle(Point p1, double length,double width);
        vector<double> getCoords();
};