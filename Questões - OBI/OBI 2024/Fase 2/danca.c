#include <stdio.h>

int main()
{

    int linha, coluna, quantidade;
    scanf("%d %d %d", &linha, &coluna, &quantidade);

    int matriz[linha][coluna], contador = 1;
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            matriz[i][j] = contador;
            contador++;
        }
    }

    char opcao;
    int louc1, louc2;
    int auxiliar;

    for (int i = 0; i < quantidade; i++)
    {
        scanf(" %c", &opcao);
        scanf("%d %d", &louc1, &louc2);
        if (opcao == 'C')
        {
            for (int j = 0; j < linha; j++)
            {
                auxiliar = matriz[j][louc1 - 1];
                matriz[j][louc1 - 1] = matriz[j][louc2 - 1];
                matriz[j][louc2 - 1] = auxiliar;
            }
        }
        if (opcao == 'L')
        {
            for (int j = 0; j < coluna; j++)
            {
                auxiliar = matriz[louc1 - 1][j];
                matriz[louc1 - 1][j] = matriz[louc2 - 1][j];
                matriz[louc2 - 1][j] = auxiliar;
            }
        }
    }

        for (int k = 0; k < linha; k++)
        {
            for (int j = 0; j < coluna; j++)
            {
                printf("%d ", matriz[k][j]);
            }
            printf("\n");
        }

    return 0;
}