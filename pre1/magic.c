#include<stdio.h>

main()
{
	int a,b,c;
	printf("enter value a:");
	scanf("%d",&a);
	printf("enter value b:");
	scanf("%d",&b);
	printf("enter value c:");
	scanf("%d",&c);
	
	printf("magic num:%d",a*b*c==a+b+c);
}