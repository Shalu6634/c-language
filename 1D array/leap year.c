#include<stdio.h>
main()
{
	int n,y;
	printf("enter  the value of n:");
	scanf("%d",&n);
	printf("enter  the value of y:");
	scanf("%d",&y);
	
	int i;
	int a[n];
	int count=0;
	for(i=n; i<=y; i++)
	{
		if(i%4==0)
		{
			count++;
		}
		printf("\n");
	}
	printf("total leap year is :%d\n",count);
	
}