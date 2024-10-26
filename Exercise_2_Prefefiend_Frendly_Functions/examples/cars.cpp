#include "cars.h"

int Truck::sp_greater(Car& c, Truck& t) {
    return c.speed - t.speed;
}