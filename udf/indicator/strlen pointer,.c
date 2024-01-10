#include<stdio.h>
void str(char *a)
{
	int l=strlen(a);
	printf("string is : %d",l);
}
main()
{
	// find length of string using a pointer.
	char a[50];
	printf("enter the string:");
	scanf("%s",&a);
	int *ptr=&a;
	str(&a);
}