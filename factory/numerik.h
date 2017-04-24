#ifndef NUMERIK_H
#define NUMERIK_H

#include "interfacePDB1.h"
#include "interfaceNumerik.h"

class numerik
{
        interfacePDB1 *problem;
		interfaceNumerik *cara;
        interfacePDB1 *callProblem(int);
        interfaceNumerik *callNumerik(int);
        double compute(double,double,double,int);
        void setPDB1(int,int);
    public:
		double solve(int,int,double,double,double,int);
};

#endif
