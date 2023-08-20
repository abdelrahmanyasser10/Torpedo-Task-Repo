#include "sniper.h"

Sniper :: Sniper()
{
    Set_Soldier_Name();
    Set_Soldier_Special_Ability();
    Set_Soldier_Damage_Value();
}

void Sniper :: Set_Soldier_Name()
{
    cout << "Sniper's Name: ";
    cin >> Soldier_Name;
}

void Sniper :: Set_Soldier_Special_Ability()
{
    Soldier_Special_Ability = "able to eliminate lightly armored targets with one shot and inflict severe damage to heavily armored targets";
}
    
void Sniper :: Set_Soldier_Damage_Value()
{
    Soldier_Damage_Value = 90;        
}
void Sniper :: get_Soldier_Name()
{
    return Soldier_Name;
}

void Sniper :: get_soldier_Special_Ability()
{
    return Soldier_Special_Ability;
}

void Sniper :: get_soldier_Damage_Value()
{
    return Soldier_Damage_Value;
}
