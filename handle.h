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
    int number_of_commandos_in_a_group;
    int number_of_snipers_in_a_group;
    int number_of_engineers_in_a_group;
    int number_of_infantrymen_in_a_group;
    int number_of_artillerymen_in_a_group;
    int number_of_tankers_in_a_group;
    int number_of_tanks;
    int number_of_helicopters;
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

private:
    vector<Commando> commando;
    vector<Sniper> sniper;
    vector<Engineer> engineer;
    vector<Infantryman> infantryman;
    vector<Artilleryman> artilleryman;
    vector<Tanker> tanker;
    vector<tank> Tank;
    vector<helicopter> Helicopter;
    commands_soldiers Commands_Soldiers;
    commands_vehicle Command_Vehicles;
};

#endif