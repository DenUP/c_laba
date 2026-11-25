
#include <iostream>

int main()
{
    int n, m;

    std::cout << "Введите размер матрицы: ";
    std::cin >> n;

    // Количество строк равно количеству столбцов
    m = n;

    if (n <= 0)
    {
        std::cout << "Некорректный размер матрицы" << std::endl;
        return 1;
    }

    // выделяю память под указатели на строки
    int **matrix = new int *[n];

    // выделяю память для каждой строки
    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[m];
    }

    // заполняю двумерный массив
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << "matrix[" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }

    // Указатель на первый элемент побочной диагонали (слево снизу)
    int *minNumber = &matrix[n - 1][0];

    //  номер минимального элемента
    int minIndex = 0;

    // прохожу по побочной диагонали
    for (int j = 0; j < m; j++)
    {
        // оперделяю индекс строки побочной диагонали
        int currentIndexInStolb = m - j - 1;

        // вывожу элементы побочной диагонали
        std::cout << matrix[currentIndexInStolb][j] << std::endl;

        // Если текущий элемент меньше найденного минимума
        if (matrix[currentIndexInStolb][j] < *minNumber)
        {
            // сохраняю адрес нового минимального элемента
            minNumber = &matrix[currentIndexInStolb][j];

            // сохраняю индекс минимального элемента
            minIndex = j;
        }
    }

    //  минимальное значение и его номер
    std::cout << "Минимальный элемент: " << *minNumber << std::endl;
    std::cout << "Номер минимального элемента: "
              << minIndex + 1 << std::endl;

    // освобождаю память каждой строки
    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }

    // освобождаю массив указателей
    delete[] matrix;

    return 0;
}
