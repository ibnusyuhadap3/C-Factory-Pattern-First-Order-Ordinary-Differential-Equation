#ifndef INTERFACENUMERIK_H
#define INTERFACENUMERIK_H

#include "interfacePDB1.h"

class interfaceNumerik
{
    protected:
        interfacePDB1* soal;
        double k1(double t,double y){
            return soal->f(t,y);
        };
        virtual double k2(double,double,double){return 0.0;};
        virtual double k3(double,double,double){return 0.0;};
        virtual double k4(double,double,double){return 0.0;};
	public:
        interfaceNumerik(interfacePDB1*){};
        virtual double calculate(double,double,double,int) = 0;
		virtual ~interfaceNumerik(){};
};

#endif
