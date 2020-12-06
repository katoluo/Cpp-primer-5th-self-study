// ex_3_2.cpp
#include <iostream>
#include <string>
int main()
{
    //std::string line;
    //while (getline(std::cin, line))
        //std::cout << line << std::endl;
    
    for (std::string word; std::cin >> word; std::cout << word << std::endl);
    
    return 0;
}
