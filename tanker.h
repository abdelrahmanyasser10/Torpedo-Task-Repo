#ifndef _TANKER_H_
#define _TANKER_H_

#include "soldiers.h"

class Tanker : protected Soldier
{
public:
    Tanker();
    void Set_Soldier_Name();
    void Set_Soldier_Special_Ability();
    void Set_Soldier_Damage_Value();
    void get_Soldier_Name();
    void get_soldier_Special_Ability();
    void get_soldier_Damage_Value();
};

#endif