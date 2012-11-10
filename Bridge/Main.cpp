// Main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Abstraction.h"
#include "ConcreteImplementorA.h"

int _tmain(int argc, _TCHAR* argv[])
{
    Abstraction* abstraction = new Abstraction();
    abstraction->SetImplementor(new ConcreteImplementorA());
    abstraction->Operation();

    //clean up
    delete abstraction;

	return 0;
}

