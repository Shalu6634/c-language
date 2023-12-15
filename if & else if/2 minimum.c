#include<stdio.h>
main()
{
	int a,b; 
	printf("enter the value of a,b:");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		printf("a is minimum");
	}
	else
	{
		printf("b is minimum");
	}
}