//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1
#include<stdio.h>
main()
{
	int i,j;
  for(i=1; i<=5;i++)
  {
  	 for(j=i; j<=5; j++)
  	  {
  		 printf("%d",j);
	  }
	  printf("\n");
  }
}