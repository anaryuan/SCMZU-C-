#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int N, i, t;
	int a[100];
	scanf("%d", &N);
	for (i = 0; N != 0; i++) 
	{
		a[i] = N % 2;
		N = N / 2;
	}

	for (t = i - 1; t >= 0; t--) 
	{
		printf("%d", a[t]);
	}

}