// ex_3_42.cpp
#include <iostream>
#include <vector>
int main()
{
    std::vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr[10];
    int i = 0;
    for (auto k : v)
        arr[i++] = k;
    for (auto i : arr)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
