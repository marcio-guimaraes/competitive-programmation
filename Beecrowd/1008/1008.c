#include <stdio.h>

int main()
{
    int numero, horas;
    float renumeracao_hora, salario;

    scanf("%d", &numero);
    scanf("%d", &horas);
    scanf("%f", &renumeracao_hora);

    salario = horas * renumeracao_hora;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", numero, salario);
    
    return 0;
}