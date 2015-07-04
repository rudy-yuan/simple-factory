#ifndef _OPERATION_FACTORY_H
#define _OPERATION_FACTORY_H

#include <iostream>
#include "operation.h"
using namespace std;

class OperationFatory
{
public:
	Operation *createOperation(char operate);

protected:
private:
};

#endif