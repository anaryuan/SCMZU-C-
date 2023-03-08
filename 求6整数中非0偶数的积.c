#include<stdio.h>
int main()
{
	int ji=1,n,i;
	for(i=1;i<=6;i++)
	{
		scanf("%d",&n);
		if (0==n%2&&0!=n)
		ji*=n;
	}
	printf("%d",ji);
	return 0;
}