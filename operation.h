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

	// ������ֻ��ͨ��������Get��������numberA��numberB
	double getNumberA();
	double getNumberB();

protected:

private:
	double numberA;
	double numberB;
};



#endif