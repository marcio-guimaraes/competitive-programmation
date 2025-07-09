#include <stdio.h>

int main()
{

    int codigo, quantidade;
    float valor;
    scanf("%d %d", &codigo, &quantidade);

    switch (codigo)
    {
    case 1:
        valor = quantidade * 4;
        printf("Total: R$ %.2f\n", valor);
        break;
    case 2:
        valor = quantidade * 4.5;
        printf("Total: R$ %.2f\n", valor);
        break;
    case 3:
        valor = quantidade * 5;
        printf("Total: R$ %.2f\n", valor);
        break;
    case 4:
        valor = quantidade * 2;
        printf("Total: R$ %.2f\n", valor);
        break;
    case 5:
        valor = quantidade * 1.5;
        printf("Total: R$ %.2f\n", valor);
        break;
    }

    return 0;
}