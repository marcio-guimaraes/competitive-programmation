#include <stdio.h>
#include <stdlib.h>

int main()
{

    int esquerda, direita, total;
    scanf("%d %d", &esquerda, &direita);

    if (esquerda > direita)
    {
        total = esquerda + direita;
    }
    else
    {
        total = (direita - esquerda) * 2;
    }

    printf("%d", total);

    return 0;
}