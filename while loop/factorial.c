#include<stdio.h>
main()
{
	int i,sum=1;
	printf("enter the value of i:");
	scanf("%d",&i);
	while(i>=1)
	{
		sum=sum*i;
		i--;
	}
	printf("sum is:%d",sum);
}
