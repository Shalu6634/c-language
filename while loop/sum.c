#include<stdio.h>
main()
{
	int i=1,sum=0,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("sum is:%d",sum);
}
