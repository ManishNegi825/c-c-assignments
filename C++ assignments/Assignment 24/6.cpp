//Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
inline void swapdata(int &,int &);
int main()
{
 int a,b;
 cout<<"Enter two num a and b ";
 cin>>a>>b;
 swapdata(a,b);

return 0;
}
void swapdata(int &a,int &b)
{
  int c;
  c=a;
  a=b;
  b=c;
  cout<<"Values after function use is a "<<a<<" b is "<<b;
}