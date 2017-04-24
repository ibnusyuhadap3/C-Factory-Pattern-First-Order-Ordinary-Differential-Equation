#ifndef CONCRETERK2_H
#define CONCRETERK2_H

#include "interfaceNumerik.h"
#include "interfacePDB1.h"

class concreteRK2 : public interfaceNumerik
{
    protected:
        double k2(double , double , double ) override;
	public:
        concreteRK2(interfacePDB1*);
        double calculate(double,double,double,int);
        virtual ~concreteRK2(){};
};

#endif

