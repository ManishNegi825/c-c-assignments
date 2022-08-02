#include<stdio.h>
int prime(int);
int main()
{
 int number,check;
 printf("Enter a number to check ");
 scanf("%d",&number);
 check= prime(number);
 check==1?printf("This is a prime number "):printf("This is not an prime number");
return 0;
}
int prime(int num)
{
  int i,c;
  for(i=2;i<num;i++)
  {
    if(num%i==0)
    {
    c=0;
    break;
    }
  }
  if(num==i)
  c=1;
  return c;
}