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
    cin >> number_of_soldier_in_a_group;
    Commando commando[number_of_soldier_in_a_group];
    cout << endl
         << endl;
    commando->Description();
    cout << endl
         << endl;
    for (size_t i = 0; i < number_of_soldier_in_a_group; i++)
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
    cin >> number_of_soldier_in_a_group;
    Sniper sniper[number_of_soldier_in_a_group];
    cout << endl
         << endl;
    sniper->Description();
    cout << endl
         << endl;
    for (size_t i = 0; i < number_of_soldier_in_a_group; i++)
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
    cin >> number_of_soldier_in_a_group;
    Engineer engineer[number_of_soldier_in_a_group];
    cout << endl
         << endl;
    engineer->Description();
    cout << endl
         << endl;
    for (size_t i = 0; i < number_of_soldier_in_a_group; i++)
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
    cin >> number_of_soldier_in_a_group;
    Infantryman infantryman[number_of_soldier_in_a_group];
    cout << endl
         << endl;
    infantryman->Description();
    cout << endl
         << endl;
    for (size_t i = 0; i < number_of_soldier_in_a_group; i++)
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
    cin >> number_of_soldier_in_a_group;
    Artilleryman artilleryman[number_of_soldier_in_a_group];
    cout << endl
         << endl;
    artilleryman->Description();
    cout << endl
         << endl;
    for (size_t i = 0; i < number_of_soldier_in_a_group; i++)
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
    cin >> number_of_soldier_in_a_group;
    Tanker tanker[number_of_soldier_in_a_group];
    cout << endl
         << endl;
    tanker->Description();
    cout << endl
         << endl;
    for (size_t i = 0; i < number_of_soldier_in_a_group; i++)
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
}

void Army ::Attack()
{
}

void Army ::Defend()
{
}

void Army ::Soldier_Report()
{
}

void Army ::Vehclies_Move()
{
}

void Army ::Vehclies_Shoot()
{
}

void Army ::Vehclies_Report()
{
}
