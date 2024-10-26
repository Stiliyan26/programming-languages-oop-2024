#include <iostream>
#include <cmath> 

using namespace std;

class triangle {
private:
    double a, b, c;

public:
    triangle();
    double face(); 
    double face(double *); 
    void show(const char *);
    ~triangle() {
        cout << "\n\nDestructing object triangle!\n";
    }
};

// Constructor definition
triangle::triangle() {
    do {
        cout << "\n\nEnter three values for the sides of the triangle:\n";
        cin >> a >> b >> c;
    } while (!((a > 0) && (b > 0) && (c > 0) && ((a + b > c) && (a + c > b) && (b + c > a))));
}

// Definition of member function face() without arguments
double triangle::face() {
    double p, s;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}

// Overloaded member function face() with one argument
double triangle::face(double *p) {
    double perimeter = a + b + c;
    *p = perimeter; // Return the perimeter via pointer argument
    perimeter /= 2;
    double s;
    s = sqrt(perimeter * (perimeter - a) * (perimeter - b) * (perimeter - c));
    return s;
}

void triangle::show(const char *name) {
    cout << "Sides of the triangle " << name << ":\n";
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
}

int main() {
    // Object tr1; the class constructor is called
    triangle tr1;
    double p, s;

    tr1.show("tr1");
    cout << "\nThe area of triangle1 is s = " << tr1.face(); // Calls face() without arguments

    // Object tr2; the class constructor is called
    triangle tr2;
    tr2.show("tr2");

    s = tr2.face(&p); // Calls face() with one argument (pointer to perimeter)
    cout << "\nThe area of triangle2 is s = " << s << ", and the perimeter is p = " << p;

    return 0;
}
