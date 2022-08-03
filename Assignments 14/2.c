/*Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user. */
#include<stdio.h>
int main()
{
int a[10],i;
float avg=0,sum=0;
for(i=0;i<=9;i++)
{
  printf("Enter a numbre ");
  scanf("%d",&a[i]);
  sum=sum+a[i];
}
avg=sum;
avg=avg/10;
printf("The average of values are %f",avg);
return 0;
}