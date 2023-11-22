#include<stdio.h>
main()
{
	int i=1;
	int n;
	int f=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		f=f*i;
	}
	printf("sum is :%d ",f);
}