#include<iostream>
using namespace std;
class Greatest_digit
{
  private:
  int num;
  public:
  void LD(int b);
};
void Greatest_digit::LD(int b)
{
     num=b;
     int remainder,digit=0;
     while(num!=0)
     {
      remainder=num%10;
      if(digit<remainder)
      digit=remainder;
      num=num/10;
     }
     cout<<"Greatest digit is "<<digit;
  }
  int main()
  {
    Greatest_digit b;
    b.LD(153798);
    return 0;
  }