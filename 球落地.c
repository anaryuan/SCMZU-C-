#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double h0, h, s , i; 
	scanf("%lf", &h0); s = h0;
	for (i = 2,h = h0; i <= 5; i++)
	{
		h0 /= 2; //printf("%h0=%.4lf\n",h0);
		s += h0*2; //printf("s=%.4lf\n",s);
	}
	h0 /= 2;
	printf("%.2lf %.4lf", s, h0);
	return 0;
}