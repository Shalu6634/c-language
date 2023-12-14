#include<stdio.h>
main()
{
	char a[100];
	int i,digit=0;
	printf("ENTER THE STRING:");
	gets(a);
	for(i=0; i<strlen(a); i++)
	{
		if(a[i]>=48 && a[i]<=57)
		{
			digit++;
		}
	}
	if(digit!=0)
	{
		printf("string is numeric");
	}
	else
	{
		printf("string is not numeric");
	}
}