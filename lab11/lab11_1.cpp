
#include <iostream>

int main()
{
    int n, m;

    std::cout << "Введите количество строк: ";
    std::cin >> n;

    std::cout << "Введите количество столбцов: ";
    std::cin >> m;

    if (n <= 0 || m <= 0)
    {
        std::cout << "Некорректный размер матрицы" << std::endl;
        return 1;
    }

    // Выделяем память под указатели на строки
    int **matrix = new int *[n];

    // Выделяем память для каждой строки
    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[m];
    }

    // Заполняем двумерный массив
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << "matrix[" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }

    // Создаем одномерный динамический массив результатов
    int *result = new int[m];

    // Проходим по каждому столбцу
    for (int j = 0; j < m; j++)
    {
        int product = 1;
        bool hasPositive = false;

        // Проверяем все элементы текущего столбца
        for (int i = 0; i < n; i++)
        {
            if (matrix[i][j] > 0)
            {
                product *= matrix[i][j];
                hasPositive = true;
            }
        }

        // Если положительных элементов нет, записываем 0
        if (hasPositive)
        {
            result[j] = product;
        }
        else
        {
            result[j] = 0;
        }
    }

    // Выводим результаты
    for (int j = 0; j < m; j++)
    {
        std::cout << "Столбец " << j + 1
                  << ": " << result[j] << std::endl;
    }

    // Освобождаем одномерный массив
    delete[] result;

    // Освобождаем каждую строку матрицы
    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }

    // Освобождаем массив указателей
    delete[] matrix;

    return 0;
}
