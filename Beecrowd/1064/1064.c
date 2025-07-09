#include <stdio.h>

int main()
{

    int quantidade = 0;
    float num, total = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &num);
        if (num > 0)
        {
            quantidade++;
            total += num;
        }
    }

    printf("%d valores positivos\n%.1f\n", quantidade, total / quantidade);

    return 0;
}