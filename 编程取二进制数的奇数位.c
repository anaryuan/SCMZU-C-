#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	short n, a, b, s = 0; int i;
	scanf("%o", &n);
	for (i = 1; i <= 8; i++)
	{
		a = n >> (2 * i- 1);
		b = (a & 1)<<(i - 1);
		s += b;
	}
	printf("result:%o", s);
	return 0;
}