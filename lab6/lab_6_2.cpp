#include <iostream>

int main()
{
    int numberM = 4;
    char arr[numberM][numberM];
    for (int i = 0; i < numberM; i++)
    {
        for (int j = 0; j < numberM; j++)
        {
            if (i + j + 1 == numberM)
            {
                arr[i][j] = '1';
            }
            else if (i + j + 1 > numberM)
            {
                arr[i][j] = '2';
            }
            else
            {
                arr[i][j] = '0';
            }
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}