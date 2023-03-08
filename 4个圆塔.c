 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	float x1, y1, d1, d2, d3, d4;
	scanf("%f,%f", &x1, &y1);
	d1 = sqrt((x1 - 2) * (x1 - 2) + (y1 - 2) * (y1 - 2));
	d2 = sqrt((x1 + 2) * (x1 + 2) + (y1 - 2) * (y1 - 2));
	d3 = sqrt((x1 - 2) * (x1 - 2) + (y1 + 2) * (y1 + 2));
	d4 = sqrt((x1 + 2) * (x1 + 2) + (y1 + 2) * (y1 + 2)); //printf("%f %f %f %f", d1, d2, d3, d4\n);
	if (d1 <= 1 || d2 <= 1 || d3 <= 1 || d4 <= 1) printf("height is 10\n");
	else printf("height is 0\n");
}