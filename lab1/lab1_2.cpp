#include <iostream>

int main()
{
    std::string city1 = "Москва";
    std::string city2 = "Санкт-Петербург";

    if (city1.length() > city2.length())
    {
        std::cout << city1 << " больше";
    }
    else if (city2.length() > city1.length())
    {
        std::cout << city2 << " больше" << std::endl;
    }
    else
    {
        std::cout << "Одинаковые";
    }
    return 0;
}