#include <iostream>
#include <vector>

int main()
{
    int count_elm;
    std::cout << "Введите колличество элементов в векторе : ";
    std::cin >> count_elm;

    std::vector<int> numbers(count_elm);
    std::cout << "Введите элементы в массив(Через пробел) : ";
    for (int i = 0; i < count_elm; i++)
    {
        std::cin >> numbers[i];
    };
    for (int i : numbers)
    {
        int first = numbers[0];
        int prev; // Предущее значение
        if (prev < i)
        {
            std::cout << i << std::endl;
        }
        prev = i;
    }
    return 0;
}