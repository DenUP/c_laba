#include <cstdio>
#include <cmath>

int main()
{
    float summa;
    printf("Введите сумму покупки и нажмите Enter \n");
    scanf("%f", &summa);
    if (summa > 1000)
    {
        printf("Вам предоставляется скидка 10%% \n");
        float descount = summa / 100 * 10;
        float result = summa - descount;
        printf("Сумма покупки с учетом скидки: %.2f", result);
    }
    else
    {
        printf("Вам не предоставляется скидка \n");
        printf("Сумма покупки: %.2f  руб. \n", summa);
    }

    return 0;
}
