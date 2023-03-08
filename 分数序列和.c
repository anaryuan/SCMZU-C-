#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	double all = 2, x, y, t, e;
	int n, i = 3; scanf("%d", &n);
	if (2 == n)all = 3.5;
	for (x = 5, y = 3, all = 3.5; n > 2 && i <= n; i++) {
		e = x / y; all += e;
		t = x; x += y; y = t;//计算下一个x,y
		//printf("x%d=%.0lf,y%d=%.0lf\n", i, x, i, y);//调试代码
		//printf("all=%.4lf\n", all);
	}
	printf("%.4lf", all);
	return 0;
}