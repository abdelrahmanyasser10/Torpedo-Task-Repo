#include "infantryman.h"

Infantryman :: Infantryman()
{
    Set_Soldier_Name();
    Set_Soldier_Special_Ability();
    Set_Soldier_Damage_Value();
}

void Infantryman :: Set_Soldier_Name()
{
    cout << "Infantryman's Name: ";
    cin >> Soldier_Name;
}

void Infantryman :: Set_Soldier_Special_Ability()
{
    Soldier_Special_Ability = "operate effectively in a wide range of combat situations and environments";
}
    
void Infantryman :: Set_Soldier_Damage_Value()
{
    Soldier_Damage_Value = 70;        
}
void Infantryman :: get_Soldier_Name()
{
    return Soldier_Name;
}

void Infantryman :: get_soldier_Special_Ability()
{
    return Soldier_Special_Ability;
}

void Infantryman :: get_soldier_Damage_Value()
{
    return Soldier_Damage_Value;
}
