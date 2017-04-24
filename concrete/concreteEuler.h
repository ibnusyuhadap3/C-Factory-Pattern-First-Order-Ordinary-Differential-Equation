#ifndef CONCRETEEULER_H
#define CONCRETEEULER_H

#include "interfaceNumerik.h"
#include "interfacePDB1.h"

class concreteEuler : public interfaceNumerik
{
	public:
        concreteEuler(interfacePDB1*);
        double calculate(double,double,double,int);
        virtual ~concreteEuler(){};
};

#endif
