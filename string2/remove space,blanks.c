#include<stdio.h>
main()
{
	int a[50];
	printf("enter your name:");
	int i;
	for(i=0;i<50; i++)
	{
		scanf(" %c",&a[i]);
		if(a[i]==' ')
		{
			a[i]=0;
		}
		if(a[i]!=0)
	    {
		  printf("%c",a[i]);
	    }
	}
}

