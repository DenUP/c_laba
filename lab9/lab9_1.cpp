#include <iostream>

int main()
{
    double d = 3.14;
    double *ptr = &d;
    std::cout << "Адрес  до: " << ptr << std::endl;
    // Увеличиваем адрес (инкремент)
    ptr++;
    std::cout << "Адрес  после : " << ptr << std::endl;
    // Увеличиться на 8 байт
    std::cout << "Размер double: " << sizeof(d) << std::endl;
    // Вернул обратно
    ptr--;
    std::cout << "Адрес  вернул обратно : " << ptr << std::endl;

    return 0;
}