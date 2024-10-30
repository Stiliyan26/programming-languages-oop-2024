#include <string.h>
#include <iostream>

using namespace std;

const int SIZE = 100;
class String
{
  friend ostream &operator<<(ostream &, String);
  friend istream &operator>>(istream &, String &);
  friend String operator+(String, String);

public:
  String(void) { len = 0; };
  String(int);
  String(char *);
  String(String &);
  ~String(void);
  int operator!(void);
  int operator==(String);
  String &operator+=(String);
  String &operator=(String);
  String &operator=(char *);

private:
  char *str;
  int len;
};

String::String(int ln)
{
  len = ln;
  str = new char[len + 1];
  str[0] = '\0';
}

String::String(char *s)
{
  len = strlen(s);
  str = new char[len + 1];
  strcpy(str, s);
}

String::String(String &st)
{
  len = st.len;
  str = new char[len + 1];
  strcpy(str, st.str);
}

String::~String(void)
{
  if (len)
    delete str;
}

int String::operator!(void)
{
  return (len == 0);
}

int String::operator==(String st)
{
  return (strcmp(str, st.str) == 0);
}

String &String::operator+=(String st)
{
  char *s = new char[len + 1];
  strcpy(s, str);
  len += st.len;
  String::~String();
  str = new char[len + 1];
  strcpy(str, s);
  strcat(str, st.str);
  return *this;
}

String &String::operator=(String st)
{
  String::~String();
  len = st.len;
  str = new char[len + 1];
  strcpy(str, st.str);
  return *this;
}

String &String::operator=(char *s)
{
  String::~String();
  len = strlen(s);
  str = new char[len + 1];
  strcpy(str, s);
  return *this;
}

String operator+(String st1, String st2)
{
  String s = st1;
  s += st2;
  return s;
}

ostream &operator<<(ostream &os, String st)
{
  return (os << st.str);
};

istream &operator>>(istream &is, String &st)
{
  char inBuf[SIZE];
  is >> inBuf;
  st = inBuf;
  return is;
}

void main(void)
{
  String s1, s2, s3;
  cin >> s1 >> s2;
  cout << s1 << '\t' << s2 << '\n';
  s3 = s1 + s2;
  cout << s3 << '\n';
  s3 = s1;
  s3 += s2;
  cout << s3 << '\n';
}

//Защо да ползваме копи конструктор?
// 1. Предотвратява споделянето на памет между обекти


// // Конструктор по подразбиране
//     Vector(size_t size) : size(size) {
//         data = new int[size];
//     }

//     // Копи конструктор
//     Vector(const Vector& other) : size(other.size) {
//         data = new int[size];
//         for (size_t i = 0; i < size; ++i) {
//             data[i] = other.data[i];
//         }
//     }

//     // Деструктор
//     ~Vector() {
//         delete[] data;
//     }
// }