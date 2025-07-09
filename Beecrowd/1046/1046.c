#include <stdio.h>

int main()
{
    int hora_inicial, hora_final, duracao;

    scanf("%d %d", &hora_inicial, &hora_final);

    if (hora_final > hora_inicial)
    {
        duracao = hora_final - hora_inicial;
    }
    else
    {
        duracao = 24 - hora_inicial + hora_final;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}
