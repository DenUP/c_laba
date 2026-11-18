#include <iostream>

int main()
{
    int number = 10;
    {
        int &ref = number;
        ref = 50;
    }
    std::cout << number << std::endl;
}