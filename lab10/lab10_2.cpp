#include <iostream>

int main()
{
    // у unsigned максимальное значение 255
    // то есть хранит от 0 до 255 (всего 256 чисел)
    // итоговое значение будет 4
    unsigned char uc = 250;
    uc = uc + 10;
    std::cout << uc << std::endl;
    // диапазон у него -128 и 127
    // 130 - 256 = -126 получается значение
    signed char sc = 120;
    sc += 10;
    std::cout << sc << std::endl;

    int result = uc + sc;
    std::cout << "Итоговый результат: " << result << std::endl;
    return 0;
}

/// Для того чтобы можно было просмотреть мы берем static_cast<int>