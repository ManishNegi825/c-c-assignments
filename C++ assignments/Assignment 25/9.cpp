//Define a class Circle and define an instance member function to find the area of the circle.
#include<iostream>
using namespace std;
class circle
{
   private:
   float radius;
   public:
   int area(int a)
   {
      radius= 3.14*a*a;              
      return radius;
   }
   void display()
   {
     cout<<"The area of circle is "<<radius;
   }
};
int main()
{
   circle c;
   c.area(8);
   c.display();
  return 0;
}