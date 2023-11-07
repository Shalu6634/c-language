//2.W4P to Swap two variables (without using the third variable)
#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	printf("enter the value of a:");
	scanf("%d",&a);
	
	printf("enter the value of b:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d | b=%d ",a,b);

}