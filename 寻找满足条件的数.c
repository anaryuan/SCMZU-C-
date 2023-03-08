#include<stdio.h>
int main()
{
	int a,b,i,q,w,e,r,v;
	scanf("%d %d",&a,&b);
	for(i=a,v=0;i<=b;i++)
	{
		q=i/1000;
		w=(i-1000*q)/100;
		e=(i-1000*q-100*w)/10;
		r=i%10;
		if(q+w==e+r)
		{
			printf("%d ",i);v++;
		}
	}
	printf("\n%d",v);
	return 0;
}