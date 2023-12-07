#include<stdio.h>
main()
{
	int a[5]={1,3,6,4,5};
	int tmp,i,j;

   for(i=0; i<5; i++)
   {
   	 for(j=0; j<5; j++)
    {
	  	a[2]=a[3];
	  	a[3]=a[4];
	}
	
    }
	
	for(i=0; i<5-1; i++)
	{
	   printf("%d ",a[i]);	
	}
}
