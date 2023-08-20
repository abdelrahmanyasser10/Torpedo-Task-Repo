#ifndef _COMMANDO_H_
#define _COMMANDO_H_

#include "soldiers.h"

class Commando : protected Soldier
{
public:
    Commando();
    void Set_Soldier_Name();
    void Set_Soldier_Special_Ability();
    void Set_Soldier_Damage_Value();
};

#endif