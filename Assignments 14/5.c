/*Write a program to find the smallest number stored in an array of size 10. Take array values from the user. */
#include<stdio.h>
int main()
{
int a[10],i,temp;
for(i=0;i<=9;i++)
{
  printf("Enter a number ");
  scanf("%d",&a[i]);
   if(temp>a[i])
   temp=a[i];
}
printf("smallest value in array is %d",temp);
return 0;
}