/*
 * Complexo.cpp
 *
 *  Created on: 8 de mai de 2018
 *      Author: efisi
 */

#include "Complexo.h"

#include <iostream>
#include <stdio.h>
#include <math.h>


Complexo::Complexo(float r, float i){
    real = r;
    im = i;
}

float Complexo::modulo(){
    return sqrt((real*real+im*im));
}

Complexo Complexo::conjugado(){
    return Complexo(real, -im);
}

Complexo Complexo::operator+(Complexo z2){
    return Complexo(real+z2.real, im+z2.im);
}

Complexo Complexo::operator-(Complexo z2){
    return Complexo(real-z2.real, im-z2.im);
}

Complexo Complexo::operator*(Complexo z2){
    return Complexo(real*z2.real-im*z2.im, real*z2.im+im*z2.real);
}

Complexo Complexo::operator/(Complexo z2){
    return Complexo((real*z2.real+im*z2.im)/pow(z2.modulo(), 2), (im*z2.real-real*z2.im)/pow(z2.modulo(), 2));
}




