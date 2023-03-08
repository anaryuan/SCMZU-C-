#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n[11] = { 1,4,7,10,11,24,34,45,56,76,0 }; 
	int a; scanf("%d", &a);//²åÈëµÄÊý
	int i, m;
	for (i = 0; i < 10; i++)
	{
		if (n[i-1] < a && a <= n[i])
		{
			m = i;
			break;
		}
		else m = 10;
	}
	for (i = 9; i >= m; i--)
		{
			n[i + 1] = n[i];
		}
	n[m] = a;
	for (i = 0; i < 10; i++)
		printf("%d,", n[i]);
	printf("%d", n[10]);
	return 0;
}