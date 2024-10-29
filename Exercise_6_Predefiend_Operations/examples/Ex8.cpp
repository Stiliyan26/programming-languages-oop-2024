#include <iostream>

using std::cout;
using std::endl;

class CBox
{
public:
  CBox(double lv = 1.0, double wv = 1.0, double hv = 1.0) : m_Length(lv), m_Width(wv), m_Height(hv)
  {
    if (m_Length < m_Width)
      std::swap(m_Length, m_Width);
  }

  double Volume() const
  {
    return m_Length * m_Width * m_Height;
  }

  int operator>(const CBox &aBox) const
  {
    return this->Volume() > aBox.Volume();
  }

  int operator>(const double &value) const
  {
    return Volume() > value;
  }

  int operator<(const CBox &aBox) const
  {
    return this->Volume() < aBox.Volume();
  }

  int operator==(const CBox &aBox) const
  {
    return this->Volume() == aBox.Volume();
  }

  CBox operator+(const CBox &aBox) const
  {
    return CBox(
        m_Length > aBox.m_Length ? m_Length : aBox.m_Length,
        m_Width > aBox.m_Width ? m_Width : aBox.m_Width,
        m_Height + aBox.m_Height);
  }

  CBox operator-(const CBox &aBox) const
  {
    double newLength = m_Length < aBox.m_Length ? m_Length : aBox.m_Length;
    double newWidth = m_Width < aBox.m_Width ? m_Width : aBox.m_Width;
    double newHeight = m_Height - aBox.m_Height;

    if (newHeight < 0)
      newHeight = 0; 

    return CBox(newLength, newWidth, newHeight);
  }

  void ShowBox() const
  {
    cout << "Length: " << m_Length << ", Width: " << m_Width << ", Height: " << m_Height << endl;
  }

private:
  double m_Length;
  double m_Width;
  double m_Height;
};

// Overload '>' operator for comparison with a double on the left
int operator>(const double &value, const CBox &aBox)
{
  return value > aBox.Volume();
}

// Overload '<' operator for comparison with a double on the left
int operator<(const double &value, const CBox &aBox)
{
  return value < aBox.Volume();
}

// Overload '==' operator for comparison with a double
int operator==(const double &value, const CBox &aBox)
{
  return value == aBox.Volume();
}

int main()
{
  CBox box1(4.0, 2.0, 1.0);
  CBox box2(6.0, 3.0, 2.0);
  CBox box3(4.0, 2.0, 1.0);

  cout << "Box1 Volume: " << box1.Volume() << endl;
  cout << "Box2 Volume: " << box2.Volume() << endl;
  cout << "Box3 Volume: " << box3.Volume() << endl;

  // Test operator '>'
  if (box2 > box1)
    cout << "Box2 is larger than Box1." << endl;
  else
    cout << "Box2 is not larger than Box1." << endl;

  // Test operator '<'
  if (box1 < box2)
    cout << "Box1 is smaller than Box2." << endl;
  else
    cout << "Box1 is not smaller than Box2." << endl;

  // Test operator '=='
  if (box1 == box3)
    cout << "Box1 is equal to Box3." << endl;
  else
    cout << "Box1 is not equal to Box3." << endl;

  // Test operator '+'
  CBox sumBox = box1 + box2;
  cout << "Dimensions of Box1 + Box2:" << endl;
  sumBox.ShowBox();
  cout << "Volume: " << sumBox.Volume() << endl;

  // Test operator '-'
  CBox diffBox = box2 - box1;
  cout << "Dimensions of Box2 - Box1:" << endl;
  diffBox.ShowBox();
  cout << "Volume: " << diffBox.Volume() << endl;

  double value = 50.0;
  if (box1 > value)
    cout << "Box1 is larger than " << value << "." << endl;
  else
    cout << "Box1 is not larger than " << value << "." << endl;

  if (value < box2)
    cout << value << " is less than the volume of Box2." << endl;
  else
    cout << value << " is not less than the volume of Box2." << endl;

  if (box3 == box1.Volume())
    cout << "Box3's volume is equal to " << box1.Volume() << "." << endl;
  else
    cout << "Box3's volume is not equal to " << box1.Volume() << "." << endl;

  return 0;
}
