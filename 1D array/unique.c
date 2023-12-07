#include<stdio.h>
main()
{
	int i,j,n;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	int check=0;
	for(i=0; i<=n; i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0; i<=n; i++)
	{
		for(j=0; j<=n; j++)
		{
			
	   	if(a[i]==a[j]&&(i!=j))
		{
		check++;
		
		}
	  }
	  	if(check==0)
	   {
		printf("%d",a[i]);
	   }
	check=0;
	}

}
