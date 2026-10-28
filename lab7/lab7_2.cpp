#include <iostream>
#include <vector>
#include <string>
#include <list>

int main()
{
    std::string typeString;
    int typeData;
    int rows;
    int columns;

    std::cout << "Введите тип данных (int, float, double): " << std::endl
              << "1. int" << std::endl
              << "2. float" << std::endl
              << "3. double"
              << std::endl
              << "4. List" << std::endl;
    std::cin >>
        typeString;
    typeData = std::stoi(typeString);

    std::cout
        << "Количество строк: ";
    std::cin >> rows;

    std::cout << "Количество колонок: ";
    std::cin >> columns;

    // Проверка на корректность введенных данных
    if (
        columns < 0 || rows < 0)
    {
        std::cout << "Некорректные данные. Попробуйте снова." << std::endl;
        return 0;
    }

    switch (typeData)
    {
    case 1:
    {
        std::vector<std::vector<int>> intVec(rows, std::vector<int>(columns));
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < columns; ++j)
            {
                std::cout << intVec[i][j] << "\t";
            }
            std::cout << "\n";
        }
    }
    break;
    case 2:
    {
        std::vector<std::vector<float>> floatVec(rows, std::vector<float>(columns));
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < columns; ++j)
            {
                std::cout << floatVec[i][j] << "\t";
            }
            std::cout << "\n";
        }
    }
    break;
    case 3:
    {
        std::vector<std::vector<double>> doubleVec(rows, std::vector<double>(columns));
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < columns; ++j)
            {
                std::cout << doubleVec[i][j] << "\t";
            }
            std::cout << "\n";
        }
    }
    break;

    case 4:
    {
        std::list<std::list<int>> intList(rows, std::list<int>(columns));
    }
    break;
    }

    // if (typeData == "int")
    // {
    // std::vector<std::vector<int>> intVec(rows, std::vector<int>(columns));
    // }
    // else if (typeData == "float")
    // {
    //     std::vector<std::vector<float>> floatVec(rows, std::vector<float>(columns));
    // }
    // else if (typeData == "double")
    // {
    //     std::vector<std::vector<double>> doubleVec(rows, std::vector<double>(columns));
    // }

    std::cout << "Создан массив данных "
              << " количеством колонок " << columns
              << " и строк " << rows << std::endl;

    return 0;
}

// vector
// контейнерные типы