
#pragma once
#include "point.h"
#include <vector>
#include <string>

class circle {
private:
    point center;                   
    double radius;  

    std::vector<point> points;     
public:
    // Constructor
    circle(const point & c, double r, int resolution );
    circle (){}

    // Access circle points
    const std::vector<point>& getPoints() const;

        // Getters

    // Print info
    std::string toString() const;
};
