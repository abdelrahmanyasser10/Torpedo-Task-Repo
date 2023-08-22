#include "infantryman.h"

Infantryman ::Infantryman()
{
}

void Infantryman ::Description()
{
    cout << "Description" << endl
         << "An Infantryman is a soldier who is part of the ground forces and engages in ground combat on foot." << endl
         << "Infantrymen work together to fight and defeat enemy ground troops, using weapons and equipment to engage these troops" << endl
         << "----------------------------------------------------" << endl;
}

void Infantryman ::Set_Soldier_Name()
{
    cout << "Infantryman's Name: ";
    cin >> Soldier_Name;
}

void Infantryman ::Set_Soldier_Special_Ability()
{
    Soldier_Special_Ability = "operate effectively in a wide range of combat situations and environments";
}

void Infantryman ::Set_Soldier_Damage_Value()
{
    Soldier_Damage_Value = 70;
}
string Infantryman ::get_Soldier_Name()
{
    return Soldier_Name;
}

string Infantryman ::get_soldier_Special_Ability()
{
    return Soldier_Special_Ability;
}

float Infantryman ::get_soldier_Damage_Value()
{
    return Soldier_Damage_Value;
}
