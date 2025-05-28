#include <stdio.h>

int main()
{
    int tempo, velocidade_media;
    float distancia, litros;

    scanf("%d %d", &tempo, &velocidade_media);

    distancia = tempo * velocidade_media;

    litros = distancia / 12.0;

    printf("%.3f\n", litros);

    return 0;
}
