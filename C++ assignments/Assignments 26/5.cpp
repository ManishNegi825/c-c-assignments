//Define a class Date and write a program to Display Date and initialise date object using Constructors.
#include<iostream>
using namespace std;
class Date
{
  private:
  int Day,month,year;
  public:
    Date(int a,int b,int c)
  {
     Day=a;
     month=b;
     year=c;
  }
   void displaydate()
   {
      cout<<Day<<" day "<<month<<" month "<<year<<endl;
   }
};
int main()
{
  Date c(11,5,2022),d(12,6,2020);
  c.displaydate();
  d.displaydate();
return 0;
}