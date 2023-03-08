#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d:%d:%d", &a, &b, &c);
	c += 1;
	if (60 == c) { c = 0; b += 1; }
	if (60 == b) { b = 0; a += 1; }
	if (24 == a)a = 0;
	printf("%02d:%02d:%02d", a, b, c);
	return 0;
}