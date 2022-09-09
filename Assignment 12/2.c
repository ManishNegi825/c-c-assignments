/*Write a recursive function to print first N natural numbers in reverse order */
#include<stdio.h>
void reverse(int n);
int main()
{
 int n;
 printf("Enter n size ");
 scanf("%d",&n);
 reverse(n);
}
void reverse(int n)
{
 if(n>=1)
 printf("%d ",n);
   reverse(n-1);
}