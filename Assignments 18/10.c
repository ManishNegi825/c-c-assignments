/*Write a function to find the repeated character in a given string.*/
#include<stdio.h>
void repeat_ch(char str[50]);
int main()
{
  char str[50];
  printf("Enter your string ");
  fgets(str,50,stdin);
  repeat_ch(str);
 return 0;
}
void repeat_ch(char str[50])
{
 int i,j,count=0;
 for(i=0;str[i];i++)
 {
    int count=0;
   for(j=i+1;str[j];j++)
   {
     if(str[i]==str[j])
     count++;
   }
   if(str[i]==32)
   continue;
   else if(count>0)
     printf("%c \n",str[i]);
 }

}