#include "concreteRK4.h"
#include "interfacePDB1.h"
#include "interfaceNumerik.h"

concreteRK4::concreteRK4(interfacePDB1* pdb1) : interfaceNumerik(pdb1)
{
    soal = pdb1;
}

double concreteRK4::k2(double t,double y,double h)
{
    return soal->f(t + 0.50 * h, y + 0.50 * h* k1(t,y));
}

double concreteRK4::k3(double t, double y, double h)
{
    return soal->f(t + 0.50 * h, y + 0.50 * h* k2(t,y,h));
}

double concreteRK4::k4(double t, double y, double h)
{
    return soal->f(t + h, y + h* k1(t,y));    
}


double concreteRK4::calculate(double t0, double y0, double h, int N)
{
    double t, y;
    t = t0; y = y0;
    for (int i = 1; i < N; i++)
    {
        t = t + h;
        y = y + h * ( k1(t,y) + 2.0*k2(t,y,h) + 2.0*k3(t,y,h) + k4(t,y,h) ) / 6.0;
    }
    return y;
}
