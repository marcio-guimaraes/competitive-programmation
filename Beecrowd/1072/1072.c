#include <stdio.h>

int main()
{

    int n, x, contador = 1, in = 0, out = 0;
    scanf("%d", &n);

    while (contador <= n)
    {
        contador++;
        scanf("%d", &x);

        if (x >= 10 && x <= 20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    printf("%d in\n%d out\n", in, out);

    return 0;
}