#include "operationAdd.h"

OperationADD::OperationADD():Operation()
{
/*
	numberA = 0.0;
	numberB = 0.0;
*/

}

// ע�����๹�캯���Ķ��巽������
OperationADD::OperationADD(double numberA, double numberB):Operation(numberA, numberB)
{
/*
	this->numberA = numberA;
	this->numberB = numberB;
*/

}

double OperationADD::GetResult(void)
{
	return getNumberA() + getNumberB();
}