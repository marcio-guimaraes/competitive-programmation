#include <stdio.h>
#include <stdbool.h>

#define NUM_NAIPES 4
#define NUM_CARTAS_NAIPE 13

int main(void)
{

    char baralho[157], naipe;
    int contador[NUM_NAIPES][NUM_CARTAS_NAIPE] = {0}, valor, index_naipe, faltando[NUM_NAIPES] = {0};
    bool duplicata[NUM_NAIPES] = {false};

    scanf("%156s", baralho);

    for (int i = 0; baralho[i] != '\0'; i += 3)
    {
        valor = (baralho[i] - '0') * 10 + (baralho[i + 1] - '0');
        naipe = baralho[i + 2];

        switch (naipe)
        {
        case 'C':
            index_naipe = 0;
            break;

        case 'E':
            index_naipe = 1;
            break;

        case 'U':
            index_naipe = 2;
            break;

        case 'P':
            index_naipe = 3;
            break;

        default:
            break;
        }
        contador[index_naipe][valor - 1]++;
    }

    for (int i = 0; i < NUM_NAIPES; i++)
    {
        for (int n = 0; n < NUM_CARTAS_NAIPE; n++)
        {
            if (contador[i][n] > 1)
            {
                duplicata[i] = true;
            }
            else if (contador[i][n] == 0)
            {
                faltando[i]++;
            }
        }
    }

    for (int i = 0; i < NUM_NAIPES; i++)
    {
        if (duplicata[i])
        {
            printf("erro\n");
        }
        else
        {
            printf("%d\n", faltando[i]);
        }
    }

    return 0;
}