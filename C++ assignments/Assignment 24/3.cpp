//Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;
 void power(int,int);
int main()
{
  int a,b;
  cout<<"Enter a number first and then its power ";
  cin>>a>>b;
  power(a,b);
}
void power(int a, int b)
{
   int i,c=1;
   for(i=0;i<b;i++)
    c=c*a;
    cout<<"The result of "<<a<< " power "<<b<<" is "<<c;
}