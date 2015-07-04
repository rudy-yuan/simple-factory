#include "operation.h"

Operation::Operation()
{
	numberA = 0.0;
	numberB = 0.0;
}

Operation::Operation(double numberA, double numberB)
{
	this->numberA = numberA;
	this->numberB = numberB;
}

void Operation::setNumberA(double numberA)
{
	this->numberA = numberA;
}

void Operation::setNumberB(double numberB)
{
	this->numberB = numberB;
}

double Operation::getNumberA()
{
	return numberA;
}

double Operation::getNumberB()
{
	return numberB;
}