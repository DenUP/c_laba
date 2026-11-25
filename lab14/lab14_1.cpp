
#include <iostream>
#include <string>

struct STUDENT
{
    std::string NAME;
    int group;
    int SES[5];
};

int main()
{
    STUDENT STUD1[2]{};

    for (int i = 0; i < 2; i++)
    {
        std::cout << "Введите фамилию: " << std::endl;
        std::cin >> STUD1[i].NAME;

        std::cout << "Введите номер группы: " << std::endl;
        std::cin >> STUD1[i].group;

        for (int j = 0; j < 5; j++)
        {
            std::cout << "Введите оценку №" << j << " " << std::endl;
            std::cin >> STUD1[i].SES[j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j : STUD1[i].SES)
        {
            if (j == 2)
            {
                std::cout << "Фамилия: " << STUD1[i].NAME
                          << " Номер группы: " << STUD1[i].group
                          << std::endl;
            }
        }
    }

    return 0;
}
