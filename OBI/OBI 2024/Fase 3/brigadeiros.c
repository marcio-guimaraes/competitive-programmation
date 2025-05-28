#include <stdio.h>

int main()
{

    int quantPratos;
    int eueamigos;
    int tempo;
    scanf("%d %d %d", &quantPratos, &eueamigos, &tempo);

    int pratos[quantPratos];
    for (int i = 0; i < quantPratos; i++)
    {
        scanf("%d", &pratos[i]);
    }

    int alunos[quantPratos];
    for (int i = 0; i < quantPratos; i++)
    {
        scanf("%d", &alunos[i]);
    }

    for (int i = 0; i < tempo; i++)
    {
        if (alunos[i] == 1)
        {
            if (pratos[i - 1] > pratos[i] && alunos[i - 1] == 0)
            {
                alunos[i] = 0;
                alunos[i - 1] = 1;
                continue;
            }
            else if (pratos[i + 1] < pratos[i] && alunos[i + 1] == 0)
            {
                alunos[i] = 0;
                alunos[i + 1] = 1;
                continue;
            }
        }
    }

    return 0;
}