#include<iostream>
using namespace std;
class areas
{
   private:
   int a,l,b;
   float r;
   public:
   void area_square(int side)
   {
      a=side;
      a*=a;
      cout<<"The area of square is "<<a<<endl;
   }
   void rectangle (int length,int breadth)
   {
       l=length;
       b=breadth;
       cout<<"the area of rectangle is "<<l*b<<endl;
   }
   void circle(float radius)
   {
      r=radius;
      r=3.14*r*r;
      cout<<"The area of circle is "<<r<<endl;
   }
};
int main()
{
  areas obj;
  obj.area_square(8);
  obj.circle(5.25);
  obj.rectangle(14,15);
 return 0;
}