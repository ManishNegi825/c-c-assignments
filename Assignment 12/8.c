/*Write a recursive function to print binary of a given decimal number */
#include<stdio.h>
void binary_decimal(int n);
int main()
{
int n;
printf("Enter the number ");
scanf("%d",&n);
binary_decimal(n);
return 0;
}
void binary_decimal(int n)
{
   if(n==1)
   printf("1");
else
  {
    binary_decimal(n/2);
    printf("%d",n%2);
  }
}
