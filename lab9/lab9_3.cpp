#include <iostream>

int main()
{
    const int arrLenght = 6;
    int arr[arrLenght] = {5, 10, 15, 20, 25, 30};
    int summ = 0; // Общая сумма
    int maxElem = 0;
    int *ptr = arr;
    if (ptr != nullptr)
    {
        // Цикл для нахождения общей суммы
        for (int i = 0; i < arrLenght; i++)
        {
            summ += (*(ptr + i));
        }
        std::cout << "Общая суммма: " << summ << std::endl;
        // Цикл для нахождения наибольшего числа
        for (int i = 0; i < arrLenght; i++)
        {
            // Текущее значение
            int current = *(ptr);
            if (current > maxElem)
            {
                maxElem = current;
            }
            // Смещая его вправо на один элемент
            ptr++;
        }
        std::cout << "Максимальный элемент будет " << maxElem << std::endl;
    }

    return 0;
}