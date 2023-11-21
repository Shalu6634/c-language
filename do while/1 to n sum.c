#include<stdio.h>
main()
{
	int x;
	int n;
	int sum=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	do
	{
      sum=sum+x;
      x++;
      
	}while(x<=n);
	printf("%d ",sum);
}