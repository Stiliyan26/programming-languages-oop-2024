#include <iostream>

using namespace std;

class coord
{
  int x, y;

public:
  coord()
  {
    x = 0;
    y = 0;
  }
  coord(int i, int j)
  {
    x = i;
    y = j;
  }
  void get_xy(int &i, int &j)
  {
    i = x;
    j = y;
  }

  friend coord operator++(coord &ob);

  friend coord operator++(coord &ob, int);
};

coord operator++(coord &ob)
{
  ob.x++;
  ob.y++;

  return ob;
}

coord operator++(coord &ob, int)
{
  coord temp = ob;
  
  ob.x++;
  ob.y++;
  
  return temp;
}

int main()
{
  coord o1(10, 10);
  coord o2(10, 10);
  int x, y;

  ++o1;
  o1.get_xy(x, y);
  cout << "(++o1) X:" << x << ", Y:" << y << "\n";

  o2++; 
  o2.get_xy(x, y);
  cout << "(o2++) X:" << x << ", Y:" << y << "\n";

  return 0;
}
