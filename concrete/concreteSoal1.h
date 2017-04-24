#ifndef CONCRETESOAL1_H
#define CONCRETESOAL1_H

#include "interfacePDB1.h"

class concreteSoal1 : public interfacePDB1
{
	public:
		double f(double t, double y)
		{
			return -10;
		}
		virtual ~concreteSoal1(){};
};

#endif
