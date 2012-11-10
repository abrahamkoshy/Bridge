#pragma once

class Implementor;

class Abstraction
{
public:
    Abstraction();
    ~Abstraction();

    virtual void Operation ();

    void SetImplementor(Implementor* _implementor);

private:
   Implementor* implementor;
};

