#include <iostream>

int main()
{
    int numberMassiv;
    std::cout << "Введите  целочисленное число: ";
    std::cin >> numberMassiv;

    char arr[numberMassiv][numberMassiv];
    for (int i = 0; i < numberMassiv; i++)
    {
        for (int j = 0; j < numberMassiv; j++)
        {
            if (i == j || i == numberMassiv / 2 || j == numberMassiv / 2 || i + j + 1 == numberMassiv)
            {
                arr[i][j] = '*';
            }
            else
            {
                arr[i][j] = '.';
            }
            // arr[i][j] = i + j;
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}