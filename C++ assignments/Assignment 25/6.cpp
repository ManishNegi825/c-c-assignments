#include<iostream>
using namespace std;
class square
{
   private:
   int num;
   
   public:
   void square1(int a)
   {
     static int count;
     num=a;
     num *= num;
      count ++ ;
      cout<<"square is "<<num<<endl;
      cout<<"The number of time funcation called "<<count<<endl;
   }
};
int main()
{
 square c;
 c.square1(12);
 c.square1(15);
 c.square1(25);

return 0;
}