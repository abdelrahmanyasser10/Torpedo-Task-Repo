#include"tank.h"
#include"vehicles.h"


tank::tank()
{
    void Set_vehicle_function();
    void Set_vehicle_name();
     std :: string get_vehicle_name();
    std :: string get_vehicle_function();
}

void tank :: Set_vehicle_function()
{
    vehicle_function = "to close with and destroy the enemy using fire, maneuver and shock effect";

}

void tank :: Set_vehicle_name()
{
    cout << "vehicle's name: ";
    cin >> vehicle_name;
}


string tank :: get_vehicle_function()
{
   return  vehicle_function;

}

string  tank :: get_vehicle_name()
{
    return vehicle_name;
}


