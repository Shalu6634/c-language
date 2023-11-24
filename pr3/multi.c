// 1. wap to print reversed multplication table of given number
#include<stdio.h>
main()
{
	int i=10;
	int n;
	printf("enterthe value of n:");
	scanf("%d",&n);
	for(i; i>=1; i--)
	{
		printf("%d x %d = %d\n",n,i,n*i);
	}
}