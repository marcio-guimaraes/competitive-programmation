#include <stdio.h>

int main()
{

    int total = 0;
    float num;

    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &num);
        if (num > 0)
        {
            total++;
        }
    }

    printf("%d valores positivos\n", total);

    return 0;
}