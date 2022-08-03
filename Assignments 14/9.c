/*Write a program in C to read n number of values in an array and display it in reverse order. 
Take array values from the user*/
#include<stdio.h>
int main()
{
int a[10],i,j;
printf("Enter a number ");
for(i=0;i<=9;i++)
scanf("%d",&a[i]);
for(i=9;i>=0;i--)
{
 printf("%d ",a[i]);
}
return 0;
}