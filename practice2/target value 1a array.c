#include<stdio.h>
main()
{
  int n;
  printf("enter n:");
  scanf("%d",&n);
  int x;
  printf("enter target value :");
  scanf("%d",&x);
  int a[n],i,j;
  for(i=0; i<n; i++)
  {
  	printf("enter a[%d]:",i);
  	scanf("%d",&a[i]);
  }	
  for(i=0; i<n; i++)
  {
  	for(j=i+1; j<n; j++)
  	{
  		if(a[i]+a[j]==x)
  		{
  			printf("(%d,%d)",a[i],a[j]);
		}
	}
  }
}