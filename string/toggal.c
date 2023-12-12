#include<stdio.h>
main()
{
	char a[50];
	printf("enter your name:");
	int i;
	for(i=0;i<50;i++)
	{
		scanf("%c",&a[i]);
		if(i==0)
		{
			printf("%c",a[i]-32);
		}
		else
		{
			printf("%c",a[i]);
		}
	}
}