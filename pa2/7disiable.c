#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	if(n%7==0)
	{
		printf("%d = disiable by 7",n);
	}
	else
	{
		printf("%d = not disiable by 7",n);
	}
}