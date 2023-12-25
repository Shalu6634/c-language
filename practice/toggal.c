#include<stdio.h>
#include<string.h>
main()
{
	//5. WAP to convert given string in Toggal Case.
	char a[50];
	printf("enter your name:");
	scanf("%s",&a);
	int l=strlen(a);
	int i;
	for(i=0; i<l; i++)
	{
		if(a[0]>=97&&a[0]<=122)
		{
		    a[0]=a[0]-32;
		}
	}
   printf("%s",a);
	
}