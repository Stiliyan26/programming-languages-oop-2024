#include <iostream>
using namespace std;

// Forward declaration
class Car;

class Truck
{
private:
    int weight;
    int speed;
    int distance;

public:
    Truck(int w, int s, int d)
    {
        weight = w;
        speed = s;
        distance = d;
    };

    int sp_greater(Car c);

    template <typename T>
    friend int travel_time(T t);
};

class Car
{
private:
    int passengers;
    int speed;
    int distance;

public:
    Car(int p, int s, int d)
    {
        passengers = p;
        speed = s;
        distance = d;
    };

    friend int Truck::sp_greater(Car c);

    template <typename T>
    friend int travel_time(T t);
};

int Truck::sp_greater(Car c)
{
    return c.speed - speed;
}

template <typename T>
int travel_time(T t)
{
    if (t.speed == 0)
        return -1; 
    return t.distance / t.speed; 
}

int main()
{
    Car c1(5, 100, 500); 
    Truck t1(10000, 80, 500); 

    int t = t1.sp_greater(c1);

    if (t < 0)
        cout << "Truck is faster.\n";
    else if (t == 0)
        cout << "Car and truck have the same speed.\n";
    else
        cout << "Car is faster.\n";

    int timeCar = travel_time(c1);
    cout << "Travel time for the car: " << timeCar << " hours.\n";

    int timeTruck = travel_time(t1);
    cout << "Travel time for the truck: " << timeTruck << " hours.\n";

    return 0;
}