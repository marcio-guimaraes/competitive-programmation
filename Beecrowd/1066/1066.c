#include <stdio.h>

int main()
{

    int count = 5, num, positivos = 0, negativos = 0, pares = 0, impares = 0;

    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num);
        if (num > 0)
        {
            positivos++;
        }
        else if (num < 0)
        {
            negativos++;
        }

        if (num % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", pares, impares, positivos, negativos);

    return 0;
}