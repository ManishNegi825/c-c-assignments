/*Define a function to find the highest value digit in a given number.*/
#include<iostream>
using namespace std;
void Large_digit(int a);
int main()
{
 int a;
 cout<<"Enter a number ";
 cin>>a;
Large_digit(a);
return 0;
}
void Large_digit(int a)
{
   int i,remainder,digit1=0;
   while(a!=0)
   {
      remainder=a%10;
      if(digit1<remainder)
      digit1=remainder;
      a=a/10;
   }
   printf("heighest digit is %d ",digit1);
}