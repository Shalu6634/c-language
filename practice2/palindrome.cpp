//1. WAP check string is palindrome or not.
#include<stdio.h>
main()
{
	#include<stdio.h>
main()
{
	char name[50];
	printf("enter your name:");
	scanf("%s",name);
	int i;
	int length=0;
	for(i=0; name[i]!=0; i++)
	{
		length++;
	}
	printf("%d",length);
	int j=length;
	int check=0;
	for(i=0; i<length; i++)
	{
		if(name[i]!=name[j-1])
		{
			 check=1;
		}
		j--;
	}
	if(check==0)
	{
		printf("\nstring is palindrome");
	}
	else
	{
		printf("\nstring is not palindrome");
	}
	
}

	
}