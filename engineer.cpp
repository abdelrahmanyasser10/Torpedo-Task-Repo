#include "engineer.h"

Engineer :: Engineer()
{
    Set_Soldier_Name();
    Set_Soldier_Special_Ability();
    Set_Soldier_Damage_Value();
}

void Engineer :: Set_Soldier_Name()
{
    cout << "Engineer's Name: ";
    cin >> Soldier_Name;
}

void Engineer :: Set_Soldier_Special_Ability()
{
    Soldier_Special_Ability = "perform construction and demolition tasks on the battlefield";
}
    
void Engineer :: Set_Soldier_Damage_Value()
{
    Soldier_Damage_Value = 60;        
}
string Engineer :: get_Soldier_Name()
{
    return Soldier_Name;
}

string Engineer :: get_soldier_Special_Ability()
{
    return Soldier_Special_Ability;
}

float Engineer :: get_soldier_Damage_Value()
{
    return Soldier_Damage_Value;
}
