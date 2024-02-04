#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int a[n];
	int i,x,max=a[0];
	
	for(i=0; i<n; i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	int second=0;
	for(i=0; i<n; i++)
	{	
	  if(a[i]>0)
	  {
	     max=a[i];
	  }
	}
	for(i=0; i<n; i++)
	{
	     if(second<a[i]&&a[i]<max)
             {
     		second=a[i];
	     } 
		printf("max number is : %d\n",max)
		printf("second max :%d ",second);
}
