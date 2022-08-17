#include<stdio.h>
void compare_string(char str1[30],char str2[30]);
int main()
{
char string1[30],string2[30];
printf("Enter your 1st string ");
fgets(string1,30,stdin);
printf("Enter your 2nd string ");
fgets(string2,30,stdin);
compare_string(string1,string2);
return 0;
}
void compare_string(char str1[30],char str2[30])
{
  int i;
  int result;
  for(i=0;str1[i] && str2[i];i++)
  {
    result=str1[i]-str2[i];
    if(result > 0 || result < 0)
    break;
  }
  if(result==0)
  printf("both are equal ");
  else if(result>0)
  printf("The right order is %s and %s" ,str2,str1);
  else if(result<0)
  printf("The right order is %s and %s is ",str1,str2);
}