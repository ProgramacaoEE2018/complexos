/**
*****************************************************************************
**
**  File        : main.cpp
**
**  Abstract    : main function.
**
**  Functions   : main
**
**  Distribution: The file is distributed "as is", without any warranty
**                of any kind.
**
**  (c)Copyright Atollic AB.
**  You may use this file as-is or modify it according to the needs of your
**  project. Distribution of this file (unmodified or modified) is not
**  permitted. Atollic AB permit registered Atollic TrueSTUDIO(R) users the
**  rights to distribute the assembled, compiled & linked contents of this
**  file as part of an application binary file, provided that it is built
**  using the Atollic TrueSTUDIO(R) toolchain.
**
**
*****************************************************************************
*/

#include<iostream>

class Complexo{
public:
	Complexo(float real, float im){};
	float Modulo(Complexo z1){return 0.0f;};
	Complexo Conjugado(Complexo z1){return Complexo(0,0);};
	Complexo Soma(Complexo z1, Complexo z2){return Complexo(0,0);};
	Complexo Diferenca(Complexo z1, Complexo z2){return Complexo(0,0);};
	Complexo Produto(Complexo z1, Complexo z2){return Complexo(0,0);};
	Complexo Divisao(Complexo z1, Complexo z2){return Complexo(0,0);};
};

int main(void){
	Complexo z1(1,1);

	return 0;
}
