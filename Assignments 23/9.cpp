#include<iostream>
using namespace std;
int main (){
int a,b;
cout<<"Enter two number ";
cin>>a>>b;
if(a>b)
cout<<"Heighst number is a "<<a;
else if(b>a)
cout<<"Heighst number is b "<<b;
else
cout<<"Both are equal ";
return 0;
}