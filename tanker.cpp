#include "tanker.h"

Tanker :: Tanker()
{
    Set_Soldier_Name();
    Set_Soldier_Special_Ability();
    Set_Soldier_Damage_Value();
}

void Tanker :: Set_Soldier_Name()
{
    cout << "Tanker's Name: ";
    cin >> Soldier_Name;
}

void Tanker :: Set_Soldier_Special_Ability()
{
    Soldier_Special_Ability = "operate effectively in a wide range of combat situations and environments";
}
    
void Tanker :: Set_Soldier_Damage_Value()
{
    Soldier_Damage_Value = 100;        
}
void Tanker :: get_Soldier_Name()
{
    return Soldier_Name;
}

void Tanker :: get_soldier_Special_Ability()
{
    return Soldier_Special_Ability;
}

void Tanker :: get_soldier_Damage_Value()
{
    return Soldier_Damage_Value;
}
