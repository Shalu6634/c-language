#include<stdio.h>
main()
{
	//2. WAP to demonstrate the use of continue keyword.
	int x=1;
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	for(x; x<=10; x++)
	{
		
		if(x==n)
		{
			continue;
		}
		printf("%d ",x);
	} 
}