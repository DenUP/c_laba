#include <iostream>
#include <string>
int main()
{
    int maxLenght = 0;            // Максимальная длина
    int currentMax = 0;           // Колличество слов с максимальной длиной
    std::string currentWord = ""; // Текущее слово
    std::string title = "Odin Dva Three 4ETERE 123456";
    // std:string title;
    // std
    for (char s : title)
    {
        if (s == ' ')
        {
            if (maxLenght < currentWord.length())
            {
                maxLenght = currentWord.length();
            }

            currentWord = "";
        }
        else
        {
            currentWord += s;
        }
    }
    // Проверяю последнее слово
    if (currentWord.length() > maxLenght)
    {
        std::cout << currentWord;
        maxLenght = currentWord.length();
    }
    // Считаем слова с максимальной длиной
    currentWord = "";
    for (char s : title)
    {
        if (s == ' ')
        {
            if (currentWord.length() == maxLenght)
            {

                currentMax += 1;
            }
            currentWord = "";
        }
        else
        {
            currentWord += s;
        }
    }
    if (currentWord.length() == maxLenght)
    {
        currentMax += 1;
    }
    std::cout << "Колличество слов с максимальной длиной: " << currentMax << std::endl;
    return 0;
}
