#ifndef _ENGINEER_H
#define _ENGINEER_H

#include "soldiers.h"

class Engineer : protected Soldier
{
public:
    Engineer();
    void Set_Soldier_Name();
    void Set_Soldier_Special_Ability();
    void Set_Soldier_Damage_Value();
    string get_Soldier_Name();
    string get_soldier_Special_Ability();
    float get_soldier_Damage_Value();
};

#endif