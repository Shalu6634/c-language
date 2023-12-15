#include<stdio.h>
main()
{
	int n,b;
	printf("enter the row :");
	scanf("%d",&n);
    printf("enter the colum:");
	scanf("%d",&b);
	int a[n][b];
	int i,j,sum=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<b; j++)
		{
			printf(" enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	j=2;
	for(i=0; i<n; i++)
	{
		sum=sum+a[i][j];
		j--;
	}
	printf("sum is : %d",sum);
}