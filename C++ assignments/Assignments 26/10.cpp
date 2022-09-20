//Define a class StaticCount and create a static variable.Increment this variable in a
//Function and call this 3 times and display the result.
#include<iostream>
using namespace std;
class staticcount 
{
   public:
   static int count;
    void check()
    {
      count++;
      cout<<"The count value is "<<count<<endl;
    }
};
int staticcount::count = 0;
int main()
{
  staticcount a,b,c;
  a.check();
  b.check();
  c.check();
 return 0;
}





