#include <iostream>
#include <cmath>

using namespace std;

class triangle
{
private:
    double a, b, c;

public:
    triangle();
    double face();
    void show(const char *); // Changed parameter to const char*
    ~triangle()
    {
        cout << "\nDestructing object triangle!\n";
    }
};

triangle::triangle()
{
    do
    {
        cout << "\n\nEnter three values for the sides of the triangle:\n";
        cin >> a >> b >> c;
    } while (!((a > 0) && (b > 0) && (c > 0) &&
               ((a + b > c) && (a + c > b) && (b + c > a))));
}

double triangle::face()
{
    double p, s;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}

void triangle::show(const char *name) // Changed parameter to const char*
{
    cout << "Sides of the triangle " << name << ":\n";
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
}

int main()
{
    triangle ob1;
    double s;

    s = ob1.face();
    ob1.show("triangle1");

    cout << "\nThe area of triangle1 is s = " << s << endl;

    triangle ob2;
    triangle *p;
    p = &ob2;

    s = p->face();
    p->show("triangle2");
    cout << "\nThe area of triangle2 is s = " << s << endl;

    return 0;
}
