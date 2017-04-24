#ifndef CONCRETERK4_H
#define CONCRETERK4_H

#include "interfaceNumerik.h"
#include "interfacePDB1.h"

class concreteRK4 : public interfaceNumerik
{
    protected:
        double k2(double , double , double ) override;
        double k3(double , double , double ) override;
        double k4(double , double , double ) override;
	public:
        concreteRK4(interfacePDB1*);
        double calculate(double,double,double,int);
        virtual ~concreteRK4(){};
};

#endif


