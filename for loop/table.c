#include<stdio.h>
main()
{
	int i=1;
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1; i<=10; i++)
	{
		printf("%d * %d = %d\n",i,n,n*i);
	}

}