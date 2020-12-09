// ex_5_25.cpp
#include <iostream>
#include <stdexcept>
using std::cin; using std::cout; using std::endl;

int main(void)
{
    for (int i, j; cout << "Input two integers:\n", cin >> i >> j; )
    {
        try 
        {
            if (j == 0) 
                throw std::runtime_error("divisor is 0");
            cout << i / j << endl;
        }
        catch (std::runtime_error err) 
        {
            cout << err.what() << "\nTry again? Enter y or n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n')
                break;
        }
    }

    return 0;
}
