#ifndef _TANK_H_
#define _TANK_H_


#include"vehicles.h"


class tank : protected vehicles
{
public:
    tank();
    void Set_vehicle_function();
    void Set_vehicle_name();
    std :: string get_vehicle_name();
    std :: string get_vehicle_function();
};


#endif
