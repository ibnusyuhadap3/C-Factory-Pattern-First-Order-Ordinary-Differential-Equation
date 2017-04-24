#include "concreteEuler.h"
#include "interfacePDB1.h"
#include "interfaceNumerik.h"

concreteEuler::concreteEuler(interfacePDB1* pdb1) : interfaceNumerik(pdb1)
{
    soal = pdb1;
}

double concreteEuler::calculate(double t0, double y0, double h, int N)
{
    double t, y;
    t = t0; y = y0;
    for (int i = 1; i < N; i++)
    {
        t = t + h;
        y = y + h * k1(t,y);
    }
    return y;
}


