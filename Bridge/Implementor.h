#pragma once

class Implementor
{
public:
    Implementor();
    virtual ~Implementor();

    virtual void OperationImp() = 0;
};

