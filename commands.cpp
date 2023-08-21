#include "commands.h"
commands_soliders :: commands_soliders(){

}
void commands_soliders ::attackSoliders(){
cout<<"the solider"<< Soldier_Name<<"attack the enemy";
}
void commands_soliders ::defendSoliders(){
    cout<<"the solider"<< Soldier_Name<<"defends the army";
}

void commands_soliders ::report(){
    cout<< "the solider"<<Soldier_Name<<"has"<< Soldier_Special_Ability<<"with damage value"<<Soldier_Damage_Value;
}
void commands_vehicle::fireVehicles(){
cout<<"the vehicle"<< vehicle_name<< "fire the enemy";}
void commands_vehicle::moveVehicles(){
cout<<"the vehicle"<< vehicle_name<<"is moving";
}
void commands_vehicle ::report(){
    cout<< "the vehicle"<<vehicle_name<<"with the function"<<vehicle_function;}