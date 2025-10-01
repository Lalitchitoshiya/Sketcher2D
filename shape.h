#pragma once
#include <string>
#include <vector>
#include "point.h"


class Shape {
protected:
    std::string name; // Encapsulation (private/protected data)

public:
    Shape(const std::string& n);
    virtual ~Shape();

    // Common method
    std::string getName() const;
    virtual std::vector<point> getCoordinates() const=0;
};
