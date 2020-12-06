// ex_3_41.cpp
#include <iostream>
#include <vector>
#include <iterator>
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> v(std::begin(arr), std::end(arr));
    std::vector<int> v2(arr, arr+9);
    for (auto i : v)
        std::cout << i << " ";
    std::cout << std::endl;
    for (auto i : v2)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
