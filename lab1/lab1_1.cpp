#include <iostream>

// Задание 1

int main()
{

    double lenght;
    double width;

    std::cout << "Введите число длину: ";
    std::cin >> lenght;
    std::cout << "Введите ширину: ";
    std::cin >> width;
    if (lenght <= 0 || width <= 0)
    {
        std::cout << "Ошибка";
    }
    else
    {
        double area = lenght * width;

        std::cout << area << std::endl;

        double perimetr = 2 * (lenght + width);

        std::cout << perimetr << std::endl;
    }

    return 0;
}