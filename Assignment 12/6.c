/*Write a recursive function to print first N even natural numbers in reverse order  */
#include<stdio.h>
void reverse_even(int n);
int main()
{
  int n;
  printf("Enter the size of numbers ");
  scanf("%d",&n);
  reverse_even(n);
  return 0;
}
void reverse_even(int n)
{
  if(n>=1)
  {
    printf("%d ",2*n);
    reverse_even(n-1);
  }                   
} 