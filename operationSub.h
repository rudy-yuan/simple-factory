#ifndef _OPERATIONSUBD_H_
#define _OPERATIONSUB_H_

#include <iostream>
#include "operation.h"

using namespace std;

class OperationSub:Operation
{
public:
	OperationSub();
	OperationSub(double numberA, double numberB);

	double GetResult();

protected:
private:
};

#endif