#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
 {
	double wn(double x);
	int n, i=1; double a, b, all=0, s,h;
	scanf("%lf,%lf,%d", &a, &b, &n);
	h = fabs(a - b) / n;
	for (;i<=n;i++)
	{
		s = (wn(a) + wn(a + h)) * h * 0.5; //小矩形面积
		//s = wn(a + (i - 1) * h) * h;
		//printf("s%d=%lf\n", i, s);
		all += s; a += h;
	}
	printf("%.2lf", all);
	return 0;
}
double wn(double x)//原函数求值
{
	double y; y = 2 * pow(x, 5) + 5 * pow(x, 3);
	return y;
}
