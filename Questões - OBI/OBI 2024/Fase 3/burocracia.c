#include <stdio.h>

void reconstrucao(int momento, int donodetudo, int numeroNobres, int superiores[]);

int main()
{

    int numeroNobres;
    scanf("%d", &numeroNobres);

    int superiores[numeroNobres - 1];
    for (int i = 0; i < numeroNobres - 1; i++)
    {
        scanf("%d", &superiores[i]);
    }

    int numeroOperacoes;
    scanf("%d", &numeroOperacoes);

    while (numeroOperacoes--)
    {
        int forma;
        scanf("%d", &forma);

        if (forma == 1)
        {
            int mandante, niveis;
            scanf("%d %d", &mandante, &niveis);

            int momento = superiores[mandante - 2];

            
            for (int i = 0; i < niveis-1; i++)
            {
                momento = superiores[momento - 2];
            }
            printf("%d\n", momento);
            
        }
        else if (forma == 2)
        {
            int donodetudo;
            scanf("%d", &donodetudo);
            int momento = donodetudo;
            reconstrucao(momento, donodetudo, numeroNobres, superiores);
        }
    }

    return 0;
}

void reconstrucao(int momento, int donodetudo, int numeroNobres, int superiores[])
{

    for (int i = 0; i < numeroNobres - 1; i++)
    {
        if (superiores[i] == momento)
        {
            int temp = i + 2;
            superiores[i] = donodetudo;
            reconstrucao(temp, donodetudo, numeroNobres, superiores);
        }
    }
}