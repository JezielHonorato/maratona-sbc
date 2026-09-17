#include <stdio.h>

int main()
{
	int n, soma = 0, menor_diferenca;
	scanf("%d", &n);

	int produtos[n];
	int metas[n];

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &produtos[i]);
		soma = soma + produtos[i];
	}

	scanf("%d", &metas[0]);
	if (metas[0] > produtos[0])
	{
		printf("%d", -1);
		return 0;
	}
	menor_diferenca = produtos[0] - metas[0];

	for (int i = 1; i < n; i++)
	{
		scanf("%d", &metas[i]);
		if (metas[i] > produtos[i])
		{
			printf("%d", -1);
			return 0;
		}
		if (menor_diferenca > produtos[i] - metas[i])
		{
			menor_diferenca = produtos[i] - metas[i];
		}
	}
	printf("%d", soma - menor_diferenca);

	return 0;
}