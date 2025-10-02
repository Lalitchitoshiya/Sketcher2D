#include "Circle.h"
#include <cmath>
#include <sstream>

// Constructor
circle::circle(const point& c, double r, int resolution)
    : center(c), radius(r)   
{
    points.reserve(resolution);
    double step = 2 * 3.14159 / resolution;

    for (int i = 0; i < resolution; i++) {
        double angle = i * step;
        double x = center.x + radius * std::cos(angle);
        double y = center.y + radius * std::sin(angle);
        points.emplace_back(x, y);  
    }
}
// Return points
const std::vector<point>& circle::getPoints() const {
    return points;
}

