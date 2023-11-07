#include<stdio.h>

main()
{
	//4 WAP to Find min from given 5 no using nested if else
	int a,b,c,d,e;
	printf("enter the value of a,b,c,d,e:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	//a,b,c,d,e
	if(a<b)
	{
		//a,c,d,e
		if(a<c)
		{
			//a,d,e
			if(a<d)
			{
				//a,e
				if(a<e)
				{
					//a
					printf("a is min");
				}
				else
				{
					//e
						printf("e is min");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					//d
					printf("d is min");	
				}
				else
				{
					//e
					printf("e is min");
				}
			}
		}
		else
		{
			//c,d,e
			if(c<d)
			{
				//d,e
				if(d<e)
				{
					//d
					printf("d is min");
				}
				else
				{
					//e
					printf("e is min");
				}
				
			}
			else
			{
				//c,e
				if(c<e)
				{
				    //c
					printf("c is min");	
				}
				else
				{
					//e
					printf("e is min");
				}
				
			}
			
		}
	}
	else
	{
		//b,c,d,e
		if(b<c)
		{
			//b,d,e
			if(b<d)
			{
				//b,e
				if(b<e)
				{
					//b
					printf("b is min");
					
				}
				else
				{
					//e
					printf("e is min");
					
				}
			}
			else
			{
			  //d,e
		    	if(d<e)
			     {
			     	//d
			     	printf("d is min");
			     }
			    else
			     {
				    //e
				    printf("e is min");
		         }	
			}	
		}
		else
		{
			//c,d,e
			if(c<d)
			{
				//c,e
				if(c<e)
				{
					//c
					printf("c is min");
				}
				else
				{
					//e
					printf("e is min");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					//d
					printf("d is min");
				}
				else
				{
					//e
					printf("e is min");
					
				}
			}
		}
	}
	

}