#include <iostream>
#include <cstdio> // Для функции scanf;
#include <cmath>  // для Математической функции

int main()
{
    float a, b, agel;

    printf("Введите (через пробел) длины двух сторон (см) треугольника ");
    scanf("%f %f", &a, &b);

    printf("Введите величину угла между сторонами треугольника ");
    scanf("%f", &agel);
    float radian = agel * 3.14 / 180;
    float result = a * b * sin(radian) / 2;
    printf("Площадь: %.2f", result);

    return 0;
}