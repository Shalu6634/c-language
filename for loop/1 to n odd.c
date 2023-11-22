#include<stdio.h>
main()
{
	int x=1;
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(x; x<=n; x+=2)
	{
	   printf("%d ",x);
	}
}