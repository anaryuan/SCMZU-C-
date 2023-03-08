#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x=1, y=1;
	scanf("%d,%d", &x, &y);
	int gcd(int m, int n); int lcm(int m, int n);
	printf("gcd:%d\nlcm:%d\n", gcd(x, y), lcm(x, y));
	return 0;
}
int gcd(int m, int n)
{
	int i,gc=1;
	for (i = 1; i <= m && i <= n; i++)
	{
		if (m % i == 0 && n % i == 0)gc = i;
	}
	return gc;
}
int lcm(int m, int n)
{
	int i; if (m > n)i = m; else i = n;
	for (;; i++)
	{
		if (0 == i % m && 0 == i % n)break;
	}
	return i;
}