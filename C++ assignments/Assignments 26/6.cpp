//Define a class student and write a program to enter student details using constructor and 
// define member function to display all the details.
#include<iostream>
#include<cstring>
using namespace std;
class student {
private:
int roll_no,standard;
char name[20],father_name[20],section[5];
public:
student(int a,int b,const char stu_name[20],const char f_name[20],const char sec[5])
{
    roll_no=a;
    standard=b;
    strcpy(name,stu_name);
    strcpy(father_name,f_name);
    strcpy(section,sec);
}
void display()
{
  cout<<"Roll no = "<<roll_no<<" class = "<<standard<<" Student name = " <<name<<" Fathers name= "<<father_name<<" section = "<<section;
}
};
int main()
{
    student s(10,5,"Manish negi","Jaspal singh", "D");
    s.display();

  return 0;
}