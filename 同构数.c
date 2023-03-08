#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int tgs(int x)
{
	int v = x * x;
	int q, w, e, r;
	q = v / 1000;
	r = v % 10;
	w = (v - 1000 * q) / 100;
	e = (v - 1000 * q - 100 * w) / 10;
	if (v == x || v - 1000 * q == x || v - 1000 * q - 100 * w == x || r == x)
		return 1;
	return 0;
}
int main()
{
	int i;
	int a, b;
	scanf("%d %d", &a, &b);
	for (i = a; i <= b; i++)
		if (tgs(i))
			printf("%d\n", i);
	return 0;
}