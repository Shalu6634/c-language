#include<stdio.h>
main()
{
	//3. Count No. of digits, alphabets & and special characters.
	int i;
	char  a[100];
	int count=0,digit=0,ch=0;
	printf("enter string:");
	scanf("%s",&a);
	for(i=0; a[i]!=0; i++)
	{
		if(a[i]>=65 && a[i]<=90||a[i]>=97 && a[i]<=122)
		{
			count++;
		}
		else if(a[i]>=48 && a[i]<=57)
		{
			digit++;
		}
		else
		{
			ch++;
		}
	}
	printf("alphabet = %d\n",count);
	printf("digits = %d\n",digit);
	printf("special character = %d\n",ch);
}