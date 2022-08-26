/*Define a structure Employee with member variables id, name, salary*/
#include<stdio.h>
#include<string.h>
int main()
{
struct employee
{
int bookid;
char title[20];
float salary;                
};
struct employee re;
re.bookid=1;
strcpy(re.title,"manish negi");
re.salary=50000;
printf("%d %s %f ",re.bookid,re.title,re.salary);
return 0;
}
