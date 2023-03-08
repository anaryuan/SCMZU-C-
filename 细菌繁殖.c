#include<stdio.h>
#include<math.h>
int main()
{
	int a=1,b=0,c=0,d=0,n,i,e,s;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		s=a+b+c+d;
		e=a;a=d;d+=c;c=b;b=e;
		//printf("%d %d %d %d ",a,b,c,d);
		printf("%d ",s);
	}
	return 0;
}