#include "line-out-of-class-definition-header.h"
#include <iostream>
using namespace std;

// Constructor
Line::Line(int length) : len(length)
{
  drawLine();
}

// Method to draw the line
inline void Line::drawLine() const
{
  for (int i = 0; i < len; i++)
  {
    cout << "*";
  }

  cout << endl;
}

// Destructor
Line::~Line()
{
  eraseLine();
}

// Method to erase the line
inline void Line::eraseLine() const
{
  for (int i = 0; i < len; i++)
  {
    cout << "\b \b";
  }

  cout << endl;
}

int main()
{
  int length;

  cout << "Enter length: " << endl;
  cin >> length;

  Line *myLine = new Line(length);

  delete myLine;

  return 0;
}
