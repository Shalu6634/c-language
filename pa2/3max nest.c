#include<stdio.h>
main()
{
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
	  	printf("a is mini");
	  }	
	  else
	  {
	  	//c
	  	printf("c is mini");
	  }
	}
	else
	{
	  //b,c
	  if(b<c)
	  {
	  	//b
	  	printf("b is mini");
	  }	
	  else
	  {
	  	//c
	  	printf("c is mini");
	  }
	}
}