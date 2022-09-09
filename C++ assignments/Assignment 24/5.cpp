//Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
using namespace std;
void check_fibseries(int a);
int main()
{
  int a;
  cout<<"Enter a number ";
  cin>>a;
  check_fibseries(a);
return 0;
}
void check_fibseries(int a)
{
  int first=0,second=1,nxt,flag=1,i;
    for(i=0;i<=a;i++)      
    {
     nxt=first+second;
     first=second;
     second=nxt;
     if(a==first)
     {
     cout<<a<<" is a term in fibonacci series at "<<i+1<<"th";
     flag=0;
     break;
     }
    }   
    if(flag)
    cout<<"The "<<a <<" is not avaiable in fibonaaci series ";         
}