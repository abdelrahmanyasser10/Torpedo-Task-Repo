#ifndef _HELICOPTER_H
#define _HELICOPTER_H

#include "vehicles.h"


class helicopter : protected vehicles
{
public:
    helicopter();
    void Set_vehicle_function();
    void Set_vehicle_name();
    std :: string get_vehicle_name();
    std :: string get_vehicle_function();
};

#endif