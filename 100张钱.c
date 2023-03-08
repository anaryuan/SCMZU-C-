#include<stdio.h>
int main()
{
	printf("5yuan 1yuan 0.5yuan\n");
	int five,one,half,i=0;
	for(five=1;five<=11;five++)
	 for(one=1;one<=91;one++)
	 {
	 half=100-five-one;
	 if(100==five+one+half&&100==5*five+one+0.5*half)
	   {
	printf("%4d%6d%6d\n",five,one,half);i++;
	   }
	 }
     printf("total:%d",i);
return 0;
}