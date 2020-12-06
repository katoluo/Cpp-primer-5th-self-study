// ex_4_22.cpp
#include <iostream>
#include <string>
int main()
{
    int grade = 0;
    std::cin >> grade;
    // 版本1
    std::string finalGrade = (grade > 90) ? "high pass"
        : (grade > 75) ? "pass"
            : (grade > 60) ? "low pass" : "fail";
    std::cout << finalGrade << std::endl;
    // 版本2
    if (grade > 90) std::cout << "high pass" << std::endl;
    else if (grade > 75) std::cout << "pass" << std::endl;
    else if (grade > 60) std::cout << "low pass" << std::endl;
    else std::cout << "fail" << std::endl;
    return 0;
}
