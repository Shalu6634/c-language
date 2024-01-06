#include<stdio.h>
main()
{
//Q.1 Write a Program to find the reverse of a 1D array using a Chain of Pointers.
    int n;
	printf("enter n:");
	scanf("%d",&n);	
	//int a[5]={1,2,3,4,5};
    int a[n];
	int *ptr=&a[n-1];
    int i;
    for(i=0; i<n;i++)
    {
    	printf("enter a[%d]:",i);
    	scanf("%d",&a[i]);
	}
	for(i=n;i>0;i--)
	{
		printf("%d\n",*ptr);
		ptr=ptr-1;
	}
}
