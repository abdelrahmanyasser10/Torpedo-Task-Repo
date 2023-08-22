#include "tanker.h"

Tanker ::Tanker()
{
}

void Tanker ::Description()
{
    cout << "Description" << endl
         << "A sniper is a military or paramilitary marksman who engages targets from positions of concealment or at distances exceeding the target's detection capabilities." << endl
         << "Snipers are also known as “hunters” in many languages due to the nature of their craft, and are sometimes referred to as sharpshooters or marksmen" << endl
         << "----------------------------------------------------" << endl;
}

void Tanker ::Set_Soldier_Name()
{
    cout << "Tanker's Name: ";
    cin >> Soldier_Name;
}

void Tanker ::Set_Soldier_Special_Ability()
{
    Soldier_Special_Ability = "operate effectively in a wide range of combat situations and environments";
}

void Tanker ::Set_Soldier_Damage_Value()
{
    Soldier_Damage_Value = 100;
}
string Tanker ::get_Soldier_Name()
{
    return Soldier_Name;
}

string Tanker ::get_soldier_Special_Ability()
{
    return Soldier_Special_Ability;
}

float Tanker ::get_soldier_Damage_Value()
{
    return Soldier_Damage_Value;
}
