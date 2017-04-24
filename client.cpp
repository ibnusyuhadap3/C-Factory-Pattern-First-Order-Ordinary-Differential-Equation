#include <iostream>
#include "numerik.h"

using namespace std;

int main()
{
    numerik solusi;
    // solve(int soal, int metode, double t0, double y0, double h, int N)
    // soal = 1 berarti y = -10;
    // soal = 2 berarti y = 2ty;
    // metode = 1 berarti Euler;
    // metode = 2 berarti RK2;
    // metode = 3 berarti RK4;
    cout << solusi.solve(1,1,0.0,1.0,0.01,100) << endl;
    cout << solusi.solve(1,1,0.0,1.0,0.01,200) << endl;
    cout << solusi.solve(2,1,0.0,1.0,0.01,100) << endl;
    cout << solusi.solve(2,2,0.0,1.0,0.01,100) << endl;
    cout << solusi.solve(2,3,0.0,1.0,0.01,100) << endl;
    return 0;
}
