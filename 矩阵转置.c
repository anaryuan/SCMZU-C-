#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[3][3], b[3][3] = {0}, i, j;
	int* p = a;
	for(i=0;i<3;i++)
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			b[i][j] = a[j][i];
		}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j != 2)
				printf("%d ", b[i][j]);
			else
				printf("%d", b[i][j]);
		}printf("\n\n");
	}
	return 0;
}