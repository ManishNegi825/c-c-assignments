#include<iostream>
using namespace std;
int maximum(int,int);
float maximum(float,float);
int main()
{
 int a,b;
 cout<<"enter the value of a and b ";
 cin>>a>>b;
 cout<<"max number among two is "<<maximum(a,b);
 float c,d;
 cout<<endl<<"Enter float value of c and d ";
 cin>>c>>d;
 cout<<"max number among float value is "<<maximum(c,d);
return 0;
}
int maximum(int a,int b)
{
   if(a>b)
   return a;
   else if(b>a)
   return b;
   return 0;
}
float maximum(float a,float b)
{
   if(a>b)
   return a;
   else if(b>a)
   return b ;
   return 0;
}