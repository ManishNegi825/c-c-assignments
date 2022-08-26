#include<iostream>
using namespace std;
int main ()
{
int a,b;
cout<<"Enter two values for a and b ";
cin>>a>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<"after swapping values "<<a<<" "<<"and "<<b;
return 0;
}