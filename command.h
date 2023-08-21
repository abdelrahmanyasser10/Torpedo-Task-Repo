#ifndef _COMMANDS_H_
#define _COMMANDS_H_


#include<iostream>
#include<string>
#include "vehicles.h"
#include "soldiers.h"

using namespace std;

class commands_soliders:protected Soldier {

public:

    void attackSoliders();
     void defendSoliders();
     void report();


};
class commands_vehicle : protected vehicles{
     public:
void fireVehicles();
     void moveVehicles();
      void report();
};
#endif  _COMMANDS_H_
