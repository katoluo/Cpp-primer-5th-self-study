#include <iostream>

int main()
{
  int ia[3][4] = {
    { 1, 2, 3, 4 },
    { 5, 6, 7, 8 },
    { 9, 10, 11, 12 }
  };
  for (const auto &row : ia)
    for (auto col : row)
      std::cout << col << " ";
  std::cout << std::endl;
  return 0;
}
