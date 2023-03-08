#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[6] = { 0 }, * p = a, i, j, *h = NULL, f , t;
	for (i = 0; i < 6; i++)
		scanf("%d", p + i);
	for (i = 0; i < 6; i++)
	{
		f = i;
		for (j = i; j < 6; j++)
		{
			if (*(p + f) < *(p + j))f = j;
		}
		if (i != f)
		{
			t = *(p + f);
			*(p + f)= *(p + i);
			*(p + i) = t;
		}
	}
	for (i = 5; i >= 0; i--)
		printf("%d ", *(p + i));
	return 0;
}