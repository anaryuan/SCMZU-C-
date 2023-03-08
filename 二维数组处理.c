#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[5][5] = { 0 };
	int i, j;
	int max=-1, min=10086, sum=0;
	int ra, ca, ri, ci;
	for(i=1;i<=4;i++)
		for (j = 1; j <= 4; j++)
		{
			scanf("%d", &a[i][j]);
		}
	for (i = 1; i <= 4; i++)
		for (j = 1; j <= 4; j++)
		{
			if (max < a[i][j])
			{
				max = a[i][j]; //printf("max=%d %d\n", max,a[i][j]);
				ra = i; ca = j;
			}
			if (min > a[i][j])
			{
				min = a[i][j]; //printf("min=%d %d\n", min, a[i][j]);
				ri = i; ci = j;
			}
		}
	printf("max:%d row:%d col:%d\n", max, ra, ca);
	printf("min:%d row:%d col:%d\n", min, ri, ci);
	for (i = 1, ra = 0, ca = 0; i <= 4; i++)
	{
		ra += a[i][i];
		ca += a[i][5 - i];
	}
	printf("%d,%d\n", ra, ca);
	printf("transport matrix:\n");
	for (i = 1; i <= 4; i++)
	{ 
		for (j = 1; j <= 4; j++)
		{
			printf("%5d", a[j][i]);
		}
		printf("\n");
	}
	for (i = 1; i <= 4; i++)
	{
		sum += a[1][i];
		sum += a[4][i];
		sum += a[i][1];
		sum += a[i][4];
	}
	sum -= (a[1][1] + a[4][4] + a[1][4] + a[4][1]);
	printf("sum=%d", sum);
	return 0;
}