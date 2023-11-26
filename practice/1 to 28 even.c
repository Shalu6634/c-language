#include<stdio.h>
main()
{
    // 2. wap to find sum of even number between 1 to 28. 
     int n;
     int sum=0;
     for(n=1; n<=28; n++)
     {
        if(n%2==0)
        {
     		printf("%d ",n);
     		sum=sum+n;
		}
	 }
	 printf("\nsum : %d",sum);
}