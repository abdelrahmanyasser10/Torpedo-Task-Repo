#ifndef _HANDLE_H_
#define _HANDLE_H_

#include "commands.h"
#include "tank.h"
#include "helicopter.h"
#include "engineer.h"
#include "commando.h"
#include "artilleryman.h"
#include "infantryman.h"
#include "sniper.h"
#include "tanker.h"

class Army
{
public:
    int number_of_soldier_in_a_group;
    int number_of_vehicles;
    Army();
    void Options();
    void Add_Soldiers();
    void Add_Vehicles();
    void Attack();
    void Defend();
    void Soldier_Report();
    void Vehclies_Move();
    void Vehclies_Shoot();
    void Vehclies_Report();
};

#endif