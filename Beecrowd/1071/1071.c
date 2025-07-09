#include <stdio.h>

int main()
{

    int x, y, soma = 0;
    scanf("%d %d", &x, &y);

    if (x < y)
    {
        x++;
        while (x < y)
        {
            if (x % 2 != 0)
            {
                soma = soma + x;
            }
            x++;
        }
    }
    else if (y < x)
    {
        y++;
        while (y < x)
        {
            if (y % 2 != 0)
            {
                soma = soma + y;
            }
            y++;
        }
    }

    printf("%d\n", soma);
    return 0;
}