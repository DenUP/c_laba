#include <iostream>

void recursia(int n)
{
    int initNumber = 0;
    if (n == initNumber)
    {
        return;
    }
    else
    {
        recursia(n - 1);
        std::cout << n << std::endl;
    }
}

int main()
{
    int oneNumber;
    std::cout << "Введите число: ";
    std::cin >> oneNumber;
    recursia(oneNumber);
    return 0;
}