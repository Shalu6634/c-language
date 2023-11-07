#include<stdio.h>
main()
{
	//3 WAP to Find max from given 4 no using nested if else
   int a,b,c,d;
	printf("enter the value of a,b,c:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	//a,b,c,d
	if(a>b)
	{
		//a,c,d
		if(a>c)
		{
			//a,d
			if(a>d)
            {
	           //a
	           printf("a is max");
			}
			else
			{
			  	//d
			  	printf("d is max");
			}			
		}
		else
		{
			//c,d
			if(c>d)
			{
				//c
				printf("c is max");
			}
			else
			{
				//d
				printf("d is max");
			}
		}
	}
	else
	{
		//b,c,d
		if(b>c)
		{
			//b,d
			if(b>d)
			{
				//b
				printf("b is max");
			}
			else
			{
				//d
				printf("d is max");
			}
		}
		else
		{
			//c,d
			if(c>d)
			{
				//c
				printf("c is max");
			}
			else
			{
				//d
				printf("d is max");
			}
		}
	}

}