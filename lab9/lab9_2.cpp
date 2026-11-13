#include <iostream>

int main()
{
    const int arrLenght = 4;
    double arr[arrLenght] = {1.1, 2.2, 3.3, 4.4};
    double *ptr = arr;
    // Цикл для вывода элементов из массива
    for (int i = 0; i < arrLenght; i++)
    {
        // Проверка на null
        if (ptr != nullptr)
        {
            std::cout << *(ptr + i) << std::endl;
        }
    }
    // Цикл для вывода адрессов элеменнтов из массива
    for (int i = 0; i < arrLenght; i++)
    {
        std::cout << (ptr + i) << std::endl;
        // Цикл на проверку совпадает ли адресс
        if ((ptr + i) == &arr[i])
        {
            std::cout << "Адресс совпадает " << std::endl;
        }
    }
    return 0;
}