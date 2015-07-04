#ifndef _OPERATION_H_
#define _OPERATION_H_

#include <iostream>
using namespace std;

class Operation
{
public:
	Operation();
	Operation(double numberA, double numberB);

	virtual double GetResult(void);

	void setNumberA(double numberA);
	void setNumberB(double numberB);

	// 子类中只能通过这两个Get函数访问numberA和numberB
	double getNumberA();
	double getNumberB();

protected:

private:
	double numberA;
	double numberB;
};



#endif