#include<iostream>
using namespace std;
class Reverse
{
  public:
 void Reversenumber(int a)
 {
   int i;
   while(a!=0)
   {
      i=a%10;
      cout<<i;
      a=a/10;
   }
 }
};
int main()
{
 Reverse a;
 a.Reversenumber(135698);
 return 0;
}