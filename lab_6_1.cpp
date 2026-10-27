#include <iostream>

int main()
{
    int numberMatrix;
    std::cout << "Введите число ";
    std::cin >> numberMatrix;
    char mat[numberMatrix][numberMatrix];
    for (int i = 0; i < numberMatrix; i++)
    {
        for (int j = 0; j < numberMatrix; j++)
        {
            if (i == j || i == numberMatrix / 2 || j == numberMatrix / 2 || i + j + 1 == numberMatrix)
            {
                std::cout << '*';
            }
            else
            {
            std:
                std::cout << '.';
            }
            std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}