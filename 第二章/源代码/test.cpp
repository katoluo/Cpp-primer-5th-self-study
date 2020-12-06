#include <iostream>

int main()
{
  double a = 10;
  double &b = a;
  std::cout << sizeof(b) << std::endl;
  return 0;
}
