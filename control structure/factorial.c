#include<stdio.h>
main()
{
//3. WAP to find the n number factorial without a loop. (using a goto statement).
	
	int f=1;
	int n;
	int x=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	x:
	  f=f*x;
	  x++;
	  
	  if(x<=n)
	  {
	  	goto x;
	  }
	  printf("%d",f);
}