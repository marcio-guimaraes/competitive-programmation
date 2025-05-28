#include <stdio.h>

int main() {
    double valor;
    int numero, nota_100, nota_50, nota_20, nota_10, nota_5, nota_2;
    int moeda_1, moeda_50, moeda_25, moeda_10, moeda_5, moeda_1centavo;

    scanf("%lf", &valor);
    numero = (int)(valor * 100 + 0.5); 

    nota_100 = numero / 10000; numero %= 10000;
    nota_50 = numero / 5000; numero %= 5000;
    nota_20 = numero / 2000; numero %= 2000;
    nota_10 = numero / 1000; numero %= 1000;
    nota_5 = numero / 500; numero %= 500;
    nota_2 = numero / 200; numero %= 200;

    moeda_1 = numero / 100; numero %= 100;
    moeda_50 = numero / 50; numero %= 50;
    moeda_25 = numero / 25; numero %= 25;
    moeda_10 = numero / 10; numero %= 10;
    moeda_5 = numero / 5; numero %= 5;
    moeda_1centavo = numero;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota_100);
    printf("%d nota(s) de R$ 50.00\n", nota_50);
    printf("%d nota(s) de R$ 20.00\n", nota_20);
    printf("%d nota(s) de R$ 10.00\n", nota_10);
    printf("%d nota(s) de R$ 5.00\n", nota_5);
    printf("%d nota(s) de R$ 2.00\n", nota_2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda_1);
    printf("%d moeda(s) de R$ 0.50\n", moeda_50);
    printf("%d moeda(s) de R$ 0.25\n", moeda_25);
    printf("%d moeda(s) de R$ 0.10\n", moeda_10);
    printf("%d moeda(s) de R$ 0.05\n", moeda_5);
    printf("%d moeda(s) de R$ 0.01\n", moeda_1centavo);

    return 0;
}
