#include<stdio.h>
main()
{
	//5. wap to count digit of number
	int n;
	printf("enter teh value of n:");
	scanf("%d",&n);
	int x=0;
	while(n>0)
	{
		n=n/10;
		x++;
	}
	printf("%d",x);
}