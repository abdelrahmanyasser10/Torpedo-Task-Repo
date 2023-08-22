#ifndef _VEHICLES_H_
#define _VEHICLES_H_

#include <iostream>
#include <string>

using namespace std;

class vehicles
{
protected:
    string vehicle_name;
    string vehicle_function;

public:
    virtual void Set_vehicle_name() = 0;
    virtual void Set_vehicle_function() = 0;
    virtual string get_vehicle_name() = 0;
    virtual string get_vehicle_function() = 0;
};

#endif // VEHICLES_H_INCLUDED