#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, y=0, z; scanf("%d", &x);
	for (z = x; z > 0;)
	{
		y = z % 10+y*10;
		z /= 10;
	}
	if (y == x)printf("%d is palindrome number", x);
	else printf("%d is not palindrome number", x);
	return 0;
}