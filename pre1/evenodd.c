#include<stdio.h>
main()
{
	int y,a,ans;
	 printf("enter value a:");
	 scanf("%d",&a);
	 
	 y=a/2;
	 
	 ans = y*2;
	 printf("even = %d\n",ans==a);
	 printf("odd = %d",ans!=a);
}