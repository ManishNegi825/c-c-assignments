//Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include<iostream>
using namespace std;
class cube
{
  private:
  int side;
  public:
  cube(int a)
  {
     side=a;
     side=side*side*side;
   cout<<"The volume of cube is "<<side<<"\n";
  }
};
int main()
{
   cube c1(5),c2(17);
  return 0;
}