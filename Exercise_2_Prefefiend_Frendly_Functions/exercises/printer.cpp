#include <iostream>
using namespace std;

class pr2;

class pr1
{
private:
  int printing;

public:
  pr1()
  {
    printing = 0;
  }

  void set_print(int status)
  {
    printing = status;
  }

  friend bool inuse(const pr1 &p1, const pr2 &p2);
};

class pr2
{
private:
  int printing;

public:
  pr2()
  {
    printing = 0;
  }

  void set_print(int status)
  {
    printing = status;
  }

  friend bool inuse(const pr1 &p1, const pr2 &p2);
};

bool inuse(const pr1 &p1, const pr2 &p2)
{
  return p1.printing != 0 || p2.printing != 0;
}

int main()
{
  pr1 printer1;
  pr2 printer2;

  cout << "Is printer in use? " << (inuse(printer1, printer2) ? "Yes" : "No") << endl;

// Поставяме статуса на printer1 в "използва се"
  printer1.set_print(1);
  cout << "Is printer in use? " << (inuse(printer1, printer2) ? "Yes" : "No") << endl;

  // Поставяме статуса на printer2 в "използва се"
  printer2.set_print(1);
  cout << "Is printer in use? " << (inuse(printer1, printer2) ? "Yes" : "No") << endl;

  // Освобождаваме printer1
  printer1.set_print(0);
  cout << "Is printer in use? " << (inuse(printer1, printer2) ? "Yes" : "No") << endl;

  // Освобождаваме printer2
  printer2.set_print(0);
  cout << "Is printer in use? " << (inuse(printer1, printer2) ? "Yes" : "No") << endl;

  return 0;
}
