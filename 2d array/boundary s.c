#include<stdio.h>
main()
{
	int x,y;
	printf("enter rows:");
	scanf("%d",&x);
	printf("enter coloum:");
	scanf("%d",&y);
	int a[x][y];
	int i,j,sum=0;
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			printf("enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			if(j==0 || j==4 || i==0 || i==4)
			{
				printf("%d ",a[i][j]);
				sum=sum+a[i][j];
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("sum is %d",sum);
}