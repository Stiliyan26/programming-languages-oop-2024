#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

class Cylinder
{
private:
  double m_Radius;
  double m_Height;

public:
  Cylinder(double rv = 1.0, double hv = 1.0)
      : m_Radius(rv), m_Height(hv) {}

  double Volume() const
  {
    return M_PI * m_Radius * m_Radius * m_Height;
  }

  bool operator>(const Cylinder &aCylinder) const
  {
    return this->Volume() > aCylinder.Volume();
  }

  bool operator<(const Cylinder &aCylinder) const
  {
    return this->Volume() < aCylinder.Volume();
  }

  bool operator==(const Cylinder &aCylinder) const
  {
    return this->Volume() == aCylinder.Volume();
  }

  Cylinder operator+(const Cylinder &aCylinder) const
  {
    double newRadius = (m_Radius > aCylinder.m_Radius) ? m_Radius : aCylinder.m_Radius;
    double newHeight = m_Height + aCylinder.m_Height;

    return Cylinder(newRadius, newHeight);
  }

  Cylinder operator-(const Cylinder &aCylinder) const
  {
    double newRadius = (m_Radius < aCylinder.m_Radius) ? m_Radius : aCylinder.m_Radius;
    double newHeight = m_Height - aCylinder.m_Height;

    if (newHeight < 0)
    {
      newHeight = 0;
    }

    return Cylinder(newRadius, newHeight);
  }

  void ShowCylinder() const
  {
    cout << "Radius: " << m_Radius << ", Height: " << m_Height << endl;
  }
};

bool operator>(const double &value, const Cylinder &aCylinder)
{
  return value > aCylinder.Volume();
}

bool operator<(const double &value, const Cylinder &aCylinder)
{
  return value < aCylinder.Volume();
}

bool operator==(const double &value, const Cylinder &aCylinder)
{
  return value == aCylinder.Volume();
}


int main()
{
  Cylinder cyl1(3.0, 5.0);   
  Cylinder cyl2(4.0, 7.0);   
  Cylinder cyl3(3.0, 5.0);  

  // Display volumes
  cout << "Cylinder 1 Volume: " << cyl1.Volume() << endl;
  cout << "Cylinder 2 Volume: " << cyl2.Volume() << endl;
  cout << "Cylinder 3 Volume: " << cyl3.Volume() << endl;

  cout << (cyl2 > cyl1 ? "Cylinder 2 is larger than Cylinder 1." : "Cylinder 2 is not larger than Cylinder 1.") << endl;

  cout << (cyl1 < cyl2 ? "Cylinder 1 is smaller than Cylinder 2." : "Cylinder 1 is not smaller than Cylinder 2.") << endl;

  cout << (cyl1 == cyl3 ? "Cylinder 1 is equal to Cylinder 3." : "Cylinder 1 is not equal to Cylinder 3.") << endl;

  Cylinder sumCylinder = cyl1 + cyl2;
  cout << "Dimensions of Cylinder 1 + Cylinder 2:" << endl;
  sumCylinder.ShowCylinder();
  cout << "Volume: " << sumCylinder.Volume() << endl;

  Cylinder diffCylinder = cyl2 - cyl1;
  cout << "Dimensions of Cylinder 2 - Cylinder 1:" << endl;
  diffCylinder.ShowCylinder();
  cout << "Volume: " << diffCylinder.Volume() << endl;

  double value = 300.0;
  cout << (cyl1 > value ? "Cylinder 1 is larger than " : "Cylinder 1 is not larger than ") << value << "." << endl;
  cout << (value < cyl2 ? std::to_string(value) + " is less than the volume of Cylinder 2." : std::to_string(value) + " is not less than the volume of Cylinder 2.") << endl;

  return 0;
}