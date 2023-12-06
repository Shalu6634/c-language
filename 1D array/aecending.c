//max
#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int a[n];
	int i,j,temp;
	for(i=0; i<=n; i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<=n; i++)
	{
		for(j=i+1; j<=n; j++)
		{
			if(a[i]>a[j])
			{
			  temp=a[j];
			  a[j]=a[i];
		      a[i]=temp;
		    }
		}
	}
	for(i=0; i<=n; i++)
	{
		printf("%d ",a[i]);
	}
}