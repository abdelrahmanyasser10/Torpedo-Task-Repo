#include "vehicles.h"
#include "helicopter.h"

helicopter ::helicopter()
{
}

void helicopter::Set_vehicle_function()
{
    vehicle_function = "transport of troops";
}

void helicopter ::Set_vehicle_name()
{
    cout << "vehicle's name: ";
    cin >> vehicle_name;
}

string helicopter ::get_vehicle_function()
{
    return vehicle_function;
}

string helicopter ::get_vehicle_name()
{
    return vehicle_name;
}
