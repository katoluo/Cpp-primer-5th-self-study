#include <iostream>
#include <iterator>
int main()
{
  for (auto i : {1, 2, 3, 4, 5})
    std::cout << i << " ";
  std::cout << std::endl;
  auto beg = std::begin({1, 2, 3, 4, 5});
  std::cout << *beg << std::endl;
  return 0;
}
