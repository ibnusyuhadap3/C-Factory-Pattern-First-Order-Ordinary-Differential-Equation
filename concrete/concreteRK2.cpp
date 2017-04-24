#include "concreteRK2.h"
#include "interfacePDB1.h"
#include "interfaceNumerik.h"

concreteRK2::concreteRK2(interfacePDB1* pdb1) : interfaceNumerik(pdb1)
{
    soal = pdb1;
}

double concreteRK2::k2(double t,double y,double h)
{
    return soal->f(t + 0.50 * h, y + 0.50 * h* k1(t,y));
}

double concreteRK2::calculate(double t0, double y0, double h, int N)
{
    double t, y;
    t = t0; y = y0;
    for (int i = 1; i < N; i++)
    {
        t = t + h;
        y = y + h * k2(t,y,h);
    }
    return y;
}



