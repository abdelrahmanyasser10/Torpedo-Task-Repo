#ifndef _SNIPER_H_
#define _SNIPER_H_

#include "soldiers.h"

class Sniper : protected Soldier
{
public:
    Sniper();
    void Set_Soldier_Name();
    void Set_Soldier_Special_Ability();
    void Set_Soldier_Damage_Value();
};

#endif