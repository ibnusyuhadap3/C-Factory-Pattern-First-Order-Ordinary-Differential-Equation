#include "concreteRK2.h"
#include "concreteRK4.h"
#include "numerik.h"
#include "interfacePDB1.h"
#include "interfaceNumerik.h"
#include "concreteEuler.h"
#include "concreteSoal1.h"
#include "concreteSoal2.h"

interfacePDB1* numerik::callProblem(int select)
{
	if(select == 1) return new concreteSoal1;
	if(select == 2) return new concreteSoal2;
	return 0;
}

void numerik::setPDB1(int select, int metode)
{
    problem = callProblem(select);
	cara = callNumerik(metode);
}

interfaceNumerik* numerik::callNumerik(int metode)
{
    if(metode == 1) return new concreteEuler(problem);
	if(metode == 2) return new concreteRK2(problem);
    if(metode == 3) return new concreteRK4(problem);    
	return 0;
}

double numerik::compute(double t0, double y0, double h, int N)
{
    return cara->calculate(t0,y0,h,N);
}

double numerik::solve(int select, int metode, double t0, double y0, double h, int N)
{
    setPDB1(select,metode);
    return compute(t0,y0,h,N);
}
