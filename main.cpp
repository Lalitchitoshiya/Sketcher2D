#include <iostream>
#include "Point.h"
#include "Line.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "fileWrite.h"
#include <vector>
using namespace std;

int main() {
    int n;
    cout<< "Enter 1 for line" << endl;
    cout<< "Enter 2 for rectangle (with 2 point)" << endl;
    cout<< "Enter 3 for rectangle (with 1 point, length and width)" << endl;
    cout<< "Enter 4 for square (with 1 point and side)" << endl;
    cout<< "Enter 5 for triangle (with 3 points)" << endl;
    cout<< "Enter 6 for circle (with 1 point and radius)" << endl;
    cin>> n;

    switch(n){
        case (1):{
            double x1,y1,x2,y2;
            cout<< "You have to enter 2 Points" << endl;
            cout<< "enter x1" << endl;
            cin>> x1;
            cout<< "enter y1" << endl;
            cin>> y1;
            cout<< "enter x2" << endl;
            cin>> x2;
            cout<< "enter y2" << endl;
            cin>> y2;
            
            Point P1(x1, y1);
            Point P2(x2, y2);

            Line L (P1,P2);

            vector<double>p = L.getCoords();
            fileWrite fw;
            fw.write(p);
            break;
        }
        case(2):{
            double x1,y1,x3,y3;

            cout<< "You have to enter 2 Points" << endl;
            cout<< "enter x1" << endl;
            cin>> x1;
            cout<< "enter y1" << endl;
            cin>> y1;
            cout<< "enter x3" << endl;
            cin>> x3;
            cout<< "enter y3" << endl;
            cin>> y3;
            
            Point P1(x1, y1);
            Point P3(x3, y3);

            Rectangle R(P1,P3);

            vector<double>p = R.getCoords();
            fileWrite fw;
            fw.write(p);
            break;
        }
        case(3):{
            double x1,y1,l,w;

            cout<< "You have to enter 1 Point, length and width" << endl;
            cout<< "enter x1" << endl;
            cin>> x1;
            cout<< "enter y1" << endl;
            cin>> y1;
            cout<< "enter length" << endl;
            cin>> l;
            cout<< "enter width" << endl;
            cin>> w;
            
            Point P1(x1, y1);

            Rectangle R(P1,l,w);

            vector<double>p = R.getCoords();
            fileWrite fw;
            fw.write(p);
            break;
        }

        case(4):{
            double x1,y1,s;

            cout<< "You have to enter 1 Point and side" << endl;
            cout<< "enter x1" << endl;
            cin>> x1;
            cout<< "enter y1" << endl;
            cin>> y1;
            cout<< "enter side" << endl;
            cin>> s;
            
            Point P1(x1, y1);

            Square S(P1,s);

            vector<double>p = S.getCoords();
            fileWrite fw;
            fw.write(p);
            break;
        }

        case(5):{
            double x1,y1,x2,y2,x3,y3;
            cout<< "You have to enter 3 Points" << endl;
            cout<< "enter x1" << endl;
            cin>> x1;
            cout<< "enter y1" << endl;
            cin>> y1;
            cout<< "enter x2" << endl;
            cin>> x2;
            cout<< "enter y2" << endl;
            cin>> y2;
            cout<< "enter x3" << endl;
            cin>> x3;
            cout<< "enter y3" << endl;
            cin>> y3;
            Point P1(x1, y1);
            Point P2(x2, y2);
            Point P3(x3, y3);
            Triangle T(P1,P2,P3);
            vector<double> p = T.getCoords();
            fileWrite fw;
            fw.write(p);
            break;
        }

        case(6):{
            double x1,y1,r;
            cout<< "You have to enter 1 Point and radius" << endl;
            cout<< "enter x1" << endl;
            cin>> x1;
            cout<< "enter y1" << endl;
            cin>> y1;
            cout<< "enter radius" << endl;
            cin>> r;
            Point P1(x1, y1);
            Circle C(P1,r);
            vector<double> p = C.getCoords();
            fileWrite fw;
            fw.write(p);
            break;
        }

        default:{
            std::cout << "Invalid choice. Please enter a number between 1 and 4." << std::endl;
            break;
        }
    }
    cin.get();
    cin.get();
    return 0;
}
