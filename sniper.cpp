#include "sniper.h"

Sniper ::Sniper()
{
}

void Sniper ::Description()
{
    cout << "Description" << endl
         << "A sniper is a military or paramilitary marksman who engages targets from positions of concealment or at distances exceeding the target's detection capabilities." << endl
         << "Snipers are also known as “hunters” in many languages due to the nature of their craft, and are sometimes referred to as sharpshooters or marksmen" << endl
         << "----------------------------------------------------" << endl;
}

void Sniper ::Set_Soldier_Name()
{
    cout << "Sniper's Name: ";
    cin >> Soldier_Name;
}

void Sniper ::Set_Soldier_Special_Ability()
{
    Soldier_Special_Ability = "able to eliminate lightly armored targets with one shot and inflict severe damage to heavily armored targets";
}

void Sniper ::Set_Soldier_Damage_Value()
{
    Soldier_Damage_Value = 90;
}
string Sniper ::get_Soldier_Name()
{
    return Soldier_Name;
}

string Sniper ::get_soldier_Special_Ability()
{
    return Soldier_Special_Ability;
}

float Sniper ::get_soldier_Damage_Value()
{
    return Soldier_Damage_Value;
}
