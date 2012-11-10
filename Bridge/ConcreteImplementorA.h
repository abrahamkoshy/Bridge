#pragma once

#include "Implementor.h"

class ConcreteImplementorA : public Implementor
{
public:
    ConcreteImplementorA();
    ~ConcreteImplementorA();

    void OperationImp() {};
};

