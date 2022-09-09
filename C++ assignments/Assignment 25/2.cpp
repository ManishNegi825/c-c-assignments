#include<iostream>
using namespace std;
class time
{
private:
int hours,minutes,seconds;
public:
void set_time(int x,int y, int z)
{
   hours=x;
   minutes=y;
   seconds=z; 
}
void display()
{
  cout<<hours<<" HR "<<minutes<<" min "<<seconds<<" sec";
}
void update_hour(int h)
{
   hours=h; 
}
};
int main()
{
 time t1,t2;
 t1.set_time(5,45,27);
 t1.display();
 cout<<"\n"<<"Update value is  ";
 t1.update_hour(8);
 t1.display();
return 0;
}