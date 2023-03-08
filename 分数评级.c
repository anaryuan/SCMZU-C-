#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int n;scanf("%d",&n);
	if(100>=n&&0<=n)
	{
	if(n<60)printf("Level E\n");
	if(n>=60&&n<70)printf("Level D\n");
	if(n>=70&&n<80)printf("Level C\n");
	if(n>=80&&n<90)printf("Level B\n");
	if(n>=90&&n<=100)printf("Level A\n");
	}
	else printf("Input Error");
	retrun 0;
}