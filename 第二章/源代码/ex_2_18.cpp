// ex_2_18.cpp
#include <iostream>
int main()
{
    int i = 10, *p = nullptr;
    p = &i;	// 更改指针的值
    *p = 20; // 更改指针所指对象的值
    std::cout << i << std::endl;
    return 0;
}
