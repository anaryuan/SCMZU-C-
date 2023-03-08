#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float s;
	scanf("%f", &s);
	switch ((int)s/1000)
	{
	case 0:printf("%.2f\n", s); break;
	case 1:printf("%.2f\n", 0.9 * s); break;
	case 2:printf("%.2f\n", 0.85 * s); break;
	case 3:printf("%.2f\n", 0.8 * s); break;
	default:printf("%.2f\n", 0.75 * s);
		break;
	}
	return 0;
}