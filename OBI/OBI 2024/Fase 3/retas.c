#include <stdio.h>
#include <stdlib.h>

int main()
{

    int quantLinhas, x1, x2;
    scanf("%d %d %d", &quantLinhas, &x1, &x2);
    int diff = abs(x1 - x2);

    int a[quantLinhas], b[quantLinhas];
    for (int i = 0; i < quantLinhas; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }

    int x[quantLinhas][diff];
    int y[quantLinhas][diff];

    for (int i = 0; i < quantLinhas; i++)
    {
        for (int j = 0; j < diff; j++)
        {
            x[i][j] = x1 + j;
            y[i][j] = a[i] * x[i][j] + b[i];
        }
    }

    int contador = 0;
    for (int i = 0; i < quantLinhas; i++)
{
    for (int j = 0; j < diff; j++)
    {
        for (int k = i; k < quantLinhas; k++)
        {
            for (int l = (k == i ? j + 1 : 0); l < diff; l++)
            {
                if (x[i][j] == x[k][l] && y[i][j] == y[k][l])
                {
                    contador++;
                }
            }
        }
    }
}


    printf("%d\n", contador);

    return 0;
}