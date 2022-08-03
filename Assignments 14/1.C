/*Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user. */
#include<stdio.h>
int main()
{
int a[10],sum=0,i;
  for(i=0;i<=9;i++)
  {
   printf("Enter 10 numbers ");
   scanf("%d ",&a[i]);
   sum=sum+a[i];
}
printf("The sum of array is %d ",sum);
return 0;
}
