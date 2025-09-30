#include <vector>
#include "Point.h"
#include "Line.h"

Line::Line(Point p1,Point p2): P1(p1),P2(p2) {}

std::vector<Point> Line::getCoords() {
    return {P1, P2};
}