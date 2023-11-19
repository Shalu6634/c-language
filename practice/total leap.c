#include<stdio.h>
main()
{
	int x,y;
	printf("enter the value of x:");
	scanf("%d",&x);
	printf("enter the value of y:");
	scanf("%d",&y);
	
	int total=(x-y)/4+1;
	printf("total leap year =%d",total);
	
}