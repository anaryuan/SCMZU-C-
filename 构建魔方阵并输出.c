#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[16][16] = { 0 };
	int i, j, n, k, ii, jj;
	scanf("%d", &n);
	i = 1; j = (n + 1) / 2;
	a[i][j] = 1;//��һ���м�λ�ø�ֵ1
	for (k = 2; k <= n * n; k++)
	{
		ii = i; jj = j;//��¼�ϴ�λ��
		i--; j++;//��һ����������һ����һ��
		if (!i)i = n;
		if (j == n + 1)j = 1;//�ж��Ƿ�ͷ
		if (a[i][j])//�ж��Ƿ�����
		{
			i = ii + 1;
			j = jj;
		}
		a[i][j] = k;//��ֵ
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