#ifndef _ARTILLERYMAN_H_
#define _ARTILLERYMAN_H_

#include "soldiers.h"

class Artilleryman : protected Soldier
{
public:
    Artilleryman();
    void Set_Soldier_Name();
    void Set_Soldier_Special_Ability();
    void Set_Soldier_Damage_Value();
    void Description();
    string get_Soldier_Name();
    string get_soldier_Special_Ability();
    float get_soldier_Damage_Value();
};

#endif