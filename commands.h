#ifndef _COMMANDS_H_
#define _COMMANDS_H_

#include <iostream>
#include <string>
#include "vehicles.h"
#include "soldiers.h"

using namespace std;

class commands_soldiers
{

public:
     commands_soldiers();
     void attackSoldiers();
     void defendSoldiers();
     void report();
};

class commands_vehicle
{
public:
     void fireVehicles();
     void moveVehicles();
     void report();
};

#endif