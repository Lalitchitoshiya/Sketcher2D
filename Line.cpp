#include <vector>
#include "Point.h"
#include "Line.h"
using namespace std;

Line::Line(Point p1,Point p2): P1(p1),P2(p2) {}

vector<double> Line::getCoords() {
        vector<double> coords;
        coords.push_back(P1.a);
        coords.push_back(P1.b);
        coords.push_back(P2.a);
        coords.push_back(P2.b);
    return {coords};
}