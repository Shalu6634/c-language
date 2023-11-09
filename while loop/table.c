#include<stdio.h>
main()
{
	int n,i=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	while(i<=10)
	{
		printf("%d*%d=%d\n",n,i,n*i);
		i++;
	}
}
