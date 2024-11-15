#include <stdio.h>

typedef struct
{
    int tempoTotal;
    int esperando;
} Amigo;

int main()
{
    int quantidade, tempoAtual = 1;
    scanf("%d", &quantidade);

    Amigo amigos[101] = {0};
    char evento;
    int x;

    for (int i = 0; i < quantidade; i++)
    {
        scanf(" %c %d", &evento, &x);

        if (evento == 'R')
        { 
            amigos[x].esperando = tempoAtual;
        }
        else if (evento == 'E')
        {
            if (amigos[x].esperando != 0)
            {
                amigos[x].tempoTotal += tempoAtual - amigos[x].esperando;
                amigos[x].esperando = 0; 
            }
        }
        else if (evento == 'T')
        {                        
            tempoAtual += x - 2; 
        }

        tempoAtual++;
    }

    for (int i = 1; i <= 100; i++)
    {
        if (amigos[i].tempoTotal > 0 || amigos[i].esperando != 0)
        {
            if (amigos[i].esperando != 0)
            {
                amigos[i].tempoTotal = -1;
            }
            printf("%d %d\n", i, amigos[i].tempoTotal);
        }
    }

    return 0;
}
