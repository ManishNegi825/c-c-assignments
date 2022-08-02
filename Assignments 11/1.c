#include<stdio.h>
int LCM(int,int);
int main()
{
  int num1,num2,c;
  printf("Enter two numbers ");
  scanf("%d %d ",&num1, &num2);
  c=LCM(num1,num2);
  printf("The LCM value is %d ",c);
  return 0;
}
int LCM(int a,int b)
{                     
   int max = a>b?a:b;
   while(1)
   {
     if(max%a == 0 && max%b==0)
        break;
      max++;
   }
   return max;
} 
