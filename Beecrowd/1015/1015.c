#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, a, b, c;

    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    a = x2 - x1;
    b = y2 - y1;
    c = sqrt(pow(a,2) + pow(b,2));
    
    printf("%.4f\n", c);

    return 0;
}