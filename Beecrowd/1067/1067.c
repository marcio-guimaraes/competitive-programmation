#include <stdio.h>

int main()
{
    int numero = 1, x;
    scanf("%d", &x);

    while (numero <= x)
    {
        printf("%d\n", numero);
        numero += 2;
    }

    return 0;
}
