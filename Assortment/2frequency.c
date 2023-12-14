#include<stdio.h>
main()
{
	int n;
	printf("enter size of array:");
	scanf("%d",&n);
	int a[n],b[n];
	int i,j;
	int x=1;
	for(i=0; i<n; i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			{
				x++;
				a[j]=0;
			}
		}
		b[i]=x;
		if(a[i]!=0)
		{
			printf("%d -> %d\n",a[i],b[i]);
		}
		x=1;
	}
}