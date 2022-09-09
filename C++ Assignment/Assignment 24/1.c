#include<iostream>
using namespace std;
void primecheck(int);
int main()
{
int a,i;
cout<<"Enter the number to check ";
cin>>a;
primecheck(a);

 return 0;
}
void primecheck(int a)
{
  int i,flag=1;
  for(i=2;i<a/2;i++)
  {
     if(a%i==0)
     {
       flag=0;
     printf("Not an prime number ");
     break;
     }
  }
   if(flag)
   printf("This is a prime number ");
}
