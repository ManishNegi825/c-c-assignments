#include<stdio.h>
int smallest(int b[],int);
int main()
{
 int n;
 printf("Enter the size of an array ");
 scanf("%d",&n);
 int a[n];
 printf("The smallest value in array is %d",smallest(a,n));
return 0;
}
int smallest(int b[],int size)
{
int i,min=0;
for(i=0;i<size;i++)
{
printf("Enter values of array ");
 scanf("%d",&b[i]);
 if(min>b[i]);
 min=b[i];
}
return min;
}