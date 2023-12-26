//Q.1 Write a Program to find the sum of all 1D Array elements
// by passing an array as an argument using UDF.
#include<stdio.h>
int sumArray(int*a,int n)
{
    int sum=0,i;
    for(i=0; i<n; i++)
    {
  	  sum=sum+a[i];
    }
    return sum;
}
main()
{

	int i,n;
	printf("enter the value of n:");
    scanf("%d",&n);
	int a[n];
    for(i=0; i<n; i++)
    {
      printf("enter a[%d]:",i);
      scanf("%d",&a[i]);
    }
 //  sumArray(a);
   int x=sumArray(a,n);
    printf("sum is :%d",x);
}