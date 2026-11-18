#include <iostream>

int main()
{
    int *savePtr = nullptr;
    {
        // Создаем ссылку
        int *ptr = new int(42);
        int x = 10;

        int &ref = x;
        std::cout << ref << std::endl; // вывожу через ссылку
        std::cout << &x << std::endl;  // адресс переменной
        if (ptr != nullptr)
        {
            int &ref2 = *ptr;
            std::cout << ref2 << std::endl;

            // Сохраняю адресс (перед выходом)
            savePtr = ptr;
        }
    }
    // ошибка так как мы вышли из области видимости
    // поэтому возникает ошибка

    // std::cout << &ref << std::endl;
    // std::cout << ref2 << std::endl;
    if (savePtr != nullptr)
    {
        // Динамический объект еще существует
        std::cout << *savePtr << std::endl;

        // Освобождаю память
        delete savePtr;
    }
    return 0;
}