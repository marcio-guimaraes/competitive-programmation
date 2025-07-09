#include <stdio.h>

int main()
{
    double n1, n2, n3, n4, media, nota_exame, media_final;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;

    if (media >= 7.0)
    {
        printf("Media: %.1lf\n", media);
        printf("Aluno aprovado.\n");
    }
    else if (media < 5.0)
    {
        printf("Media: %.1lf\n", media);
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Media: %.1lf\n", media);
        printf("Aluno em exame.\n");

        scanf("%lf", &nota_exame);

        printf("Nota do exame: %.1lf\n", nota_exame);

        media_final = (media + nota_exame) / 2;

        if (media_final >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", media_final);
    }

    return 0;
}
