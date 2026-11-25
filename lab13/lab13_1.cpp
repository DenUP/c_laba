#include <iostream>

class adrees

{
private:
    int index_code;
    std::string sity;
    std::string street;
    int house;
    int korpus;
    int kvartira = 0;

public:
    void print()
    {
        std::cout << "Индекс: " << index_code << std::endl;
        std::cout << "Город: " << sity << std::endl;
        std::cout << "Улица: " << street << std::endl;
        std::cout << "Дом : " << house << std::endl;
        std::cout << "Корпус: " << korpus << std::endl;
        std::cout << "Квартира: " << kvartira << std::endl;
    }
    void editIndex(int newIndex)
    {
        index_code = newIndex;
    }
    void editSity(std::string newSity)
    {
        sity = newSity;
    }
    void editStreet(std::string newStreet)
    {
        street = newStreet;
    }
    void editHouse(int newHouse)
    {
        house = newHouse;
    }
    void editKorpus(int newKorpus)
    {
        korpus = newKorpus;
    }
    void editKvartira(int newKvartira)
    {
        kvartira = newKvartira;
    }
};

int main()
{
    adrees Adres1;
    Adres1.editHouse(12);
    Adres1.editIndex(123456);
    Adres1.editSity("Moscow");
    Adres1.editStreet("Lenina");
    Adres1.print();
    return 0;
}