//Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace  std;
inline int multiplay(int a,int b,int c=1);
int main()
{
 int a,b;
 cout<<"Enter the value of two numbers ";
 cin>>a>>b;
 cout<<multiplay(a,b)<<endl;
 int c;
 cout<<"enter the value of the three numbers ";
 cin>>a>>b>>c;
 cout<<multiplay(a,b,c);                     
} 
 int multiplay(int a,int b,int c)
 {
    int d;
    d=a*b*c;
    return d;
 }

