#include "commando.h"

Commando :: Commando(){
    Set_Soldier_Name();
    Set_Soldier_Special_Ability();
    Set_Soldier_Damage_Value();
}

void Commando :: Set_Soldier_Name()
{
    cout << "Commando's Name: ";
    cin >> Soldier_Name;
}

void Commando :: Set_Soldier_Special_Ability()
{
    Soldier_Special_Ability = "carrying out raids and operating in small teams behind enemy lines";
}
    
void Commando :: Set_Soldier_Damage_Value()
{
    Soldier_Damage_Value = 85;        
}

string Commando :: get_Soldier_Name()
{
    return Soldier_Name;
}

string Commando :: get_soldier_Special_Ability()
{
    return Soldier_Special_Ability;
}

float Commando :: get_soldier_Damage_Value()
{
    return Soldier_Damage_Value;
}
