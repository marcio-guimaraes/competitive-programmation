#include <stdio.h>

int main()
{

    int num, count = 5, total = 0;

    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            total++;
        }
    }

    printf("%d valores pares\n", total);

    return 0;
}