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
    vehicle_function = "function of tank vehicle: make the weapons mounted in them more effective by their cross-country mobility and by the protection they provide for their crews.";

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


