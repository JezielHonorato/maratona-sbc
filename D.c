#include <stdio.h>

int main()
{
	int n, m, fim = 0, h = 1, v = 1, r = 1;
	scanf("%d %d", &n, &m);

	char matriz[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf(" %c", &matriz[i][j]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m / 2; j++)
		{
			if (matriz[i][j] != matriz[i][m - j - 1])
			{
				h = 0;
				fim = 1;
				break;
			}
		}
		if (fim == 1)
		{
			break;
		}
	}

	fim = 1;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n / 2; j++)
		{
			if (matriz[j][i] != matriz[n - j - 1][i])
			{
				v = 0;
				fim = 1;
				break;
			}
		}
		if (fim == 1)
		{
			break;
		}
	}

	fim = 1;

	if (m != n)
	{
		r = 0;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (matriz[i][j] != matriz[j][n - i - 1])
				{
					r = 0;
					break;
				}
			}
			if (fim == 1)
			{
				break;
			}
		}
	}

	int total = 1;
	if (r == 1)
	{
		total = total * 2;
	}
	if (v == 1)
	{
		total = total * 2;
	}
	if (h == 1)
	{
		total = total * 2;
	}
	printf("%d", total);

	return 0;
}