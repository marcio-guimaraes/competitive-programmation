#include <stdio.h>

int main()
{

    char opcao;
    int vitoria = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf(" %c", &opcao);
        if (opcao == 'V')
        {
            vitoria++;
        }
    }

    if (vitoria >= 5)
    {
        printf("1\n");
    }
    else if (vitoria >= 3 && vitoria < 5)
    {
        printf("2\n");
    }
    else if (vitoria >= 1 && vitoria < 3)
    {
        printf("3\n");
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}