#include<iostream>
using namespace std;
class Rectangle
{
   private:
   int l,b;
   public:
    int rectangle(int a,int c)
  {
     l=a;
     b=c;
     return l*b;
  }
  void display()
  {
    cout<<"The area is "<<l*b;
  }
};
 int main()
{
    Rectangle obj;
    obj.rectangle(25,8);
    obj.display();
    return 0;
}