//defineing complex number
#include<iostream>
using namespace std;
class complex{
private:
int a;
int b;
public:
void input()
{
  cout<<"enter the first number ";
  cin>>a;
  cout<<"enter the real number ";
  cin>>b;
}
void output()
{
  cout<<a<<"+"<<b<<"i";
}
};
int main()
{
  complex b1;
  b1.input();
  b1.output();
  return 0;
}
