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
    void get_Soldier_Name();
    void get_soldier_Special_Ability();
    void get_soldier_Damage_Value();
};

#endif