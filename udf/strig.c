#include<stdio.h>
main()
{

    int n;
	printf("enter n:");
	scanf("%d",&n);	
    char a[n];
	char *ptr=&a[n-1];
    int i;
    for(i=0; i<n;i++)
    {
    	printf("enter a[%d]:",i);
    	scanf("%s",&a[i]);
	}
	for(i=n;i>0;i--)
	{
		printf("%c\n",*ptr);
		ptr=ptr-1;
	}
}