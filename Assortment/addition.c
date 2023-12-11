//4. Write a program to get two array and create addition of array position wise.
 // ex: A= 1,2,3 B=5,6,7 answer = 6,8,10
#include<stdio.h>
main()
{
	int n; 
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	int b[n];
	int c[n];
	int i,sum[n];
	for(i=0; i<n; i++)
	{
		printf("enter:a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("enter:b[%d]",i);
		scanf("%d",&b[i]);
	}
	for(i=0; i<n; i++)
	{
		sum[n]=a[i]+b[i];
		printf("%d ",sum[n]);
    }
}