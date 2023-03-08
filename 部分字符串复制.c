#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void copstr(char* s1, char* s2, int n)
{
	strcpy(s2, s1 + (n - 1));
}int main()
{
	char s1[50], s2[50]; int n;
	gets(s1);
	scanf("%d", &n);
	if (n > strlen(s1))
		printf("input error!");
	else
	{
		copstr(s1, s2, n);
		printf("result:%s", s2);
	}
	return 0;
}
