#include<stdio.h>
main()
{
	int a;
	printf("enter the value of a:" );
	scanf("%d",&a);
	if(a>0)
	{
		printf("a ia positive");
	}
	else if(a<0)
	{
		printf("a ia negative");
	}
	else
	{
		printf("a is neutral");
	}
}