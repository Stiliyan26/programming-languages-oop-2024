#include <iostream>
using namespace std;

// Forward declaration
class Car;

class Truck
{
public:
    Truck(int w, int s)
    {
        weight = w;
        speed = s;
    };
    
    int sp_greater(Car c);

private:
    int weight;
    int speed;
};

class Car
{
    int passengers;
    int speed;

public:
    Car(int p, int s)
    {
        passengers = p;
        speed = s;
    };

    friend int Truck::sp_greater(Car c);
};

int Truck::sp_greater(Car c)
{
    return c.speed - speed;
}

int main()
{
    int t;

    Car c1(6, 55), c2(2, 120);
    Truck t1(10000, 55), t2(20000, 72);

    cout << "Comparing c1 and t1:\n";
    t = t1.sp_greater(c1);

    if (t < 0)
        cout << "Truck is faster.\n";
    else if (t == 0)
        cout << "Car and truck speed is the same.\n";
    else
        cout << "Car is faster.\n";

    cout << "\nComparing c2 and t2:\n";
    t = t2.sp_greater(c2);

    if (t < 0)
        cout << "Truck is faster.\n";
    else if (t == 0)
        cout << "Car and truck speed is the same.\n";
    else
        cout << "Car is faster.\n";

    return 0;
}