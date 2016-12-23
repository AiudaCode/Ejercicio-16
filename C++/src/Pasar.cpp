#include "Pasar.h"

Pasar::Pasar()
{
    //ctor
}

Pasar::~Pasar()
{
   //dtor
}

void Pasar::pasarNumero()
{
    //Supongamos que a = 5 y b = 2.
    a = a + b;//A la variable a(5) se le asigna a(5) + b(2) = 7.
    b = a - b;//A la variable b(2) se le asigna a(7) - b(2) = 5.
    a = a - b;//A la variable a(7) se le asigna a(7) - b(5) = 2.
}

void Pasar::setA(int val)
{
    //Se le asigna val a la variable a.
    a = val;
}

int Pasar::getA()
{
    //Se reetorna el valor de a.
    return a;
}

void Pasar::setB(int val)
{
    //se le asigna val a la variable b.
    b = val;
}

int Pasar::getB()
{
    //se retorna el valor de b.
    return b;
}
