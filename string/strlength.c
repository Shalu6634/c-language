#include<stdio.h>
main()
{
	int n;
	char a[n];
	printf("enter n:");
	scanf("%d",&n);
	printf("enter your name :");
	scanf("%s",&a);
	int i,length=0;
	for(i=0; i<n; i++)
	{
		if(a[i]!=0)
		{
			length++;
		}
	}
	printf("string length is :%d",length);
}