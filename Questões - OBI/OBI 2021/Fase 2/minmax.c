#include <stdio.h>
#include <string.h>

int main()
{

	int s, a, b, maior = 0, menor = 10001;

	scanf("%d %d %d", &s, &a, &b);

	for (int i = a; i <= b; i++)
	{
		char str[10];
		sprintf(str, "%d", i);
		int tam = strlen(str);
		int soma = 0;
		for (int j = 0; j < tam; j++)
		{
			soma += str[j] - '0';
		}
		if (soma == s)
		{
			if (i < menor)
			{
				menor = i;
			}
			if (i > maior)
			{
				maior = i;
			}
		}
	}
	printf("%d\n%d\n", menor, maior);

	return 0;
}