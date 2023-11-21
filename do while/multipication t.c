#include<stdio.h>
main()
{
	int a=1;
	int n;
	printf("enter he value of n:");
	scanf("%d",&n);
	do
	{
		printf("%d * %d = %d\n",a,n,a*n);
		a++;
		
	}while(a<=10);
}