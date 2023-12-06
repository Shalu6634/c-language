//6. Write a program in C to copy the elements of one array into another array.
#include<stdio.h>
main()
{
	int n,i;
	printf("enter n:");
	scanf("%d",&n);
	int a1[n],a2[n];
	for(i=0; i<n; i++)
	{
		printf("enter : a[%d]",i);
		scanf("%d",&a1[i]);
	}
	for(i=0; i<n; i++)
	{
		a2[i]=a1[i];
	}
	for(i=0; i<n; i++)
	{
		printf("%d ",a1[i]);
	}
	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("%d ",a2[i]);
	}
}
