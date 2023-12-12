#include<stdio.h>
main()
{
	int n;
	char a[n];
	printf("enter value of n:");
	scanf("%d",&n);
	printf("enter your name:");
	scanf("%s",&a);
	int i,length=0;
	for(i=0; i<n; i++)
	{
		if(a[i]!=0)
		{
			length++;
		}
	}
	for(i=0; i<length; i++)
	{
		if(a[i]>=65 && a[i]<=90) 
		{
			printf("%c",a[i]+32);
		}
		else
		{
			printf("%c",a[i]);
		}
	}
	
	
}