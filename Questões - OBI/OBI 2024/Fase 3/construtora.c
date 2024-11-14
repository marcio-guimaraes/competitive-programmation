#include <stdio.h>

int main()
{

    int quantidade, total = -1;
    scanf("%d", &quantidade);

    int predios[quantidade];

    for (int i = 0; i < quantidade; i++)
    {
        scanf("%d", &predios[i]);
    }

    int menor;
    int maior;

    do
    {
        menor = predios[0];
        maior = predios[0];
        for (int i = 0; i < quantidade; i++)
        {
            if (menor > predios[i])
            {
                menor = predios[i];
            }
            if (maior < predios[i])
            {
                maior = predios[i];
            }
        }

        int sequencia[quantidade][2];
        int maiorSequencia = 0;
        int maiorId = 0;
        int count = 0;

        for (int i = 0; i < quantidade; i++)
        {
            if (predios[i] == menor)
            {
                int j = i;
                sequencia[count][0] = j;
                sequencia[count][1] = 0;
                while (menor == predios[j])
                {
                    sequencia[count][1]++;
                    j++;
                }
                i = j;
                if (sequencia[count][1] > maiorSequencia)
                {
                    maiorSequencia = sequencia[count][1];
                    maiorId = sequencia[count][0];
                }

                count++;
            }
        }

        for (int i = 0; i < maiorSequencia; i++)
        {
            predios[i + maiorId]++;
        }

        total++;

    } while (menor != maior);

    printf("%d\n", total);

    return 0;
}