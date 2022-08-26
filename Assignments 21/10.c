/*Write a program to enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) 
using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks
 and then display the percentage of each student. */
 #include<stdio.h>
 #include<string.h>
 struct marks
 {
 int rollno;
 char name[25];
 int chem_marks;
 int math_marks;
 int phy_markss;
 };
 int main()
 {
struct marks a[2];
float percantage[2];
int i;
for(i=0;i<2;i++)
{
 printf("Enter your values for roll no & Name "); 
 scanf("%d",&a[i].rollno);
 fflush(stdin);
 fgets(a[i].name,25,stdin);
 a[i].name[strlen(a[i].name)-1]='\0';
 printf("Enter your marks out of 100 : chemistry marks, math marks,phyics marks ");
 scanf("%d %d %d",&a[i].chem_marks,&a[i].math_marks,&a[i].phy_markss);
}
for(i=0;i<2;i++)
{
   percantage[i]=(a[i].chem_marks+a[i].math_marks+a[i].phy_markss)*100/300; 
   printf("\n The percantage of %s is %f",a[i].name,percantage[i]);              
}

return 0;
 }