#include "engineer.h"

Engineer ::Engineer()
{
}

void Engineer ::Description()
{
    cout << "Description" << endl
         << "Engineers in the army play a crucial role in supporting military operations." << endl
         << "They are responsible for designing, building, and maintaining military infrastructure, such as roads, bridges, and airfields." << endl
         << "They also provide support to troops in the field and help with disaster relief and civilian rescue efforts" << endl
         << "----------------------------------------------------" << endl;
}
void Engineer ::Set_Soldier_Name()
{
    cout << "Engineer's Name: ";
    cin >> Soldier_Name;
}

void Engineer ::Set_Soldier_Special_Ability()
{
    Soldier_Special_Ability = "perform construction and demolition tasks on the battlefield";
}

void Engineer ::Set_Soldier_Damage_Value()
{
    Soldier_Damage_Value = 60;
}
string Engineer ::get_Soldier_Name()
{
    return Soldier_Name;
}

string Engineer ::get_soldier_Special_Ability()
{
    return Soldier_Special_Ability;
}

float Engineer ::get_soldier_Damage_Value()
{
    return Soldier_Damage_Value;
}
