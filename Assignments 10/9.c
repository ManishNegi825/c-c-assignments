#include<stdio.h>
int digit(int,int);
int main()
{
  int num,dig,c;
 printf("Enter num & digit ");
 scanf("%d %d ",&num,&dig);
  c = digit(num,dig);
  c==1?printf("Digit matched"):printf("value doesn't matched");
return 0;
}
int digit(int number,int digit)
{
   int i,remainder,check;
   while(number!=0)
   {
     remainder=number%10;
     number=number/10;
      check= remainder==digit?1:0;
      if(check==1)
      break;
   }

     return check;
}
    