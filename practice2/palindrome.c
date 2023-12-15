#include<stdio.h>
main()
{
	char a[50];
	printf("enter your name:");
	scanf("%s",&a);
	int i,length=0;
	for(i=0;a[i]!=0; i++)
	{
		length++;
	}
	printf("%d",length);
	int j=length;
	int check=0;
	for(i=0; i<length; i++)
	{
		if(a[i]!=a[j-1])
		{
			check=1;
		}
		j--;
	}
	if(check==0)
	{
		printf("\nstring is palindrome:");
	}
	else
	{
		printf("\nstring is not palindrome:");
	}
}