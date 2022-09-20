//Define a class Box and write a program to enter length, breadth and height and
//Initialise objects using constructor also define member functions to calculate volume of the box.
#include<iostream>
using namespace std;
class box
{
    private:
   float length,breadth,height,vol;
   public:
     box(float a,float b,float c)
   {
      length=a;
      breadth=b;
      height=c;
   }
     void volume()
   { 
      vol=length*breadth*height;
      cout<<"The volume of the box is = "<<vol;                
   }
};
int main()
{
   box c(12.2,5.25,7.6);
   c.volume();
  return 0;
}