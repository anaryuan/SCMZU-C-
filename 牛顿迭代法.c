#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	double x, x0=10086, f, f1;
	scanf("%lf", &x);
	for (; fabs(x - x0) >= 0.000001;)
		//while(fabs(x - x0) >= 0.000001)
	{
		x0 = x; //printf("1:%lf\n", x);
		f = 2 * x * x * x - 4 * x * x + 3 * x - 6;
		f1 = 6 * x * x - 8 * x + 3;
		x = x0 - f / f1; //printf("2:%lf\n", x);
	}
	printf("%.2lf", x);
	return 0;
}