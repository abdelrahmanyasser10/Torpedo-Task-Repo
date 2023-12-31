#ifndef _SOLDIERS_H_
#define _SOLDIERS_H_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Soldier
{
protected:
    string Soldier_Name;
    string Soldier_Special_Ability;
    float Soldier_Damage_Value;

public:
    virtual void Set_Soldier_Name() = 0;
    virtual void Set_Soldier_Special_Ability() = 0;
    virtual void Set_Soldier_Damage_Value() = 0;
    virtual void Description() = 0;
    virtual string get_Soldier_Name() = 0;
    virtual string get_soldier_Special_Ability() = 0;
    virtual float get_soldier_Damage_Value() = 0;
};

#endif