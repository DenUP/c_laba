// #include <iostream>

// int main()
// {

//     int numbers[3] = {1, 2, 3};
//     int *nums = numbers;

//     std::cout << "Сначала " << nums << std::endl
//               << "Число " << *nums << std::endl;
//     nums + 1;
//     std::cout << "После " << nums << std::endl
//               << "Число " << *nums;

//         return 0;
// }

#include <iostream>

int main()
{
    std::string arr = "sda";
    // std::string arr[2] = {"21", "21312"};
    std::cout << sizeof(arr) << std::endl;

    return 0;
}

// 3

// Объяснить, на сколько байт сдвигается указатель при ptr++ для разных
//                    типов.char -
//                1 short - 2 int - 4 double - 8

// 4
// Объяснить разницу между sizeof(arr) и sizeof(ptr).
// sizeof - показывает сколько он занимает памяти
//
// 5
//
///. sizeof(arr) - зависит от типа данных и их кол
// sizeof(*ptr) - 8 байт это сам указатель