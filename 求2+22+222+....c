#include<stdio.h>
int main()
{
	int a, n, s, i, k;
	scanf("%d %d",&a,&n);
	for(i=2,s=a,k=a;i<=n;i++)
	{
		a=a*10+k;
		s+=a;//printf("a=%d,s=%d\n",a,s);
	}
	printf("%d",s);
	return 0;
}