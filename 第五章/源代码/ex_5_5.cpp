// ex_5_5.cpp
#include <iostream>
#include <string>
#include <vector>
int main()
{
    const std::vector<std::string> scores = { "F", "D", "C", "B", "A", "A++" };
    std::string lettergrade;
    for (int grade = 0; std::cin >> grade; ) {
        if (grade < 60) lettergrade = scores[0]; // 如果grade小于60
        else if (grade == 100) lettergrade = scores[(grade - 50) / 10];
        else {
            lettergrade = scores[(grade - 50) / 10];
            lettergrade += grade % 10 > 7 ? "+"
                : grade %  10 < 3 ? "-" : "";
        }
        std::cout << lettergrade << std::endl;
    }
    return 0;
}
