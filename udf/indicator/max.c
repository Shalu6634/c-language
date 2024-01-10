#include<stdio.h>
//q3. wap to find maximum from array using pointer.
void max(int *a,int n)
{
	int i;
	for(i=0; i<n; i++)
	{
	   if(a[i]>a[0])
	   {
	   	 a[0]=a[i];
	   }
	}
	printf("max is :%d",a[0]);
}
main()
{
	int n;
	printf("enter an array:");
	scanf("%d",&n);
	int a[n],i;
	for(i=0; i<n; i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	max(&a,n);
}