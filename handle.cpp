#include "handle.h"

Army ::Army()
{
    cout << "Good Morning General !!" << endl
         << "----------------------------------------------------" << endl
         << "----------------------------------------------------" << endl;
}

void Army ::Options()
{
    char Choice;
    bool flag = 0;
    cout << "1.Add Soldiers" << endl;
    cout << "2.Add Vehicles" << endl;
    cout << "3.Attack" << endl;
    cout << "4.Defend" << endl;
    cout << "5.Soldier Report" << endl;
    cout << "6.Vehicles Move" << endl;
    cout << "7.Vehicles Shoot" << endl;
    cout << "8.Vehclies Report" << endl;
    cout << "Choice: ";

    cin >> Choice;

    switch (Choice)
    {
    case '1':
        Add_Soldiers();
        break;
    case '2':
        Add_Vehicles();
        break;
    case '3':
        Attack();
        break;
    case '4':
        Defend();
        break;
    case '5':
        Soldier_Report();
        break;
    case '6':
        Vehclies_Move();
        break;
    case '7':
        Vehclies_Shoot();
        break;
    case '8':
        Vehclies_Report();
        break;
    default:
        cout << "Please Choose from the Options mentioned above" << endl;
        Options();
        break;
    }
}

void Army ::Add_Soldiers()
{
    cout << endl
         << endl;
    cout << "Now General, We're going to add Soldiers to Our Arrmy" << endl
         << "----------------------------------------------------" << endl
         << "----------------------------------------------------" << endl;
    cout << endl
         << endl;
    // commadnos section
    cout << "Commandos" << endl
         << endl;
    cout << "number of Commandos in the Group: ";
    cin >> number_of_commandos_in_a_group;
    commando.resize(number_of_commandos_in_a_group);
    cout << endl
         << endl;
    commando[0].Description();
    cout << endl
         << endl;
    for (size_t i = 0; i < number_of_commandos_in_a_group; i++)
    {
        commando[i].Set_Soldier_Name();
        commando[i].Set_Soldier_Special_Ability();
        commando[i].Set_Soldier_Damage_Value();
    }
    cout << endl
         << endl;
    /*------------------------------------------------------------------------*/

    // Snipers section
    cout << "Snipers" << endl
         << endl;
    cout << "number of Snipers in the Group: ";
    cin >> number_of_snipers_in_a_group;
    sniper.resize(number_of_snipers_in_a_group);
    cout << endl
         << endl;
    sniper[0].Description();
    cout << endl
         << endl;
    for (size_t i = 0; i < number_of_snipers_in_a_group; i++)
    {
        sniper[i].Set_Soldier_Name();
        sniper[i].Set_Soldier_Special_Ability();
        sniper[i].Set_Soldier_Damage_Value();
    }
    cout << endl
         << endl;
    /*------------------------------------------------------------------------*/

    // Engineers section
    cout << "Engineers" << endl
         << endl;
    cout << "number of Engineers in the Group: ";
    cin >> number_of_engineers_in_a_group;
    engineer.resize(number_of_engineers_in_a_group);
    cout << endl
         << endl;
    engineer[0].Description();
    cout << endl
         << endl;
    for (size_t i = 0; i < number_of_engineers_in_a_group; i++)
    {
        engineer[i].Set_Soldier_Name();
        engineer[i].Set_Soldier_Special_Ability();
        engineer[i].Set_Soldier_Damage_Value();
    }
    cout << endl
         << endl;
    /*------------------------------------------------------------------------*/

    // Infantrymen section
    cout << "Infantrymen" << endl
         << endl;
    cout << "number of Infantrymen in the Group: ";
    cin >> number_of_infantrymen_in_a_group;
    infantryman.resize(number_of_infantrymen_in_a_group);
    cout << endl
         << endl;
    infantryman[0].Description();
    cout << endl
         << endl;
    for (size_t i = 0; i < number_of_infantrymen_in_a_group; i++)
    {
        infantryman[i].Set_Soldier_Name();
        infantryman[i].Set_Soldier_Special_Ability();
        infantryman[i].Set_Soldier_Damage_Value();
    }
    cout << endl
         << endl;
    /*------------------------------------------------------------------------*/

    // Artillerymen section
    cout << "Artillerymen" << endl
         << endl;
    cout << "number of Artillerymen in the Group: ";
    cin >> number_of_artillerymen_in_a_group;
    artilleryman.resize(number_of_artillerymen_in_a_group);
    cout << endl
         << endl;
    artilleryman[0].Description();
    cout << endl
         << endl;
    for (size_t i = 0; i < number_of_artillerymen_in_a_group; i++)
    {
        artilleryman[i].Set_Soldier_Name();
        artilleryman[i].Set_Soldier_Special_Ability();
        artilleryman[i].Set_Soldier_Damage_Value();
    }
    cout << endl
         << endl;
    /*------------------------------------------------------------------------*/

    // Tankers section
    cout << "Tankers" << endl
         << endl;
    cout << "number of Tankers in the Group: ";
    cin >> number_of_tankers_in_a_group;
    tanker.resize(number_of_tankers_in_a_group);
    cout << endl
         << endl;
    tanker[0].Description();
    cout << endl
         << endl;
    for (size_t i = 0; i < number_of_tankers_in_a_group; i++)
    {
        tanker[i].Set_Soldier_Name();

        tanker[i].Set_Soldier_Special_Ability();
        tanker[i].Set_Soldier_Damage_Value();
    }
    cout << endl
         << endl;
    /*------------------------------------------------------------------------*/
}

void Army ::Add_Vehicles()
{
    cout << "Now General, We're going to add Vehclies to Our Arrmy" << endl
         << "----------------------------------------------------" << endl
         << "----------------------------------------------------" << endl;
    cout << endl
         << endl;

    // Tank section
    cout << "Tanks" << endl
         << endl;
    cout << "number of Tanks in the Group: ";
    cin >> number_of_tanks;
    Tank.resize(number_of_tanks);
    cout << endl
         << endl;

    for (size_t i = 0; i < number_of_tanks; i++)
    {
        Tank[i].Set_vehicle_name();
        Tank[i].Set_vehicle_function();
    }
    cout << endl
         << endl;
    /*------------------------------------------------------------------------*/

    // Helicopter section
    cout << "Helicopters" << endl
         << endl;
    cout << "number of Helicopters in the Group: ";
    cin >> number_of_helicopters;
    Helicopter.resize(number_of_helicopters);
    cout << endl
         << endl;

    for (size_t i = 0; i < number_of_helicopters; i++)
    {
        Helicopter[i].Set_vehicle_name();
        Helicopter[i].Set_vehicle_function();
    }
    cout << endl
         << endl;
    /*------------------------------------------------------------------------*/
}

void Army ::Attack()
{
    cout << endl
         << endl;
    Commands_Soldiers.attackSoldiers();
    cout << endl
         << endl;
}

void Army ::Defend()
{
    cout << endl
         << endl;
    Commands_Soldiers.defendSoldiers();
    cout << endl
         << endl;
}

void Army ::Soldier_Report()
{
}

void Army ::Vehclies_Move()
{
    cout << endl
         << endl;
    Command_Vehicles.moveVehicles();
    cout << endl
         << endl;
}

void Army ::Vehclies_Shoot()
{
    cout << endl
         << endl;
    Command_Vehicles.fireVehicles();
    cout << endl
         << endl;
}

void Army ::Vehclies_Report()
{
}
