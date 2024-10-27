#include <iostream> 

using namespace std;

class vehicle
{
    int num_wheels;
    int range;

public:
    vehicle(int w, int r)
    {
        num_wheels = w;
        range = r;
    }

    void showv()
    {
        cout << "Wheels: " << num_wheels << "\n";
        cout << "Range: " << range << " miles\n";
    }
};


enum motor
{
    gas,
    electric,
    diesel
};


class motorized : virtual public vehicle
{
    enum motor mtr;

public:
    motorized(enum motor m, int w, int r) : vehicle(w, r)
    {
        mtr = m;
    }

    void showm()
    {
        cout << "Motor: ";
        switch (mtr)
        {
        case gas:
            cout << "Gas\n";
            break;
        case electric:
            cout << "Electric\n";
            break;
        case diesel:
            cout << "Diesel\n";
            break;
        }
    }
};


class road_use : virtual public vehicle
{
    int passengers;

public:
    road_use(int p, int w, int r) : vehicle(w, r)
    {
        passengers = p;
    }

    void showr()
    {
        cout << "Passengers: " << passengers << "\n";
    }
};


class car : public motorized, public road_use
{
    string model;

public:
    car(string mdl, enum motor m, int p, int w, int r)
        : vehicle(w, r), motorized(m, w, r), road_use(p, w, r)
    {
        model = mdl;
    }

    void show()
    {
        cout << "Car Model: " << model << "\n";
        showv();   
        showm();   
        showr();   
    }
};


int main()
{
    car myCar("Tesla Model S", electric, 5, 4, 370); 

    myCar.show(); 

    return 0;
}
