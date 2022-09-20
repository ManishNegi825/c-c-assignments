/*Define a class Complex to represent a complex number with instance variables a and b to store real and imaginary parts.
Also define following member functions a. void setData(int,int)  b. void showData()   c. Complex add(Complex)*/
#include<iostream>
using namespace std;
class Complex
{
  private:
  int a,b;
  public:
  void setdata(int x,int y)
  {
      a=x;
      b=y;
  }
  void showdata()
  {
    cout<<a<< " + "<<b<<"i";
  }
  Complex add(Complex c)
  {
     Complex temp; 
     temp.a=a+c.a;
     temp.b=b+c.b;
     return temp; 
     /*c.a=a+c.a; //second method without temp
     c.b=b+c.b;
     return c;  */                
  }
};
int main()
{
  Complex c1,c2,c3;
  c1.setdata(7,8);
  c2.setdata(10,12);
  cout<<"The sum for both is ";
  c3=c1.add(c2);
  c3.showdata();
 
 return 0;
}
