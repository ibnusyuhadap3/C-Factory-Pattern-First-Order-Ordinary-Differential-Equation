#ifndef CONCRETESOAL2_H
#define CONCRETESOAL2_H

#include "interfacePDB1.h"

class concreteSoal2 : public interfacePDB1
{
	public:
		double f(double t, double y)
		{
			return 2.0 * t * y;
		}
		virtual ~concreteSoal2(){};
};

#endif
