#include "fileWrite.h"
using namespace std;


void fileWrite::write(vector<double> c) {
    ofstream outFile("coordinates.dat");

    for (int i = 0; i + 1 < c.size(); i += 2) {
        outFile << c[i] << " " << c[i + 1] << endl;
    }

    outFile.close();
}