#include <iostream>
#include <vector>

int main()
// Скорее всего нужно будет разбить всю строку на отдельные символы (склеить)
// И после иттерироваться по всему слову или же отдельным символам и если есть схожесть
// тогда выводить 1 и если нет  0
{
    std::string title;
    std::cout << "Введите слов где будет комбинация строк( mo ) для ее проверки: " << std::endl;
    std::cin >> title;
    int result_number;
    for (char sim : title)
    {
        char prev; // записываю пред символ в сторке
        if (prev == 'm' && sim == 'o')
        {

            std::cout << '1' << std::endl;
        }
        else
        {
            std::cout << '0' << std::endl;
        }
        prev = sim; // обновляю этот символ
    }

    return 0;
}