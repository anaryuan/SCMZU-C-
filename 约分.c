#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int q, w;
	int i;
	scanf("%d%d", &q, &w);
	for (i = 2; i <= q && i <= w; i++)
	{
		if (0 == q % i && 0 == w % i)
		{
			q /= i;
			w /= i;
			i = 2;
		}
	}
	printf("%d %d", q, w);
	return 0;
}