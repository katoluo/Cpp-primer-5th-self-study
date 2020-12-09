// ex_5_9.cpp
#include <iostream>
#include <string>
int main()
{
    int count = 0;
    for (std::string text; getline(std::cin, text);) {
        auto i = 0;
        while (char ch = text[i++])
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                ++count;
    }
    std::cout << count << std::endl;
    return 0;
}
