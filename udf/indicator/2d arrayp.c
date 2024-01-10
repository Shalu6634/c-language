#include<stdio.h>
void  cube(int n)
{
    int i,j;
	int a[n][n];
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
    }
   for(i=0; i<n; i++)
   {
   	 for(j=0; j<n; j++)
   	 {
   	 	a[i][j]=a[i][j] * a[i][j] * a[i][j];
   	 	printf("%d ",a[i][j]);
   	 }
   }
}
main()
{
	int n;
	printf("enter array size:");
	scanf("%d",&n);
    cube(n);
}
