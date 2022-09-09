#include<iostream>
using namespace std;
class Largestnumber
{
  private:
 int num1,num2,num3,big;
 public:
   void setter(int a,int b,int c)
   {
       num1=a;
       num2=b;
       num3=c;
   }
   int biggest()
   {
      if(num1>num2 &&num1>num3)
      return big=num1;
      else if (num2>num1 && num2>num3)
      return big=num2;
      else if(num3>num1 && num3>num2)
      return big=num3;
      return 0;
   }
   void display()
   {
      cout<<"The Largest number among them is "<<big;
   }
};

int main ()
{
  Largestnumber c2;
  c2.setter(8,9,10);
  c2.biggest();
  c2.display();
return 0;
}