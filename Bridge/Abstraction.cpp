#include "stdafx.h"
#include "Abstraction.h"
#include "Implementor.h"

Abstraction::Abstraction():
    implementor(NULL)
{
}


Abstraction::~Abstraction()
{
    delete implementor;
}

void Abstraction::Operation()
{
    if (implementor != NULL)
    {
      implementor->OperationImp();
    }
}

//for the sake of not adding other pattern classes (i.e. AbstractFactory) to implement
//this pattern, I've simplified this class to have a simple setter for setting the implementor
void Abstraction::SetImplementor(Implementor* _implementor)
{
    implementor = _implementor;
}