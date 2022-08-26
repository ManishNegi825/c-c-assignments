/*Write a function to take input employee data from the user. */
#include<stdio.h>
#include<string.h>
 struct employee input();
struct employee
{
  int member_id;
  char name[20];
  float salary;
};
int main()
{
  struct employee data;
  data=input();
  printf("%d %s %f",data.member_id, data.name,data.salary);

return 0;
}
 struct employee input()
{
  struct employee b;
  printf("enter the value of bookid, your name & salary ");
  scanf("%d",&b.member_id);
  fflush(stdin);
  fgets(b.name,20,stdin);
  b.name[strlen(b.name)-1]='\0';
  scanf("%f",&b.salary);
  return b;
}