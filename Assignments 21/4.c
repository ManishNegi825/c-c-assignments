/*Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1] */
#include<stdio.h>
#include<string.h>
struct employee input();
void display(struct employee c);
void high(struct employee b[],int size);
struct employee{  
 int employeeid;
 char name[20];
 float salary;
}data;
int main()
{
 struct employee b[10];
 int i;
 for(i=0;i<10;i++)
 {
   printf("Enter your employee id,name and salary ");
   b[i]=input();
 }
 high(b,10);
return 0;
}
struct employee input()
{
 struct employee b;
 scanf("%d",&b.employeeid);
 fflush(stdin);
 fgets(b.name,20,stdin);
 b.name[strlen(b.name)-1]='\0';
 scanf("%f",&b.salary);
 return b;
}
void display(struct employee c)
{
 printf("\n %d %s %f",c.employeeid,c.name,c.salary);
}
void high(struct employee b[],int size)
{
  int j,i;
  struct employee temp;
  for(i=0;i<size;i++)
  {
    for(j=i+1;j<size;j++)
    {
      if(b[i].salary<b[j].salary)
        {
           temp=b[j];
           b[j]=b[i];
           b[i]=temp;
        }
    } 
  }
  display(b[0]);
}
