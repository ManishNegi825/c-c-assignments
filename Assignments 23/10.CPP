#include<iostream>
using namespace std;
int main ()
{
int a[10],total=0;
cout<<"Enter 10 values ";
for(int i=0;i<10;i++)
{
cin>>a[i];
total=total+a[i];
}
cout<<"The total of the 10 value is "<<total;
return 0;
}