#ifndef _MAIN_H_
#define _MAIN_H_

#include <iostream>
#include "operation.h"
#include "operationAdd.h"
#include "operationSub.h"
#include "operationFactory.h"

int main(void)
{
	OperationFatory operationFatory;
	Operation *pOperation;

	pOperation = operationFatory.createOperation('+');

	pOperation->setNumberA(3.0);
	pOperation->setNumberB(5);

	double result = pOperation->GetResult();

	cout<<result<<endl;

	return 0;

}

#endif