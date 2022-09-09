#include<iostream>
using namespace std;
int add(int,int,int);
float add(int,float,int);
float add(float,float,float);
int main()
{
  int a,b,c;
  float d;
  cout<<"enter three values ";
  cin>>a>>b>>c;
  cout<<"the sum is "<<add(a,b,c);
  cout<<endl<<"enter three values of float ";
  cin>>a>>d>>c;
  cout<<"The sum including float value is "<<add(a,d,c);
  float e,f,g;
  cout<<endl<<"Enter the value of e f and g ";
  cin>>e>>f>>g;
  cout<<"The sum of 3rd function is  "<<add(e,f,g);

return 0;
}
int add(int a,int b,int c)
{
  return a+b+c;
}
float add(int a,float b, int c)
{
   return a+b+c;
}
float add(float e,float f,float g)
{
   return e+f+g;
}