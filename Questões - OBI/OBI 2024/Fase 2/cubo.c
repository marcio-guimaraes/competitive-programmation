#include <stdio.h>
#include <math.h>

int main()
{

    int numLados, cubo[4] = {0};
    scanf("%d", &numLados);
    // int matriz[numLados][numLados];

    for (int i = 0; i < numLados; i++)
    {
        for (int j = 0; j < numLados; j++)
        {
            for (int k = 0; k < numLados; k++)
            {
                int verificador = 0;
                if (i == 0 || i == numLados - 1)
                {
                    verificador++;
                }
                if (j == 0 || j == numLados - 1)
                {
                    verificador++;
                }
                if (k == 0 || k == numLados - 1)
                {
                    verificador++;
                }

                cubo[verificador]++;
            }
        }
    }

    /*int quant;
    quant = cubo[3];
    cubo[3] = cubo[3] * 3 - quant;
    quant = cubo[2];
    cubo[2] = cubo[2] * 2 - quant;*/

    printf("%d\n%d\n%d\n%d\n", cubo[0], cubo[1], cubo[2], cubo[3]);

    return 0;
}