#include <iostream>

int main()
{
    int numberOne;

    std::cout << "Введите одно целое число: ";
    std::cin >> numberOne;
    if (std::cin.fail())
    {
        std::cout << std::cin.fail();
    }
        if (numberOne > 0)
        {
            std::cout << "Положительное" << std::endl;
        }
        else if (numberOne < 0)
        {
            std::cout << "Отрицательное" << std::endl;
        }
        else if (numberOne == 0)
        {
            std::cout << "Ноль" << std::endl;
        }
        else
        {
            std::cout << "Ислючение" << std::endl;
        }
    return 0;

    // Введите одно целое число
    // Если число больше 0 выводит "Положительное"
    // Если число меньше 0 выводит "Отрицательное"
    // Если число равно 0  выводит "Ноль"
}