#include "commands.h"
commands_soldiers ::commands_soldiers()
{
}
void commands_soldiers ::attackSoldiers()
{
    cout << "the soldiers attacking the enemy";
}
void commands_soldiers ::defendSoldiers()
{
    cout << "the soldiers defending the army";
}

// void commands_soldiers ::report()
// {
//     cout << "the soldier" << Soldier_Name << "has" << Soldier_Special_Ability << "with damage value" << Soldier_Damage_Value;
// }
void commands_vehicle::fireVehicles()
{
    cout << "the vehicles fire at the enemy";
}
void commands_vehicle::moveVehicles()
{
    cout << "the vehicles are moving towards the target";
}
// void commands_vehicle ::report()
// {
//     cout << "the vehicle" << vehicle_name << "with the function" << vehicle_function;
// }