#ifndef _INFANTRYMAN_H_
#define _INFANTRYMAN_H_

#include "soldiers.h"

class Infantryman : protected Soldier
{
public:
    Infantryman();
    void Set_Soldier_Name();
    void Set_Soldier_Special_Ability();
    void Set_Soldier_Damage_Value();
    void get_Soldier_Name();
    void get_soldier_Special_Ability();
    void get_soldier_Damage_Value();
};

#endif