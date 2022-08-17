#include<stdio.h>
void word_count(char str[30]);
int main()
{
char str[30];
printf("Enter your string ");
fgets(str,30,stdin);
word_count(str);
return 0;
}
void word_count(char str[30])
{
  int i,count=1;
  for(i=0;str[i];i++)
  {
    if(str[i]==32)
    count++;
  }
  printf("the words are in string is %d ",count);
}