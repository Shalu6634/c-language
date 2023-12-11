#include<stdio.h>
main()
{
	//5. Write a program in C to set the array in acending order.
	int n,j;
	printf("enter the value of n:");
	scanf("%d",&n);
	int a[n],i,temp;
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}	
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}