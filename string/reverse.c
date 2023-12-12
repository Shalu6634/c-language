#include<stdio.h>
main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	char a[n];
	printf("enter your name:");
	scanf("%s",&a);
	int i,length;
	for(i=0; i<n; i++)
	{
	   if(a[i]!=0)
	   {
	   	 length++;
	   }
	}
	for(i=n-1;i>=0; i--)
	{
		printf("%c",a[i]);
	}
}