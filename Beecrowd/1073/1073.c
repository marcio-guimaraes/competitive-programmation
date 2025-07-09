#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            int quadrado = i * i;
            printf("%d^2 = %d\n", i, quadrado);
        }
    }

    return 0;
}
