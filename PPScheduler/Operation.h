#pragma once
#include "Order.h"
#include "WorkCenter.h"
using namespace std;
class Operation :
	public Order
	
{
public:
	WorkCenter * workcenter;
	Operation();
	~Operation();
};

