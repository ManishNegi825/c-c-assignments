/*Define a class Bill and define its member function get() to take detail of customer ,calculateBill() 
function to calculate electricity bill using below tariff :A.Upto 100 unit RS. 1.20 per unit
B.From 100 to 200 unit RS. 2 per unit   C.Above 200 units RS. 3 per unit.*/
#include<iostream>
using namespace std;
class Bill 
{
  private:
  int unit,amount;
  public:
  void get(int a)
  {
    unit=a;
  }
   void Calculate_bill()
   {
    switch(unit<=100)
    {
      case 1:
       amount=unit*1.20;
       cout<<"The bill is "<<amount;
       break;
       case 0:
       switch(unit>100 && unit<=200)
       {
        case 1:
        amount=120+(unit-100)*2;
        cout<<"The bil is "<<amount;
        break;
        case 0:
        amount=120+200+(unit-200)*3;
        cout<<"The final bill is "<<amount;
          break;
        }
       }
    }
  };
  int main()
  {
    Bill B1,B2;
    B1.get(152);
    B1.Calculate_bill();
    return 0;
  }