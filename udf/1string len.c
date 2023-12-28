#include<stdio.h>
int string(int a)
{
	int length=strlen(a);
	printf("length is :%d",length);
	return length;
}
main()
{
	char a[50];
	printf("enter your name:");
	gets(a);
	string(a);
}