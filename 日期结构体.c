#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct date
{
	int year;
	int month;
	int day;
	int sum;
};
typedef struct date DATE;
int runyear(int year)
{
	if (year % 400 == 0)
		return 1;
	else
	{
		if (year % 4 == 0 && year % 100 != 0)
			return 1;
		else
			return 0;
	}
}
int main()
{
	DATE a;
	a.sum = 0;
	int i;
	int yue[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	scanf("%d%d%d", &a.year, &a.month, &a.day);
	yue[2] += runyear(a.year);
	for (i = 1; i < a.month; i++)
	{
		a.sum += yue[i];
	}
	a.sum += a.day;
	printf("%d\n", a.sum);
	return 0;
}