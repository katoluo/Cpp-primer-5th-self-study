#include <iostream>
int main()
{
  std::cout << "请输入两个整数：";
  int a = 0, b = 0; // 定义int类型的对象(变量)a,b。并分别初始化。
  std::cin >> a >> b;
  std::cout << a << "和" << b << "的积为:" << a * b << std::endl;
  return 0;
}
