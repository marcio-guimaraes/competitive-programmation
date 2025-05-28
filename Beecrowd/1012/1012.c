#include <stdio.h>

int main()
{

    double a, b, c, triangulo, circulo, trapezio, quadrado, retangulo;
    const double pi = 3.14159;

    scanf("%lf %lf %lf", &a, &b, &c);

    triangulo = a * c / 2;
    circulo = pi * c * c;
    trapezio = (a + b) * c / 2;
    quadrado = b * b;
    retangulo = a * b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo);
    
    return 0;
}