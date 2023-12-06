#include<stdio.h>
main()
{
	//1.WAP to get & print 1D array of N elements.
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0; i<n; i++)
	{
		printf("enter the value :");
		scanf("%d",&a[i]);
	}

	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
}