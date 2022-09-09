/*Write a recursive function to print reverse of a given number*/
#include<stdio.h>
void reverse(int n);
int main()
{
 int n;
 printf("Enter number to get squaer of n ");
 scanf("%d",&n);
 reverse(n);
return 0;
}
void reverse(int n)
{

  if(n>0)
  {
    printf("%d",n%10);
  reverse(n/10);
  }
}