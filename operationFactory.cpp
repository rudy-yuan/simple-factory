#include "operationFactory.h"

Operation *OperationFatory::createOperation(char operate)
{
	Operation *Poperation;

	switch(operate)
	{
	case '+':
		Poperation = new OperationADD();
		break;
	case '-':
		Poperation = new OperationSub();
		break;
	default:
		break;
	}

	return Poperation;
}