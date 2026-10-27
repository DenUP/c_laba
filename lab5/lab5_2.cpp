#include <iostream>

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    float onePolovina = 0;
    float twoPolovina = 0;
    int dlina = 6;
    // int dl = arr.size();
    int polovina = 6 / 2; // узнаю половину массива

    for (int i = 0; i < polovina; i++)
    {
        onePolovina = arr[i] + onePolovina;
    }

    for (int i = polovina; i < dlina; i++)
    {
        twoPolovina = arr[i] + twoPolovina;
    }
    std::cout << onePolovina / twoPolovina;

    return 0;
}