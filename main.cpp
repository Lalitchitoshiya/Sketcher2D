

#include <iostream>
#include <string>
#include "point.h"
#include "shape.h"
#include "triangle.h"
#include "filewrite.h"


void getShapeChoice() {
    std::string choice;

    std::cout << "Which shape do you want to create? (point / line / triangle / circle): ";
    std::cin >> choice;

    // Convert input to lowercase for consistency
    // for (auto &c : choice) c = tolower(c);

    // Validate input
    while (choice != "point" && choice != "line" && choice != "triangle" && choice != "circle") {
        std::cout << "Invalid choice! Please enter point, line, rectangle, or circle: ";
        std::cin >> choice;
    }


    if (choice == "point") {
        point p;
        std::cout << "Enter x coordinate of point: ";
        std::cin >> p.x;
        std::cout << "Enter y coordinate of point: ";
        std::cin >> p.y;

        std::cout << "You entered Point: (" << p.x << ", " << p.y << ")\n";

        std::vector<point> u;
        u.push_back(p);
        FileWrite f1;
        f1.write(u);


    } 
    else if (choice == "triangle") {
        point p1, p2, p3;

        std::cout << "Enter coordinates for Point 1 (x y): ";
        std::cin >> p1.x >> p1.y;

        std::cout << "Enter coordinates for Point 2 (x y): ";
        std::cin >> p2.x >> p2.y;

        std::cout << "Enter coordinates for Point 3 (x y): ";
        std::cin >> p3.x >> p3.y;

        std::cout << "You entered Triangle with points: \n";
        std::cout << "P1(" << p1.x << ", " << p1.y << ")\n";
        std::cout << "P2(" << p2.x << ", " << p2.y << ")\n";
        std::cout << "P3(" << p3.x << ", " << p3.y << ")\n";
        std::vector<point> t;
        t.push_back(p1);
        t.push_back(p2);
        t.push_back(p3);
        FileWrite f1;
        f1.write(t);
    } 
    
}



int main() {
    getShapeChoice();    
    return 0;
    

}