#include "artilleryman.h"

Artilleryman ::Artilleryman()
{
}

void Artilleryman ::Description()
{
    cout << "Description" << endl
         << "An artilleryman is a soldier enlisted in an artillery unit or who uses artillery." << endl
         << "Artillery is a class of heavy military ranged weapons that launch munitions far beyond the range and power of infantry firearms." << endl
         << "Artillerymen operate these weapons, which can include guns, howitzers, and mortars, as well as rocket artillery." << endl
         << "----------------------------------------------------" << endl;
}

void Artilleryman ::Set_Soldier_Name()
{
    cout << "Artilleryman's Name: ";
    cin >> Soldier_Name;
}

void Artilleryman ::Set_Soldier_Special_Ability()
{
    Soldier_Special_Ability = " operate heavy weapons that can deliver devastating firepower over long distances";
}

void Artilleryman ::Set_Soldier_Damage_Value()
{
    Soldier_Damage_Value = 80;
}
string Artilleryman ::get_Soldier_Name()
{
    return Soldier_Name;
}

string Artilleryman ::get_soldier_Special_Ability()
{
    return Soldier_Special_Ability;
}

float Artilleryman ::get_soldier_Damage_Value()
{
    return Soldier_Damage_Value;
}
