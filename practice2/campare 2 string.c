//2. WAP compares two strings. 
#include<stdio.h>
main()
{
	char a[50];
	printf("enter the string:");
	gets(a);
	char b[50];
	printf("enter the string:");
	gets(b);
	int i,length=0;
	for(i=0; a[i]!=0; i++)
	{
		length++;
	}
	printf("length is :%d\n",length);
	int j=0;
	int check=0;
	for(i=0; i<length; i++)
	{
		if(a[i]!=a[j])
		{
			check=1;
		}
		j++;
	}
	if(check==0)
	{
		printf("string is same");
	}
	else
	{
	   printf("string is not same");	
	}
	
}