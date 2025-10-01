#include <iostream>
#include "Point.h"
#include "Line.h"
#include "fileWrite.h"
#include <vector>
using namespace std;

int main() {
    int n;
    cout<< "Enter 1 for line" << endl;
    cin>> n;

    switch(n){
        case 1:
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
    cin.get();
    cin.get();
    return 0;
}
