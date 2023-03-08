#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n1, n2, i;
	unsigned short v;
	scanf("%o %d,%d", &v, &n1, &n2);
	v <<= (n1 - 1);
	v >>= ((n1 - 1) + (16 - n2));
	printf("result:%o", v);
	return 0;
}