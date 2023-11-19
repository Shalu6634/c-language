#include<stdio.h>
main()
{
	int a,b;
	
	printf("enter the value of a,b:");
	scanf("%d%d",&a,&b);
	printf("%d",(a>b && b<a || a!=b && b>=a));
}