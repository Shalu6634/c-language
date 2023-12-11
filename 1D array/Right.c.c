#include<stdio.h>
main()
{
	int n,i,j,x;
	printf("enter the value of n:");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter the value of a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
				x=a[i];
				a[i]=a[j];
				a[j]=x;
		}
		printf("%d ",a[i]);
	}
}
