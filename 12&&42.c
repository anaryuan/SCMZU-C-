#include<stdio.h>
int main()
{
	int a,b,i,x,y,z;
	scanf("%d %d",&a,&b);
	for(i=a;i>=a&&i<=b;i++)
	{
	x=i/100;y=(i-x*100)/10;z=i-100*x-10*y;
		if(42==x*y*z&&12==x+y+z)
		{
			printf("%d\n",i);
	    }
	}
return 0;
}