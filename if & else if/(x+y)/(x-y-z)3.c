//1.WAP to find a the answer given formula (x-y-z)3.
#include<stdio.h>
main()
{
	int x,y,z,ans;
	
	printf("enter the value of x,y,z:");
	scanf("%d%d%d",&x,&y,&z);
	
	ans=(x*x*x) - (y*y*y) - (z*z*z)- 
	3*x*x*y+3*x*y*y-3*y*y*z-3*y*z*z+3*x*z*z-3*x*x*z+6*x*y*z;
	
	printf("ans is:%d",ans); 
}
