/*Write a program to find the maximum number between two numbers using a pointer */
#include<stdio.h>
void bignum(int *p,int *q);
int main()
{
 int num1,num2;
printf("Enter two variables  ");
scanf("%d %d",&num1,&num2);
bignum(&num1,&num2);

return 0;
}
void bignum(int *p,int *q)
{
  if(*p>*q)
  printf("Bigger number is %d",*p);
   else if(*p==*q)
  printf("Both are equal ");
  else
  printf("Bigger number is %d",*q);
}