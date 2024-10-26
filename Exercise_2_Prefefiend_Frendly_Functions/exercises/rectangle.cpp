#include <iostream>

using namespace std;

class Rectangle
{
private:
  double length, width;

public:
  Rectangle();
  double face();
  double face(double *);
  void show(const char *);

  ~Rectangle()
  {
    cout << "\n\nDestructing object rectangle!\n";
  }
};

Rectangle::Rectangle()
{
  do
  {
    cout << "\n\nEnter length and width of the rectangle:\n";
    cin >> length >> width;
  } while (!(length > 0 && width > 0));
}

double Rectangle::face()
{
  return length * width;
}

double Rectangle::face(double *p)
{
  *p = 2 * (length + width);

  return length * width;
}

void Rectangle::show(const char *name)
{
  cout << "Dimensions of the rectangle " << name << ":\n";
  cout << "Length = " << length << ", Width = " << width << endl;
}

int main() {
    Rectangle rect1;
    double p, s;

    rect1.show("rect1");
    cout << "\nThe area of rectangle1 is s = " << rect1.face(); 

    Rectangle rect2;
    rect2.show("rect2");

    s = rect2.face(&p); 
    cout << "\nThe area of rectangle2 is s = " << s << ", and the perimeter is p = " << p;
}