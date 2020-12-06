// ex_3_16.cpp
#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
int main()
{
    vector<int> v1; // 空容器
	vector<int> v2(10); // 10个元素，值都为0
	vector<int> v3(10, 42); // 10个元素，值都为42
	vector<int> v4{10}; // 1个元素，值为10
	vector<int> v5{10, 42}; // 2个元素， 值分别为10、42
	vector<string> v6{10}; // 10个元素，值都为空
	vector<string> v7{10, "hi"}; // 10个元素，值都为"hi"
    // v1
    std::cout << "v1.size:" << v1.size() << std::endl;
    // v2
    std::cout << "v2.size:" << v2.size() << " 值为:";
    for (auto i : v2) std::cout << i << " ";
    std::cout << std::endl;
    // v3
    std::cout << "v3.size:" << v3.size() << " 值为:";
    for (auto i : v3) std::cout << i << " ";
    std::cout << std::endl;
    // v4
    std::cout << "v4.size:" << v4.size() << " 值为:";
    for (auto i : v4) std::cout << i << " ";
    std::cout << std::endl;
    // v5
    std::cout << "v5.size:" << v5.size() << " 值为:";
    for (auto i : v5) std::cout << i << " ";
    std::cout << std::endl;
    // v6
    std::cout << "v6.size:" << v6.size() << " 值为:";
    for (auto i : v6) std::cout << i << " ";
    std::cout << std::endl;
    // v7
    std::cout << "v7.size:" << v7.size() << " 值为:";
    for (auto i : v7) std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
