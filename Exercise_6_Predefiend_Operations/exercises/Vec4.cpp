#include <iostream>
#include <stdexcept>

class Vec4
{
private:
  float data[4];

public:
  Vec4() : data{0.0f, 0.0f, 0.0f, 0.0f} {}
  Vec4(float x, float y, float z, float w) : data{x, y, z, w} {}

  float &operator[](int index)
  {
    if (index < 0 || index >= 4)
    {
      throw std::out_of_range("Index out of bounds");
    }
    return data[index];
  }

  const float &operator[](int index) const
  {
    if (index < 0 || index >= 4)
    {
      throw std::out_of_range("Index out of bounds");
    }
    return data[index];
  }

  Vec4 operator+(const Vec4 &other) const
  {
    return Vec4(
        data[0] + other.data[0],
        data[1] + other.data[1],
        data[2] + other.data[2],
        data[3] + other.data[3]);
  }

  Vec4 operator-(const Vec4 &other) const
  {
    return Vec4(
        data[0] - other.data[0],
        data[1] - other.data[1],
        data[2] - other.data[2],
        data[3] - other.data[3]);
  }

  Vec4 operator*(float scalar) const
  {
    return Vec4(
        data[0] * scalar,
        data[1] * scalar,
        data[2] * scalar,
        data[3] * scalar);
  }

  friend Vec4 operator*(float scalar, const Vec4 &vec)
  {
    return vec * scalar;
  }

  Vec4 operator/(float scalar) const
  {
    if (scalar == 0.0f)
    {
      throw std::runtime_error("Division by zero!");
    }
    return Vec4(
        data[0] / scalar,
        data[1] / scalar,
        data[2] / scalar,
        data[3] / scalar);
  }

  friend std::ostream &operator<<(std::ostream &os, const Vec4 &vec)
  {
    os << "(" << vec[0] << ", " << vec[1] << ", "
       << vec[2] << ", " << vec[3] << ")";
    return os;
  }
};

int main()
{
  Vec4 v1(1.0f, 2.0f, 3.0f, 4.0f);
  Vec4 v2(0.5f, 1.5f, 2.5f, 3.5f);

  float scalar = 2.0f;

  std::cout << "v1 = " << v1 << std::endl;
  std::cout << "v2 = " << v2 << std::endl;
  std::cout << "scalar = " << scalar << std::endl
            << std::endl;

  std::cout << "Accessing elements of v1:" << std::endl;

  for (int i = 0; i < 4; i++)
  {
    std::cout << "v1[" << i << "] = " << v1[i] << std::endl;
  }

  std::cout << std::endl;

  Vec4 sum = v1 + v2;
  std::cout << "v1 + v2 = " << sum << std::endl;

  Vec4 diff = v1 - v2;
  std::cout << "v1 - v2 = " << diff << std::endl;

  Vec4 mul1 = v1 * scalar;
  std::cout << "v1 * " << scalar << " = " << mul1 << std::endl;

  Vec4 mul2 = scalar * v1;
  std::cout << scalar << " * v1 = " << mul2 << std::endl;

  Vec4 div = v1 / scalar;
  std::cout << "v1 / " << scalar << " = " << div << std::endl;

  try
  {
    std::cout << "\nTrying to access invalid index:" << std::endl;
  }
  catch (const std::out_of_range &e)
  {
    std::cout << "Caught exception: " << e.what() << std::endl;
  }

  try
  {
    std::cout << "\nTrying to divide by zero:" << std::endl;
  }
  catch (const std::runtime_error &e)
  {
    std::cout << "Caught exception: " << e.what() << std::endl;
  }

  return 0;
}