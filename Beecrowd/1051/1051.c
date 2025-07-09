#include <stdio.h>

int main()
{
    float renda;
    scanf("%f", &renda);

    if (renda <= 2000)
    {
        printf("Isento\n");
    }
    else if (renda >= 2000.01 && renda <= 3000)
    {
        printf("R$ %.2f\n", (renda - 2000) * 0.08);
    }
    else if (renda >= 3000.01 && renda <= 4500)
    {
        printf("R$ %.2f\n", 80 + (renda - 3000.01) * 0.18);
    }
    else if (renda > 4500)
    {
        printf("R$ %.2f\n", 350 + (renda - 4500) * 0.28);
    }

    return 0;
}
