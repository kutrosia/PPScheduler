#pragma once
#include "Operation.h"
using namespace std;
class Order
{

private:
	long number;
	Operation *operations;
	
public:
	Order();
	~Order();
};

