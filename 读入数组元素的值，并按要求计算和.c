#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[6][5]; int i, j;
	for(i=1;i<=4;i++)
		for (j = 1; j <= 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	for (i = 1; i <= 4; i++)
	{
		a[i][4] = 0;
		for (j = 1; j <= 3; j++)
			a[i][4] += a[i][j];
	}
	for (i = 1; i <= 3; i++)
	{
		a[5][i] = 0;
		for (j = 1; j <= 4; j++)
			a[5][i] += a[j][i];
	}
	for (i = 1, a[5][4]=0 ; i <= 3; i++)
	{
		a[5][4] += a[5][i];
	}
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 4; j++)
		{
			printf("%4d", a[i][j]);

		}
		printf("\n");
	}
	return 0;
}