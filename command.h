#ifndef _COMMANDS_H_
#define _COMMANDS_H_


#include<iostream>
#include<string>
#include "vehicles.h"
#include "soliders.h"

using namespace std;

class commands_soliders:protected Soldiers {
    
public:
    commands_soliders();
    void attackSoliders();
     void defendSoliders();
     void report();
     

};
class commands_vehicle : protected vehicles{
commands_vehicle();
void fireVehicles();
     void moveVehicles();
      void report();
};
#endif  _COMMANDS_H_
