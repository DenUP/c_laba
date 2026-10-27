#include <iostream>

int main()
{

    int numberOne;

    std::cout << "Введите число: ";
    std::cin >> numberOne;

    if (numberOne > 0)
    {
        std::cout << numberOne * numberOne;
    }
    else if (number < 0)
    {
        std::cout << abs(numberOne);
    }
    else
    {
        std::cout << "Равно нулю";
    }
    return 0;
}