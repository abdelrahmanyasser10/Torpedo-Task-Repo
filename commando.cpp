#include "commando.h"

Commando(){
    void Commando :: Set_Soldier_Name(){
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
}