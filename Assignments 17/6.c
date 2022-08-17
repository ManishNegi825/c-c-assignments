#include<stdio.h>
int main()
{
  int i,count=0;
  char str[35];
  printf("Enter your string ");
  fgets(str,35,stdin);
  for(i=0;str[i];i++);
  count=i;
  for(i=count-1;i>=0;i--)
  printf("%c",str[i]);
 return 0;
}