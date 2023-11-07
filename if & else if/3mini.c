#include<stdio.h>

main()
{
	//2 WAP to Find min from given 3 no using nested if else
	int a,b,c;
	printf("enter the value of a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	//a,b,c
	if(a<b)
	{
		//a,c
		if(a<c)
		{
			//a
			printf("a is minimum");
		}
		else
		{
			//c
			printf("c is minimum");
		}
	}
	else
	{
		//b,c
		if(b<c)
		{
			//b
			printf("b is minimum");
		}
		else
		{
			//c
			printf("c is minimum");
		}
	}
	

}