#include<stdio.h>
main()
{
	//4. WAP to print the multiplication table of each element of the array.
	int n; 
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	int i,j;
	for(i=0; i<n; i++)
	{
		printf("enter the a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=1; j<10; j++)
		{
			printf("%d x %d =%d\n",a[i],j,a[i]*j);
		}
		printf("\n");
	}
}