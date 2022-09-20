/*Define a class Time to represent a time with instance variables h,m and s to store hour, minute and second.
Also define following member functions a.void setTime(int,int,int)b. void showTime()c.void normalize()d.Time add(Time)*/
#include<iostream>
using namespace std;
class Time  {
private:
int h,m,s;
public:
void settime(int a,int b,int c)
{
   h=a;
   m=b;
   s=c;
}
void showtime()
{
  cout<<h<<" Hours:"<<m<<" Minutes:"<<s<<" seconds";
}
Time add(Time b)
{ 
   Time temp;
   temp.h=h+b.h;
   temp.m=m+b.m;
   temp.s=s+b.s;
   return temp;
}
void normalize()
{ 
    while(m>60 && s>60)
 {
     if(s>=60)
   {
     m++;
     s=abs(60-s);
   }
   if(m>=60)
   {
      h++;
      m=abs(60-m);
   }
 }
}
};
int main()
{
  Time c1,c2,c3;
  c1.settime(5,70,105);
  c2.settime(4,50,45);
  c3=c1.add(c2);
  c3.normalize();
  c3.showtime();
 return 0;
}



