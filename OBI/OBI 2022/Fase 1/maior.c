#include <stdio.h>

int main()
{

    int n, m, s;
    scanf("%d %d %d", &n, &m, &s);
    int maior = -1;

    for (int i = n; i <= m; i++)
    {
        int soma = 0, aux = i;
        while (aux != 0)
        {
            soma += aux % 10;
            aux /= 10;
        }
        if (soma == s && i > maior)
        {
            maior = i;
        }
    }

    printf("%d\n", maior);

    return 0;
}