#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, x, r1, r2;
    scanf("%lf %lf %lf", &a, &b, &c);
    x = pow(b, 2) - 4 * a * c;

    if (x < 0 || a == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        r1 = (-b + sqrt(x)) / (2 * a);
        r2 = (-b - sqrt(x)) / (2 * a);
        printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
    }

    return 0;
}
