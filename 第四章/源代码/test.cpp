#include <iostream>
int main()
{
  int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *p = a;
  std::cout << sizeof (a) / sizeof (*a) << std::endl;
  std::cout << sizeof (p) <<std::endl;
  std::cout << sizeof (*p) << std::endl;
  std::cout << *p << std::endl;
  return 0;
}

