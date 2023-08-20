#include "artilleryman.h"

Artillertman :: Artillertman()
{
    Set_Soldier_Name();
    Set_Soldier_Special_Ability();
    Set_Soldier_Damage_Value();
}

void Artillertman :: Set_Soldier_Name()
{
    cout << "Artilleryman's Name: ";
    cin >> Soldier_Name;
}

void Artillertman :: Set_Soldier_Special_Ability()
{
    Soldier_Special_Ability = " operate heavy weapons that can deliver devastating firepower over long distances";
}
    
void Artillertman :: Set_Soldier_Damage_Value()
{
    Soldier_Damage_Value = 80;        
}
void Artillertman :: get_Soldier_Name()
{
    return Soldier_Name;
}

void Artillertman :: get_soldier_Special_Ability()
{
    return Soldier_Special_Ability;
}

void Artillertman :: get_soldier_Damage_Value()
{
    return Soldier_Damage_Value;
}
