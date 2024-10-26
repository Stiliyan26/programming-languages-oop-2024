#ifndef CARS_H
#define CARS_H

class Car; 
class Truck; 

class Car {
    int passengers;
    int speed;
public:
    Car(int p, int s) {
        passengers = p;
        speed = s;
    }
    
    friend int Truck::sp_greater(Car& c, Truck& t);
};

class Truck {
    int weight;
    int speed;
public:
    Truck(int w, int s) {
        weight = w;
        speed = s;
    }
    
    int sp_greater(Car& c, Truck& t);
};

#endif