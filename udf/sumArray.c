#include<stdio.h>
int array(int a[],int n)
{
	int i,x,sum=0;
	for(i=0; i<n; i++)
    {
    	sum=sum+a[i];
	}
	return sum;
}
main()
{
	int n,i;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("sum is :%d",array(a,n));
}