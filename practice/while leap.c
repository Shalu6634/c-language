#include<stdio.h>
main()
{
	int x=2000,y=3000;
	int sum;
	while(x<=y)
	{
		printf("%d ",x);
		x+=4;
		sum=sum+x;
    }
    printf("sum is %d",sum);
}