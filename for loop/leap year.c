#include<stdio.h>
main()
{
	int x=2000;
	int y=3000;
	int a;
	for(a=x; x<y; x++)
	{
		x=x+4;
		printf("%d ",x);
	}
}