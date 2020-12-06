// ex_3_6.cpp
#include <iostream>
#include <string>
int main()
{
    std::string str = "Hello world!";
    std::cout << "str：" << str << std::endl;
    for (char &i : str)
        i = 'X';
    std::cout << "str：" << str << std::endl;
    return 0;
}
