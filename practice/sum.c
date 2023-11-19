#include<stdio.h>
main()
{
	int n,sum=0;
	
	for(n=1; n<=10; n++)
	{
		printf("%d ",n);
		sum=sum+n;
    } 
    printf("sum is :%d",sum);
}