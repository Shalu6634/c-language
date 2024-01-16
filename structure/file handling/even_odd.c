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
	    	}
       }
       
		printf("\nodd : ");
		
    	for(i=50;i<=70;i++)
	    {
		    if(i%2!=0)
		    {
			   printf("%d ",i);
		    }
       	}
       	fprintf("%d ",i);
       	fprintf("%d ",i);
	}
	
//	for(i=50;i<=70;i++)
//	{
//		if(i%2==0)
//		{
//			fprintf(even,"%d ",i);
//		}
//		else
//		{
//			fprintf(odd,"%d ",i);
//		}
//	}
}
