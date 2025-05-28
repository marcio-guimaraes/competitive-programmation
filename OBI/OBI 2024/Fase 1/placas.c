#include <stdio.h>
#include <string.h>

int main()
{

    char placas[8];
    int verificador = 0;
    scanf("%s", placas);

    if (placas[3] == '-')
    {
        verificador++;
        for (int i = 0; i < 8; i++)
        {

            if (i > 3)
            {
                if (placas[i] - '0' >= 0 && placas[i] - '0' <= 9)
                {
                    verificador++;
                }
            }
            else if (placas[i] >= 'A' && placas[i] <= 'Z')
            {
                verificador++;
            }
        }
    }
    else
    {
        for (int i = 0; i < 7; i++)
        {

            if (i == 3 || i == 5 || i == 6)
            {
                if (placas[i] - '0' >= 0 && placas[i] - '0' <= 9)
                {
                    verificador++;
                }
            }
            else if (placas[i] >= 'A' && placas[i] <= 'Z')
            {
                verificador++;
            }
        }
    }
    
    if (verificador == 8)
    {
        printf("1");
    } else if (verificador == 7)
    {
        printf("2");
    } else
    {
        printf("0");
    }
    
    
    

    return 0;
}