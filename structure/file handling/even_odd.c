#include<stdio.h>
main()
{
	FILE *even,*odd;
	even=fopen("even.txt","w");
	odd=fopen("odd.txt","w");
	
	int i,j;
	fprintf(even,"even : ");
	fprintf(odd,"Odd : ");
	printf("even : ");
	for(j=1;j<=1;j++)
	{
	  for(i=50;i<=70;i++)
	   {
		if(i%2==0)
		{
	           printf("%d ",i);
		   fprintf(even,"%d",i);
	    	}
           }
		printf("\nodd : ");
    	   for(i=50;i<=70;i++)
	    {
		if(i%2!=0)
		{
		     printf("%d ",i);
		     fprintf(odd,"%d",i);
		}
            }
       
	}
}
