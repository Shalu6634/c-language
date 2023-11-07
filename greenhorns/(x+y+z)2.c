//1.WAP to find a the answer given formula (x+y+z)2.
#include<stdio.h>
main()
{
	int x,y,z,ans;
	
	printf("enter the value of x,y,z:");
	scanf("%d%d",&x,&y,&z);
	
	ans=(x*x) + (y*y) + (z*z)- 2*x*y+2*y*z+2*x*z;
	printf("ans is:%d",ans); 
}