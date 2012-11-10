#pragma once

#include "Implementor.h"

class ConcreteImplementorB : public Implementor
{
public:
    ConcreteImplementorB();
    ~ConcreteImplementorB();

    void OperationImp() {};
};

