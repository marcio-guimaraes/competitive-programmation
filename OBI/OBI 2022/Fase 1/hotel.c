#include <stdio.h>

int main()
{

    int diaria, aumento, chegada;
    scanf("%d %d %d", &diaria, &aumento, &chegada);
    int precos[31] = {0};

    for (int i = 0; i < chegada; i++)
    {
        if (i == 0)
        {
            precos[i] = diaria * (31 - i);
        }
        else if (0 < i && i < 15)
        {
            precos[i] = (diaria + i * aumento) * (31 - i);
        }
        else
        {
            precos[i] = (diaria + 14 * aumento) * (31 - i);
        }
    }

    printf("%d\n", precos[chegada - 1]);

    return 0;
}