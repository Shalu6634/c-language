#include<stdio.h>
main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	int i,j,x;
	for(i=0; i<n; i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			x=a[i];
			a[i]=a[j];
			a[j]=x;
		}
		printf("%d ",a[i]);
	}
}