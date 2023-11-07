//1.WAP to find a the answer given formula (x+y)3.
#include<stdio.h>
main()
{
	int x,y,ans;
	
	printf("enter the value of x,y:");
	scanf("%d%d",&x,&y);
	
	ans=(x*x*x)-(y*y*y)-(3*x*x*y)+(3*x*y*y) ;
	printf("ans is:%d",ans); 
}