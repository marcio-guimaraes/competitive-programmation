#include <stdio.h>

int main()
{
    int codigo1, numero1, codigo2, numero2;
    float valor_unit1, valor_unit2, total;

    scanf("%d %d %f %d %d %f", &codigo1, &numero1, &valor_unit1, &codigo2, &numero2, &valor_unit2);
    total = numero1 * valor_unit1 + numero2 * valor_unit2;
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    
    return 0;
}