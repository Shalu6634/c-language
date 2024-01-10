//Q.1 Write a Program to find the square of each element of a given 1D array using a Pointer.
#include<stdio.h>
void  square(int n,int *a)
{
   int i;
   for(i=0; i<n; i++)
   {
   	 a[i]= a[i] * a[i];
   	 printf("\nsquare is : %d\n",a[i]);
   }

}
main()
{
	int n;
	printf("enter array size:");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0; i<n; i++)
	{
	 	printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
    }
    square(n,a);
}