#include<stdio.h>
#include<math.h>
int main()
{
	double avg[6] = { 0 }, l[11], max = 0, min = 10000, RMSE=0, ss=0, Avg=0,sss=0;
	double a[12][7]={0};
	int i, j, stu[10] = {0}, cou[10] = {0}, flag = 1;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			scanf("%lf", &a[i][j]);
			a[11][j] += a[i][j];
			a[i][6] += a[i][j];
			ss += a[i][j];
			if (max < a[i][j])
			{
				max = a[i][j];
			}
			if (min > a[i][j])
				min = a[i][j];
		}
	}Avg = ss / 50.0;
	printf("averstu:");
	for (i = 1; i <= 10; i++)
	{
		l[i] = a[i][6]/5.0;
		printf("%.2lf ", l[i]);
	}printf("\n");
	printf("avercourse:");
	for (j = 1; j <= 5; j++)
	{
		avg[j] = a[11][j] / 10.0;
		printf("%.2lf ", avg[j]);
	}printf("\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			if (max == a[i][j])
				{
					flag += 1;	stu[flag] = i;
					cou[flag] = j;
				}
				stu[1] = i;
				cou[1] = j;
		}
	}
	for(i=2;i<=flag;i++)
	{
	printf("highest:%.2lf student:%d course:%d\n", max, stu[i], cou[i]);//printf“”“”
	}
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 5; j++)
			sss += pow(a[i][j] - Avg,2);
	}
	RMSE = sss / 50.0;
	printf("variance:%.2lf", RMSE);
	return 0;
}
