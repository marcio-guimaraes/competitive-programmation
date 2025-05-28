#include <stdio.h>

int main()
{
    char nome[20];
    double fixo, vendas;

    scanf("%s %lf %lf", nome, &fixo, &vendas);
    printf("TOTAL = R$ %.2lf\n", fixo + vendas * 0.15);
    
    return 0;
}