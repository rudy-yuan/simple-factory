#ifndef _OPERATIONADD_H_
#define _OPERATIONADD_H_

#include <iostream>
#include "operation.h"
using namespace std;

class OperationADD:Operation
{
public:
	OperationADD();
	OperationADD(double numberA, double numberB);

	double GetResult();

protected:
private:
};

#endif