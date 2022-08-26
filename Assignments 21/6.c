/*Write a function to sort employees according to their names */
#include<stdio.h>
#include<string.h>
struct employee input();
void display(struct employee d);
struct employee
{
 int employeeid;
 char name[20];
 float salary;
}temp;
void sortbyname(struct employee a[],int size);
int main()
{
struct employee b[2];
int i;
for(i=0;i<2;i++)
{
printf("Enter the value of employee id,Name & salary ");
b[i]=input();
}
sortbyname(b,2);
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
void display(struct employee b)
{
 printf("\n %d %s %f ",b.employeeid,b.name,b.salary);
}
void sortbyname(struct employee b[],int size)
{
  int i,j;
  for(i=0;i<size;i++)
  {
    for(j=i+1;j<size;j++)
    {      
    if(strcmp(b[i].name, b[j].name)>0) 
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
