#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, ji=1, n ,l;
	scanf("%d", &l);
	for (i = 1; i <= l; i++)
	{
		scanf("%d", &n); //printf("n=%d\n", n);
		if (1== n % 2)ji *= n; //printf("ji=%d\n", ji);
	}
	printf("%d", ji);
	return 0;
}