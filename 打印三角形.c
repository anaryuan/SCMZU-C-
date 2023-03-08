#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, i, j;
	scanf("%d", &n);
	//n = 4;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n-i; j++) { printf(" "); }
		for (j = 1; j <= 2 * i - 1; j++) { printf("*"); }
		printf("\n");
	}
	return 0;
}