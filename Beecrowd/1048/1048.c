#include <stdio.h>

int main()
{
    float salario, novo_salario, reajuste;
    int percentual;

    scanf("%f", &salario);

    if (salario <= 400.00)
    {
        percentual = 15;
    }
    else if (salario <= 800.00)
    {
        percentual = 12;
    }
    else if (salario <= 1200.00)
    {
        percentual = 10;
    }
    else if (salario <= 2000.00)
    {
        percentual = 7;
    }
    else
    {
        percentual = 4;
    }

    reajuste = salario * percentual / 100.0;
    novo_salario = salario + reajuste;

    printf("Novo salario: %.2f\n", novo_salario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d %%\n", percentual);

    return 0;
}
