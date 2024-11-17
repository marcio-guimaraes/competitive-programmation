#include <stdio.h>

int main()
{

    int tam;
    scanf("%d", &tam);
    int numeros[tam][tam];
    int linha = 0, coluna = 0;

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            scanf("%d", &numeros[i][j]);
            if (numeros[i][j] == 0)
            {
                linha = i;
                coluna = j;
            }
        }
    }

    // Soma1 vai somar uma linha em que a quantidade está certa
    // Soma2 vai somar as quantidade para descobrir a diferença
    int soma1 = 0;
    int soma2 = 0;

    if (linha > 0)
    {
        for (int i = 0; i < tam; i++)
        {
            soma1 += numeros[linha - 1][i];
            soma2 += numeros[linha][i];
        }
    }
    else
    {
        for (int i = 0; i < tam; i++)
        {
            soma1 += numeros[linha + 1][i];
            soma2 += numeros[linha][i];
        }
    }

    int novoNumero = soma1 - soma2;

    printf("%d\n%d\n%d\n", novoNumero, linha + 1, coluna + 1);

    return 0;
}