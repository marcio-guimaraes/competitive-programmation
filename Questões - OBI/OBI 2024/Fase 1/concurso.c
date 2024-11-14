#include <stdio.h>

int main()
{

    int quant_participantes, quant_aprovados, corte;
    scanf("%d %d", &quant_participantes, &quant_aprovados);
    int participantes[quant_participantes];

    for (int i = 0; i < quant_participantes; i++)
    {
        scanf("%d", &participantes[i]);
    }

    for (int i = 0; i < quant_participantes; i++)
    {
        for (int j = i; j < quant_participantes; j++)
        {
            if (participantes[i] < participantes[j])
            {
                int aux = participantes[i];
                participantes[i] = participantes[j];
                participantes[j] = aux;
            }
        }
    }

    corte = participantes[quant_aprovados - 1];
    printf("%d", corte);

    return 0;
}