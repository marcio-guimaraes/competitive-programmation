#include <stdio.h>

int main()
{

    int qCaracteres, qMensEnviada;
    scanf("%d %d", &qCaracteres, &qMensEnviada);

    char alfAlien[qCaracteres + 1];
    scanf("%s", alfAlien);

    getchar();
    char mensagem[qMensEnviada + 1];
    scanf("%s", mensagem);

    int verificador;
    for (int i = 0; i < qMensEnviada; i++)
    {
        verificador = 0;
        for (int j = 0; j < qCaracteres; j++)
        {
            if (mensagem[i] == alfAlien[j])
            {
                verificador = 1;
            }
        }
        if (verificador == 0)
        {
            break;
        }
    }

    if (verificador == 1)
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }

    return 0;
}