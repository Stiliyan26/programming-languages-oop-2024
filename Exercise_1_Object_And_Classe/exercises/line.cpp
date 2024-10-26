#include <iostream>
using namespace std;

class Line {
  private:
    int len;

  public:
    Line(int length): len(length) {
      drawLine();
    }

    void drawLine() const {
      for (int i = 0; i < len; i++)
      {
        cout << "*";
      }

      cout << endl;
    }

    ~Line() {
      eraseLine();
    }

    void eraseLine() const {
      for (int i = 0; i < len; i++)
      {
        cout << "\b \b";
      }

      cout << endl;
    }
};

int main() {
  int length;

  cout << "Въведете дължина: " << endl;
  cin >> length;

  Line* myLine = new Line(length);

  delete myLine;
}