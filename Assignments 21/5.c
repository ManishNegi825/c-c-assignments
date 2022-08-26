/*Write a function to sort employees according to their salaries (refer structure from question 1)*/
#include<stdio.h>
#include<string.h>
struct employee input();
void display(struct employee c);
struct employee{
int employee_id;
char name[20];
float salary;
};
void sortbysalary(struct employee b[],int size);
int main()
{
 struct employee b[5];
 int i;
 for(i=0;i<5;i++)
 {
  printf("Enter your employee id,name & salary");
  b[i]=input();
 }
 sortbysalary(b,5);
return 0;
}
struct employee input()
{
  struct employee b;
  scanf("%d",&b.employee_id);
  fflush(stdin);
  fgets(b.name,20,stdin); 
  b.name[strlen(b.name)-1]='\0';
  scanf("%f",&b.salary);
  return b;
}
void display(struct employee c)
{
  printf("\n%d %s %f ",c.employee_id,c.name,c.salary);
}
void sortbysalary(struct employee b[],int size)
{
  int i,j;
  struct employee temp;
  for(i=0;i<size;i++)
  {
   for(j=i+1;j<size;j++)
   {
     if(b[i].salary>b[j].salary)
     {
         temp=b[i];
         b[i]=b[j];
         b[j]=temp;
     }
   }
  }
  for(i=0;i<size;i++)
  display(b[i]);
}