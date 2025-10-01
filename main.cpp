#include <iostream>
#include <string>
#include "point.h"
#include "shape.h"
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
    
}

int main() { 
    getShapeChoice();    
    return 0;
    
}