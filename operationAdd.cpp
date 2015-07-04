#include "operationAdd.h"

OperationADD::OperationADD():Operation()
{
/*
	numberA = 0.0;
	numberB = 0.0;
*/

}

// 注意子类构造函数的定义方法！！
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