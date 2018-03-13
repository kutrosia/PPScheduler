#pragma once
#include "Order.h"
#include "WorkCenter.h"
#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
class Operation :
	public Order
	
{
private:
	int number;
	std::string description;
	int quantity;
	int yield;
	std::string unit;
	std::string status;
	double duration;
	std::string dur_unit;
	std::string system_status;



	void RemoveSpaces();

public:
	WorkCenter * workcenter;

	

	Operation();
	~Operation();
};

