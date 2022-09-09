#include<iostream>
using namespace std;
class factorial
{
  private:
  int num;
  public:
  void fact(int a);
  inline void display();
  void update(int c)
  {
    num=c;
  }
};
void factorial::fact(int a)
 {
   int i,k=1;
   for(i=1;i<=a;i++)
   k *= i;
   num=k;
 }
void factorial::display()
{
  cout<<num;
}
int main()
{
  factorial c;
  c.fact(6);
  c.display();
  return 0;
  }