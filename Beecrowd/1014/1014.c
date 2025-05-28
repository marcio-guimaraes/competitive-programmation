#include <stdio.h>

int main()
{
    int percorrido;
    float gasto;
    
    scanf("%d %f", &percorrido, &gasto);
    printf("%.3f km/l\n", percorrido / gasto);

    return 0;
}