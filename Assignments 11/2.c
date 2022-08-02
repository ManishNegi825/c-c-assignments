#include<stdio.h>
int HCF(int,int);
int main()
{
 int num1,num2;
 printf("Enter two values ");
 scanf("%d %d",&num1,&num2);
 HCF(num1,num2);
 printf("%d",HCF(num1,num2));
return 0;
}
int HCF(int a,int b)
{
   int i,min,c;
   min = a>b?a:b;
   for(i=2;i<=min;i++)
   {
       if(a%i==0 && b%i==0)
       c=i;
    }
    return c;
   }
