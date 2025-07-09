#include <stdio.h>

int main() {
    int h_inicial, m_inicial, h_final, m_final, horas_jogadas, minutos_jogados;
    scanf("%d %d %d %d", &h_inicial, &m_inicial, &h_final, &m_final);

    horas_jogadas = h_final - h_inicial;
    minutos_jogados = m_final - m_inicial;

    if (minutos_jogados < 0) {
        minutos_jogados += 60;
        horas_jogadas--;
    }

    if (horas_jogadas < 0) {
        horas_jogadas += 24;
    }

    if (horas_jogadas == 0 && minutos_jogados == 0) {
        horas_jogadas = 24;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas_jogadas, minutos_jogados);

    return 0;
}
