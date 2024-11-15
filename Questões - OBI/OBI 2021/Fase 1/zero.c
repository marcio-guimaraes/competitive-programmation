#include <stdio.h>

int main()
{

    int quantidade;
    scanf("%d", &quantidade);

    int lista[quantidade], numero, indice = 0;

    while (quantidade--)
    {
        scanf("%d", &numero);

        if (numero == 0)
        {
            indice--;
        }
        else
        {
            lista[indice] = numero;
            indice++;
        }
        
    }
    int soma = 0;
    for (int i = 0; i < indice; i++)
    {
        soma += lista[i];
    }
    printf("%d\n", soma);

    return 0;
}