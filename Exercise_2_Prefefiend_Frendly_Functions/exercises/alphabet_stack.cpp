#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

class AlphabetStack
{
private:
  stack<char> st;

  void loadRange(char lower, char upper)
  {
    for (char i = lower; i <= upper; i++)
    {
      st.push(i);
    }
  }

public:
  AlphabetStack()
  {
    cout << "Initialize AlphabetStack\n";
  }

  stack<char> getAlphabetStack()
  {
    return st;
  }

  void loadStack(int upper)
  {
    if (upper == 1)
    {
      loadRange('A', 'Z');
    }
    else
    {
      loadRange('a', 'z');
    }
  }

  void printStack()
  {
    stack<char> temp = st;

    for (int i = 0; i < st.size(); i++)
    {
      cout << temp.top() << " ";
    }

    cout << endl;
  }

  void printAndClearStackReversed()
  {
    vector<char> reversedStack;

    while (!st.empty())
    {
      reversedStack.push_back(st.top());
      st.pop();
    }

    reverse(reversedStack.begin(), reversedStack.end());

    for (char c : reversedStack)
    {
      cout << c << " ";
    }

    cout << endl;
  }
};

int main()
{
  AlphabetStack alphStack1, alphStack2;

  alphStack1.loadStack(0);
  cout << "Stack with lowercase letters: ";
  alphStack1.printStack();
  cout << "Reversed stack with lowercase letters: ";
  alphStack1.printAndClearStackReversed();

  alphStack2.loadStack(1);
  cout << "Stack with uppercase letters: ";
  alphStack2.printStack();
  cout << "Reversed stack with uppercase letters: ";
  alphStack2.printAndClearStackReversed();

  return 0;
}
