#include <stdio.h>

int main()
{

    int tam, valor;
    scanf("%d %d", &tam, &valor);
    int numeros[tam], contador = 0;

    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &numeros[i]);
    }

    int indice2;

    for (int i = 0; i < tam; i++)
    {
        int soma = 0;
        for (int j = i; j < tam; j++)
        {
            soma += numeros[j];
            if (soma == valor)
            {
                contador++;
                indice2 = j + 1;
                while (numeros[indice2] == 0)
                {
                    indice2++;
                    contador++;
                }

                break;
            }
        }
    }

    printf("%d\n", contador);

    return 0;
}