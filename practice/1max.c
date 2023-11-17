#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter the value of a,b,c,d:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b && a>c && a>d)
	{
		printf("a is max");
	}
	else if(b>a && b>c && b>d)
	{
		printf("b is max");
	}
	else if(c>a && c>b && c>d)
	{
        printf("c is max");		
	}
	else
	{
		printf("d is max");
	}
}