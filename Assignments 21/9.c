/*Write a program to store information of n students and display them using structure */
#include<stdio.h>
#include<string.h>
struct students
{
 int rollno;
 char name[20];
 int marks;
};
int main()
{
 int size,i;
 printf("Enter the size of the array ");
 scanf("%d",&size);
 struct students class[size];
for(i=0;i<size;i++)
{
  printf("Enter the value of roll no,your name & marks ");
  scanf("%d",&class[i].rollno);
  fflush(stdin);
  fgets(class[i].name,20,stdin);
  class[i].name[strlen(class[i].name)-1]='\0';
  scanf("%d",&class[i].marks);
}
printf("Here the stored data \n");
for(i=0;i<size;i++)
{
printf("Roll no =%d Name= %s marks = %d\n",class[i].rollno,class[i].name,class[i].marks);
}
 return 0;
}
