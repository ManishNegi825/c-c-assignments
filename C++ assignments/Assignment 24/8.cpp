//Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
#include<iostream>
using namespace std;
float area(int );
float area(float,float);
int area(int,int);
int main()
{
  int r,l,w;
  float h,b;
  cout<<"enter the value of a radius to know area of circle ";
  cin>>r;
  cout<<"The area of circle is "<<area(r)<<endl;
  cout<<"Enter the height and base to know area of triangle ";
  cin>>h>>b;
  cout<<"area of trinagle is "<<area(h,b)<<endl;
  cout<<"Enter the value of length and width to know area of rectangle ";
  cin>>l>>w;
  cout<<"The are of rectangle is "<<area(l,w);
  return 0;
}
float area(int r)
{
  return 3.14*r*r;
}
float area(float h,float b)
{
  return h*b/2;
}
int area(int l,int w)
{
  return l*w;
}
