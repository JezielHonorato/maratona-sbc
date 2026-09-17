#include <stdio.h>

int main(void)
{
	int t, c, k;

	scanf("%d %d %d", &t, &c, &k);

	if (c < (t * k))
	{
		printf("%d", c);
	}
	else
	{
		printf("%d", k * t);
	}
	return 0;
}
