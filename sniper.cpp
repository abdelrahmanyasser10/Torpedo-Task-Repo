#include "sniper.h"

Sniper :: Sniper()
{
    Set_Soldier_Name();
    Set_Soldier_Special_Ability();
    Set_Soldier_Damage_Value();
}

void Commando :: Set_Soldier_Name()
{
    cout << "Sniper's Name: ";
    cin >> Soldier_Name;
}

void Commando :: Set_Soldier_Special_Ability()
{
    Soldier_Special_Ability = "carrying out raids and operating in small teams behind enemy lines";
}
    
void Commando :: Set_Soldier_Damage_Value()
{
    Soldier_Damage_Value = 90;        
}