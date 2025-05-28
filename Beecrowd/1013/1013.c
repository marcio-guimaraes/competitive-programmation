#include <stdio.h>
#include <stdlib.h>

int maxab(int A, int B)
{
    return (A + B + abs(A - B)) / 2;
}

int max(int A, int B, int C)
{
    return maxab(maxab(A, B), C);
}

int main()
{
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);
    printf("%d eh o maior\n", max(A, B, C));
    
    return 0;
}
