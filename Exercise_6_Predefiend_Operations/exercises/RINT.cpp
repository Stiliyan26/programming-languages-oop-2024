#include <iostream>

class RINT
{
private:
  int value;

public:
  RINT() : value(0) {}
  RINT(int val) : value(val) {}

  // Унарни оператори
  RINT operator+() const
  {
    return RINT(+value);
  }

  RINT operator-() const
  {
    return RINT(-value);
  }

  // Бинарни оператори
  RINT operator+(const RINT &other) const
  {
    return RINT(value + other.value);
  }

  RINT operator-(const RINT &other) const
  {
    return RINT(value - other.value);
  }

  RINT operator*(const RINT &other) const
  {
    return RINT(value * other.value);
  }

  RINT operator/(const RINT &other) const
  {
    if (other.value == 0)
    {
      throw std::runtime_error("Division by zero!");
    }

    return RINT(value / other.value);
  }

  // Оператори за присвояване
  RINT &operator+=(const RINT &other)
  {
    value += other.value;

    return *this;
  }

  RINT &operator-=(const RINT &other)
  {
    value -= other.value;

    return *this;
  }

  RINT &operator*=(const RINT &other)
  {
    value *= other.value;

    return *this;
  }
  // this е указател към текущия обект (има тип RINT*)
  // *this дереференцира указателя, давайки ни референция към обекта (има тип RINT&)
  RINT &operator/=(const RINT &other)
  {
    if (other.value == 0)
    {
      throw std::runtime_error("Division by zero!");
    }

    value /= other.value;

    return *this;
  }

  friend std::ostream &operator<<(std::ostream &os, const RINT &r)
  {
    os << r.value;
    return os;
  }

  friend std::istream &operator>>(std::istream &is, RINT &r)
  {
    is >> r.value;
    return is;
  }

  int getValue() const
  {
    return value;
  }
};

int main()
{
  RINT a(5);
  RINT b(3);

  RINT c = a + b;
  RINT d = a - b;
  RINT e = a * b;
  RINT f = a / b;

  RINT g = -a;
  RINT h = +a;

  std::cout << c << std::endl;
  std::cout << d << std::endl;
  std::cout << e << std::endl;
  std::cout << f << std::endl;
  std::cout << g << std::endl;
  std::cout << h << std::endl;

  return 0;
}