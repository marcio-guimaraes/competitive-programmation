#include <stdio.h>

int main()
{
    int dia_inicio, hora_inicio, min_inicio, seg_inicio;
    int dia_fim, hora_fim, min_fim, seg_fim;

    scanf(" Dia %d", &dia_inicio);
    scanf("%d : %d : %d", &hora_inicio, &min_inicio, &seg_inicio);
    scanf(" Dia %d", &dia_fim);
    scanf("%d : %d : %d", &hora_fim, &min_fim, &seg_fim);

    int dia = dia_fim - dia_inicio;
    int hora = hora_fim - hora_inicio;
    int minuto = min_fim - min_inicio;
    int segundo = seg_fim - seg_inicio;

    if (segundo < 0)
    {
        segundo += 60;
        minuto--;
    }
    if (minuto < 0)
    {
        minuto += 60;
        hora--;
    }
    if (hora < 0)
    {
        hora += 24;
        dia--;
    }

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dia, hora, minuto, segundo);
    return 0;
}
