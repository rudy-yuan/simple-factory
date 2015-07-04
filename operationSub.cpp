#include "operationSub.h"

OperationSub::OperationSub():Operation()
{
/*
	numberA = 0.0;
	numberB = 0.0;
*/
}

OperationSub::OperationSub(double numberA, double numberB):Operation(numberA, numberB)
{
/*
	this->numberA = numberA;
	this->numberB = numberB;
*/
}

double OperationSub::GetResult(void)
{
	return getNumberA() - getNumberB();
}