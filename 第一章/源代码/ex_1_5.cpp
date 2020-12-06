#include <iostream>
int main()
{
  std::cout << "请输入两个整数：";
  int a = 0, b = 0;
  std::cin >> a >> b;
  std::cout << a;
  std::cout << "和";
  std::cout << b;
  std::cout << "的积为:";
  std::cout << a * b;
  std::cout << std::endl;
}
