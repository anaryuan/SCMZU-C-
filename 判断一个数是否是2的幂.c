#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, i, c = 0, e;
	scanf("%d", &n);
	e = n;
	for (;n>0;)
	{
		i = n & 1;
		if (1 == i)
		{
			c++;
		}
		n >>=1; //printf("%o\n", n);
	}
	if (c == 1)
	{
		printf("%d is a power of 2", e);
	}
	else
	{
		printf("%d is not a power of 2", e);
	}
	return 0;
}