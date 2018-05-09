/*
 * Complexo.h
 *
 *  Created on: 8 de mai de 2018
 *      Author: efisi
 */

#ifndef COMPLEXO_H_
#define COMPLEXO_H_

#include <iostream>
#include <stdio.h>
#include <math.h>

class Complexo
{
    private:
        float real;
        float im;
    public:
        //contrutor
        Complexo(float,float);
        //metodos
        float modulo();
        Complexo conjugado();
        //void imprimir();

        Complexo operator + (Complexo);
        Complexo operator - (Complexo);
        Complexo operator * (Complexo);
        Complexo operator / (Complexo);
};











#endif /* COMPLEXO_H_ */
