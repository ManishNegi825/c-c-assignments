/*Write a function to display employee data. [ Refer structure from question 1 */
#include<stdio.h>
#include<string.h>
void display(struct employee b);
struct employee{
 int employee_id;
 char name[20];
 float salary;
 char company[35];
}data;
int main()
{
printf("Enter your employee id,name,salary & your company name ");
scanf("%d",&data.employee_id);
fflush(stdin);
fgets(data.name,20,stdin);
data.name[strlen(data.name)-1]='\0';
scanf("%f",&data.salary);
fflush(stdin);
fgets(data.company,35,stdin);
display(data);
return 0;
}
void display(struct employee b)
{
  printf("\n %d %s %f %s ",b.employee_id,b.name,b.salary,b.company);
}