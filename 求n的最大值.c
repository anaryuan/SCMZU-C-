#include<stdio.h>
int main()
{
	int n,i,j,m,s=0;
	scanf("%d",&m);
	for(i=1;s<m;i++)
	{
		n=i*2;//printf("%dn=%d\n",i,n);
		s=s+n*10+2;//printf("%ds=%d\n",i,s);
	}
	printf("%d",n-2);
	return 0;
}