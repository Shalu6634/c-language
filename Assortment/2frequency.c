#include<stdio.h>
main()
{
	int n;
	printf("enter size of array:");
	scanf("%d",&n);
	int x[n],y[n];
	int i,j,f=1;
	for(i=0; i<n; i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(x[i]==x[j])
			{
				f++;
				x[j]=0;
			}
		}
		b[i]=f;
		if(a[i]!=0)
		{
			printf("%d -> %d\n",x[i],f);
		}
		f=1;
	}
}
