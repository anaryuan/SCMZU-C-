#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[16][16] = { 0 };
	int i, j, n, k, ii, jj;
	scanf("%d", &n);
	i = 1; j = (n + 1) / 2;
	a[i][j] = 1;//第一行中间位置赋值1
	for (k = 2; k <= n * n; k++)
	{
		ii = i; jj = j;//记录上次位置
		i--; j++;//下一个数放在上一行下一列
		if (!i)i = n;
		if (j == n + 1)j = 1;//判断是否到头
		if (a[i][j])//判断是否有数
		{
			i = ii + 1;
			j = jj;
		}
		a[i][j] = k;//赋值
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}