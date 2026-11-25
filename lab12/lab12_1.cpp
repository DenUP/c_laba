#include <iostream>

int Sum(int n)
{
    int numberSum = 0;
    for (int i = 1; i <= n; i++)
    {
        numberSum += i;
    }
    return numberSum;
}

int main()
{
    int oneNumber;
    int twoNumber;

    std::cout << "Введите первое число: ";
    std::cin >> oneNumber;
    std::cout << "Введите второе число: ";
    std::cin >> twoNumber;

    std::cout << Sum(oneNumber) + Sum(twoNumber) << std::endl;

    return 0;
}
