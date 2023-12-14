#include<stdio.h>
main()
{
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	
	char a[n],b[n];
	int i,j,x=1;
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%s",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
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
			printf("%c -> %d\n",a[i],b[i]);
		}
		x=1;
	}
}
