/*Write a program to store information of 10 students and display them using structure.*/
#include<stdio.h>
int main()
{
struct students{
 int rollno;
 int class;
 char name[25];
};
struct students b[5];
 int i;
 for(i=0;i<10;i++)
 {
   printf("enter your roll no and class ");
   scanf("%d %d", &b[i].rollno,&b[i].class);
   printf("enter Your name ");
   fflush(stdin);
   fgets(b[i].name,25,stdin);
 }
 printf("The data we have stored ");
 for(i=0;i<10;i++)
 printf("\n Roll no = %d Class = %d & name = %s ",b[i].rollno,b[i].class,b[i].name);
return 0;
}