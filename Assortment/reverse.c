//Write a program inCto read n number of values in an array and display them in reverse order.
#include<stdio.h>
main()
{
	int n;
	printf("enter the array:");
	scanf("%d",&n);
	int a[5];
	int i;
	for(i=0; i<=n; i++)
	{
     	printf("enter  array elements:");
		scanf("%d",&a[i]);
	}
	for(i=n; i>=0; i--)
	{
		printf("%d ",a[i]);
	}
}