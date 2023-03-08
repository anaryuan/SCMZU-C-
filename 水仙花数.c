#include<stdio.h>
void main()
 {
	 int a,b,i,x,y,z;scanf("%d %d",&a,&b);
	  for(i=a;i>=a&&i<=b;i++)
	  {
		  x=i/100;y=(i-x*100)/10;z=i-100*x-10*y;
		  if(i==x*x*x+y*y*y+z*z*z){printf("%d\n",i);}
	  }
 }