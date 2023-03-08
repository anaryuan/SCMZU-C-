#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
double fat(double x)
{
	double i ,j=1;
	for (i = 1; i <= x; i++)
		j *= i;
	return j;
}
int main()
{
	double sin = 0, x, n,l;
	int i, j;
	scanf("%lf %lf", &x, &n);
	for (i = 1;i <= n;i++)
	{
		l= pow(-1, i + 1) * pow(x, 2*i-1) / fat(2*i-1);
		sin += l;
		//printf("%lf %.7lf\n", l, sin);
	}
	printf("%.7lf", sin);
	return 0;
}