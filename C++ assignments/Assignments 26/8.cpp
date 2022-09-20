//Define a class Bank and define member functions to read principal,rate of interest and year.
//Another member functions to calculate simple interest and display it.Initialise all details using constructor.
#include<iostream>
using namespace std;
class Bank
{
  private:
  int principal,years;
  public:
  static int roi;
  Bank(int a,int b)
  {
    principal=a;
    years=b;
  }
   void calculate_simple_int()
    {
      cout<<"The simple interest is "<<(principal*roi*years)/100<<endl;
    }
};
int Bank::roi = 7;
int main()
{
  Bank B1(10000,2);
  Bank B2(126500,3);
  B1.calculate_simple_int();
  B2.calculate_simple_int();
  return 0;
}